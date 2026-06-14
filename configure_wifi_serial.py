"""
EyeTrackVR WiFi Configuration via Serial Port

Usage:
    python configure_wifi_serial.py --port COM3 --ssid YourWiFi --password YourPassword

This sends commands directly over the serial port, bypassing the REST API.
Works with existing firmware without needing to recompile.
"""

import argparse
import serial
import time
import json
import sys


def send_command(ser: serial.Serial, command_json: dict) -> dict:
    payload = json.dumps(command_json, separators=(',', ':'))
    ser.write((payload + '\n').encode('utf-8'))
    time.sleep(1)

    response = b''
    deadline = time.time() + 3
    while time.time() < deadline:
        chunk = ser.read(ser.in_waiting or 1)
        if chunk:
            response += chunk
            deadline = time.time() + 0.5
        else:
            time.sleep(0.05)

    response_str = response.decode('utf-8', errors='replace').strip()
    print(f"  Response: {response_str}")

    try:
        return json.loads(response_str)
    except json.JSONDecodeError:
        return {"raw": response_str}


def main():
    parser = argparse.ArgumentParser(description='Configure EyeTrackVR WiFi via serial')
    parser.add_argument('--port', required=True, help='Serial port (e.g. COM3)')
    parser.add_argument('--ssid', required=True, help='WiFi network name')
    parser.add_argument('--password', required=True, help='WiFi password')
    parser.add_argument('--baud', type=int, default=115200, help='Baud rate (default 115200)')
    args = parser.parse_args()

    print("=" * 50)
    print("  EyeTrackVR WiFi Configuration (Serial)")
    print("=" * 50)
    print(f"  Port:     {args.port}")
    print(f"  SSID:     {args.ssid}")
    print(f"  Password: {args.password}")
    print()

    try:
        ser = serial.Serial(args.port, args.baud, timeout=1)
    except serial.SerialException as e:
        print(f"ERROR: Cannot open {args.port}: {e}")
        sys.exit(1)

    time.sleep(0.5)
    ser.reset_input_buffer()

    print("[Step 1/4] Setting WiFi credentials...")
    send_command(ser, {
        "commands": [{
            "command": "set_wifi",
            "data": {
                "name": "main",
                "ssid": args.ssid,
                "password": args.password,
                "channel": 0,
                "power": 0
            }
        }]
    })

    print("[Step 2/4] Switching device mode to WiFi...")
    send_command(ser, {
        "commands": [{
            "command": "switch_mode",
            "data": {"mode": "wifi"}
        }]
    })

    print("[Step 3/4] Saving config...")
    send_command(ser, {
        "commands": [{
            "command": "save_config"
        }]
    })

    print("[Step 4/4] Rebooting device...")
    send_command(ser, {
        "commands": [{
            "command": "restart_device"
        }]
    })

    ser.close()

    print()
    print("=" * 50)
    print("  Done! Device is rebooting.")
    print(f"  It will connect to: {args.ssid}")
    print()
    print("  After reboot:")
    print("  1. Find the device IP in your router admin")
    print("     or try: openiristracker.local")
    print("  2. Enter that IP in EyeTrackApp")
    print("=" * 50)


if __name__ == '__main__':
    main()
