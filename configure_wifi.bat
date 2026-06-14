@echo off
chcp 65001 >nul
setlocal

echo ============================================
echo   EyeTrackVR WiFi Configuration Tool
echo ============================================
echo.

set DEVICE_IP=192.168.4.1

set /p WIFI_SSID="WiFi Name (SSID): "
set /p WIFI_PASS="WiFi Password: "

echo.
echo --- Step 1/4: Setting WiFi credentials ---
curl.exe -X POST "http://%DEVICE_IP%:81/api/set/wifi/" -H "Content-Type: application/json" -d "{\"ssid\":\"%WIFI_SSID%\",\"password\":\"%WIFI_PASS%\"}"
echo.

echo --- Step 2/4: Switching device mode to WiFi ---
curl.exe -X PATCH "http://%DEVICE_IP%:81/api/update/device/mode/" -H "Content-Type: application/json" -d "{\"mode\":\"wifi\"}"
echo.

echo --- Step 3/4: Saving config ---
curl.exe -X POST "http://%DEVICE_IP%:81/api/set/config/save/"
echo.

echo --- Step 4/4: Rebooting device ---
curl.exe "http://%DEVICE_IP%:81/api/reboot/device/"
echo.

echo ============================================
echo   Done! Device is rebooting.
echo   It will connect to: %WIFI_SSID%
echo.
echo   After reboot:
echo   1. Connect your PC back to your home WiFi
echo   2. Find the device IP in your router admin
echo      or try: openiristracker.local
echo   3. Enter that IP in EyeTrackApp
echo ============================================

pause
