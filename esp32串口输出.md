ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x8 (SPI_FAST_FLASH_BOOT)
SPIWP:0xee
mode:DIO, clock div:1
load:0x3fce2820,len:0x1700
load:0x403c8700,len:0xec0
load:0x403cb700,len:0x31c0
entry 0x403c894c
I (25) boot: ESP-IDF v5.5.1-dirty 2nd stage bootloader
I (25) boot: compile time Jun 15 2026 00:04:52
I (25) boot: Multicore bootloader
I (26) boot: chip revision: v0.2
I (28) boot: efuse block revision: v1.3
I (32) qio_mode: Enabling default flash chip QIO
I (36) boot.esp32s3: Boot SPI Speed : 80MHz
I (40) boot.esp32s3: SPI Mode       : QIO
I (44) boot.esp32s3: SPI Flash Size : 16MB
I (48) boot: Enabling RNG early entropy source...
I (52) boot: Partition Table:
I (55) boot: ## Label            Usage          Type ST Offset   Length
I (61) boot:  0 nvs              WiFi data        01 02 00009000 00005000
I (68) boot:  1 otadata          OTA data         01 00 0000e000 00002000
I (74) boot:  2 app0             OTA app          00 10 00010000 001e0000
I (81) boot:  3 app1             OTA app          00 11 001f0000 001e0000
I (87) boot:  4 spiffs           Unknown data     01 82 003d0000 00020000
I (94) boot:  5 coredump         Unknown data     01 03 003f0000 00010000
I (100) boot: End of partition table
I (104) esp_image: segment 0: paddr=00010020 vaddr=3c110020 size=60f0ch (397068) map
I (170) esp_image: segment 1: paddr=00070f34 vaddr=3fc9c700 size=06184h ( 24964) load
I (175) esp_image: segment 2: paddr=000770c0 vaddr=40374000 size=08f58h ( 36696) load
I (182) esp_image: segment 3: paddr=00080020 vaddr=42000020 size=108158h (1081688) map
I (343) esp_image: segment 4: paddr=00188180 vaddr=4037cf58 size=0f6c4h ( 63172) load
I (355) esp_image: segment 5: paddr=0019784c vaddr=50000000 size=00020h (    32) load
I (365) boot: Loaded app from partition at offset 0x10000
I (365) boot: Disabling RNG early entropy source...
[0;32mI (375) octal_psram: vendor id    : 0x0d (AP)[0m
[0;32mI (375) octal_psram: dev id       : 0x02 (generation 3)[0m
[0;32mI (376) octal_psram: density      : 0x03 (64 Mbit)[0m
[0;32mI (380) octal_psram: good-die     : 0x01 (Pass)[0m
[0;32mI (386) octal_psram: Latency      : 0x01 (Fixed)[0m
[0;32mI (391) octal_psram: VCC          : 0x01 (3V)[0m
[0;32mI (396) octal_psram: SRF          : 0x01 (Fast Refresh)[0m
[0;32mI (402) octal_psram: BurstType    : 0x01 (Hybrid Wrap)[0m
[0;32mI (408) octal_psram: BurstLen     : 0x01 (32 Byte)[0m
[0;32mI (413) octal_psram: Readlatency  : 0x02 (10 cycles@Fixed)[0m
[0;32mI (419) octal_psram: DriveStrength: 0x00 (1/1)[0m
[0;32mI (425) MSPI Timing: PSRAM timing tuning index: 5[0m
[0;32mI (430) esp_psram: Found 8MB PSRAM device[0m
[0;32mI (435) esp_psram: Speed: 80MHz[0m
[0;32mI (438) cpu_start: Multicore app[0m
[0;32mI (855) esp_psram: SPI SRAM memory test OK[0m
[0;32mI (864) cpu_start: Pro cpu start user code[0m
[0;32mI (864) cpu_start: cpu freq: 240000000 Hz[0m
[0;32mI (864) app_init: Application information:[0m
[0;32mI (867) app_init: Project name:     blink[0m
[0;32mI (872) app_init: App version:      0.2.1rc0-33-g0d2880c-dirty[0m
[0;32mI (878) app_init: Compile time:     Jun 15 2026 00:04:44[0m
[0;32mI (884) app_init: ELF file SHA256:  ea5c586cf...[0m
[0;32mI (889) app_init: ESP-IDF:          v5.5.1-dirty[0m
[0;32mI (895) efuse_init: Min chip rev:     v0.0[0m
[0;32mI (900) efuse_init: Max chip rev:     v0.99 [0m
[0;32mI (904) efuse_init: Chip rev:         v0.2[0m
[0;32mI (909) heap_init: Initializing. RAM available for dynamic allocation:[0m
[0;32mI (917) heap_init: At 3FCA9F50 len 0003F7C0 (253 KiB): RAM[0m
[0;32mI (923) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM[0m
[0;32mI (929) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM[0m
[0;32mI (935) heap_init: At 600FE000 len 00001FE8 (7 KiB): RTCRAM[0m
[0;32mI (941) esp_psram: Adding pool of 8192K of PSRAM memory to heap allocator[0m
[0;32mI (949) spi_flash: detected chip: boya[0m
[0;32mI (953) spi_flash: flash io: qio[0m
[0;32mI (960) sleep_gpio: Configure to isolate all GPIO pins in sleep state[0m
[0;32mI (964) sleep_gpio: Enable automatic switching of GPIO sleep configuration[0m
[0;32mI (972) main_task: Started on CPU0[0m
[0;32mI (992) esp_psram: Reserving pool of 32K of internal memory for DMA/internal allocations[0m
[0;32mI (992) main_task: Calling app_main()[0m
[0;32mI (994) [LOGO]:                                                       : === WELCOME === TO === : [0m
[0;32mI (1004) [LOGO]:  <===========================================================================================================================> [0m
[0;32mI (1017) [LOGO]:                                         鈻堚枅鈻堚枅鈻堚枅鈺? 鈻堚枅鈻堚枅鈻堚枅鈺? 鈻堚枅鈻堚枅鈻堚枅鈻堚晽鈻堚枅鈻堚晽   鈻堚枅鈺椻枅鈻堚晽鈻堚枅鈻堚枅鈻堚枅鈺? 鈻堚枅鈺椻枅鈻堚枅鈻堚枅鈻堚枅鈺?   [0m
[0;32mI (1037) [LOGO]:                                        鈻堚枅鈺斺晲鈺愨晲鈻堚枅鈺椻枅鈻堚晹鈺愨晲鈻堚枅鈺椻枅鈻堚晹鈺愨晲鈺愨晲鈺濃枅鈻堚枅鈻堚晽  鈻堚枅鈺戔枅鈻堚晳鈻堚枅鈺斺晲鈺愨枅鈻堚晽鈻堚枅鈺戔枅鈻堚晹鈺愨晲鈺愨晲鈺?   [0m
[0;32mI (1058) [LOGO]:                                        鈻堚枅鈺?   鈻堚枅鈺戔枅鈻堚枅鈻堚枅鈻堚晹鈺濃枅鈻堚枅鈻堚枅鈺?  鈻堚枅鈺斺枅鈻堚晽 鈻堚枅鈺戔枅鈻堚晳鈻堚枅鈻堚枅鈻堚枅鈺斺暆鈻堚枅鈺戔枅鈻堚枅鈻堚枅鈻堚枅鈺?   [0m
[0;32mI (1078) [LOGO]:                                        鈻堚枅鈺?   鈻堚枅鈺戔枅鈻堚晹鈺愨晲鈺愨暆 鈻堚枅鈺斺晲鈺愨暆  鈻堚枅鈺戔暁鈻堚枅鈺椻枅鈻堚晳鈻堚枅鈺戔枅鈻堚晹鈺愨晲鈻堚枅鈺椻枅鈻堚晳鈺氣晲鈺愨晲鈺愨枅鈻堚晳   [0m
[0;32mI (1098) [LOGO]:                                        鈺氣枅鈻堚枅鈻堚枅鈻堚晹鈺濃枅鈻堚晳     鈻堚枅鈻堚枅鈻堚枅鈻堚晽鈻堚枅鈺? 鈺氣枅鈻堚枅鈻堚晳鈻堚枅鈺戔枅鈻堚晳  鈻堚枅鈺戔枅鈻堚晳鈻堚枅鈻堚枅鈻堚枅鈻堚晳   [0m
[0;32mI (1118) [LOGO]:                                         鈺氣晲鈺愨晲鈺愨晲鈺? 鈺氣晲鈺?     鈺氣晲鈺愨晲鈺愨晲鈺愨暆鈺氣晲鈺?  鈺氣晲鈺愨晲鈺濃暁鈺愨暆鈺氣晲鈺?  鈺氣晲鈺濃暁鈺愨暆鈺氣晲鈺愨晲鈺愨晲鈺愨暆   [0m
[0;32mI (1137) [LOGO]:                                                                                                           [0m
[0;32mI (1149) [LOGO]:                                                              鈻堚枅鈻堚枅鈻堚枅鈻堚枅鈻堚枅鈻堚枅鈻堚枅                               [0m
[0;32mI (1163) [LOGO]:                                                        鈻堚枅鈻撯枔鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻撯枔鈻撯枔鈻堚枅                         [0m
[0;32mI (1179) [LOGO]:                                                    鈻堚枅鈻堚枅鈻撯枔鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻堚枅鈻堚枅                     [0m
[0;32mI (1197) [LOGO]:                                                鈻堚枅鈻撯枔鈻掆枓鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻撯枔鈻撯枔                 [0m
[0;32mI (1216) [LOGO]:                                              鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻堚枅               [0m
[0;32mI (1236) [LOGO]:                                            鈻堚枅鈻撯枔鈻撯枔鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒  鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻堚枅             [0m
[0;32mI (1256) [LOGO]:                                          鈻堚枅鈻撯枔鈻撯枔鈻撯枔鈻撯枔鈻撯枔鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒      鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻堚枅           [0m
[0;32mI (1276) [LOGO]:                                        鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒  鈻戔枒            鈻掆枓鈻掆枓鈻堚枅         [0m
[0;32mI (1296) [LOGO]:                                        鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒                鈻戔枒鈻戔枒鈻堚枅         [0m
[0;32mI (1315) [LOGO]:                                      鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻撯枔鈻撯枔鈻撯枔鈻撯枔鈻撯枔    鈻戔枒  鈻掆枓鈻撯枔       [0m
[0;32mI (1336) [LOGO]:                                      鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻撯枔鈻撯枔    鈻戔枒鈻堚枅       [0m
[0;32mI (1358) [LOGO]:                                    鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒    鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻撯枔鈻掆枓  鈻戔枒鈻掆枓鈻撯枔     [0m
[0;32mI (1380) [LOGO]:                                    鈻堚枅鈻撯枔鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻撯枔鈻撯枔  鈻戔枒鈻堚枅     [0m
[0;32mI (1403) [LOGO]:                                    鈻堚枅鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒  鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻堚枅鈻堚枅鈻撯枔鈻戔枒鈻戔枒鈻掆枓鈻撯枔  鈻戔枒鈻堚枅     [0m
[0;32mI (1426) [LOGO]:                                  鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻掆枓鈻撯枔鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻撯枔鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻掆枓鈻堚枅鈻堚枅  鈻掆枓鈻堚枅鈻戔枒鈻掆枓鈻撯枔鈻撯枔  鈻戔枒鈻堚枅   [0m
[0;32mI (1449) [LOGO]:                                  鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻撯枔鈻戔枒鈻掆枓鈻掆枓鈻掆枓鈻堚枅鈻堚枅鈻堚枅鈻掆枓  鈻撯枔鈻撯枔鈻戔枒鈻撯枔鈻撯枔  鈻戔枒鈻堚枅   [0m
[0;32mI (1472) [LOGO]:                                  鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻撯枔鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻堚枅鈻堚枅鈻堚枅鈻堚枅鈻撯枔  鈻堚枅鈻撯枔鈻掆枓鈻撯枔  鈻戔枒鈻堚枅   [0m
[0;32mI (1495) [LOGO]:                                  鈻堚枅鈻撯枔鈻撯枔鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻堚枅鈻堚枅鈻堚枅鈻堚枅鈻堚枅鈻掆枓鈻堚枅鈻掆枓鈻掆枓鈻撯枔  鈻戔枒鈻堚枅   [0m
[0;32mI (1519) [LOGO]:                                  鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻堚枅鈻掆枓鈻堚枅鈻堚枅鈻堚枅  鈻堚枅鈻掆枓鈻掆枓鈻撯枔  鈻戔枒鈻堚枅   [0m
[0;32mI (1542) [LOGO]:                                  鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻撯枔鈻撯枔鈻撯枔鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒  鈻掆枓鈻戔枒鈻堚枅  鈻掆枓鈻堚枅鈻堚枅鈻掆枓鈻堚枅鈻掆枓鈻掆枓鈻撯枔  鈻戔枒鈻堚枅   [0m
[0;32mI (1565) [LOGO]:                                  鈻堚枅鈻撯枔鈻撯枔鈻撯枔鈻撯枔鈻戔枒鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻堚枅  鈻堚枅鈻堚枅鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻戔枒鈻戔枒鈻堚枅   [0m
[0;32mI (1589) [LOGO]:                                鈻堚枅鈻撯枔鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻撯枔鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻堚枅鈻堚枅鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻撯枔  鈻戔枒鈻堚枅     [0m
[0;32mI (1612) [LOGO]:                                鈻堚枅鈻撯枔鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻撯枔鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻戔枒鈻戔枒鈻堚枅     [0m
[0;32mI (1636) [LOGO]:                              鈻堚枅鈻掆枓鈻撯枔鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔  鈻戔枒鈻戔枒鈻堚枅     [0m
[0;32mI (1660) [LOGO]:                              鈻堚枅鈻掆枓鈻掆枓鈻撯枔鈻堚枅鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻撯枔  鈻戔枒鈻戔枒鈻堚枅       [0m
[0;32mI (1684) [LOGO]:                            鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻撯枔鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻掆枓鈻撯枔鈻撯枔鈻撯枔鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻堚枅       [0m
[0;32mI (1708) [LOGO]:                            鈻堚枅鈻掆枓鈻掆枓鈻撯枔鈻掆枓鈻撯枔鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒  鈻戔枒  鈻戔枒鈻戔枒鈻堚枅         [0m
[0;32mI (1732) [LOGO]:                          鈻堚枅鈻掆枓鈻掆枓鈻撯枔鈻戔枒鈻掆枓鈻掆枓鈻堚枅鈻撯枔鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻撯枔鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻堚枅         [0m
[0;32mI (1756) [LOGO]:                          鈻堚枅鈻掆枓鈻掆枓鈻撯枔鈻掆枓鈻戔枒鈻撯枔鈻掆枓鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻撯枔鈻掆枓鈻撯枔鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻撯枔鈻堚枅           [0m
[0;32mI (1780) [LOGO]:                          鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻掆枓鈻堚枅             [0m
[0;32mI (1803) [LOGO]:                          鈻堚枅鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻戔枒鈻掆枓鈻堚枅鈻堚枅  鈻堚枅鈻撯枔鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻掆枓鈻堚枅               [0m
[0;32mI (1826) [LOGO]:                          鈻堚枅鈻掆枓鈻撯枔鈻戔枒鈻掆枓鈻戔枒鈻撯枔        鈻堚枅鈻堚枅鈻撯枔鈻掆枓鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻堚枅鈻撯枔                 [0m
[0;32mI (1848) [LOGO]:                          鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻掆枓  鈻堚枅            鈻堚枅鈻堚枅鈻撯枔鈻掆枓鈻撯枔鈻撯枔鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻堚枅鈻堚枅                     [0m
[0;32mI (1868) [LOGO]:                            鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻堚枅              鈻堚枅鈻堚枅鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔鈻撯枔鈻堚枅鈻堚枅鈻堚枅                         [0m
[0;32mI (1886) [LOGO]:                            鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒  鈻堚枅鈻堚枅                鈻堚枅鈻堚枅鈻堚枅鈻堚枅鈻堚枅鈻堚枅鈻堚枅                               [0m
[0;32mI (1903) [LOGO]:                              鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻戔枒  鈻戔枒鈻堚枅鈻堚枅                                                         [0m
[0;32mI (1918) [LOGO]:                                鈻堚枅鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒  鈻戔枒鈻堚枅鈻堚枅                                                     [0m
[0;32mI (1934) [LOGO]:                                    鈻堚枅鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻戔枒鈻戔枒  鈻戔枒鈻堚枅                                                   [0m
[0;32mI (1949) [LOGO]:                                        鈻堚枅鈻堚枅鈻掆枓鈻掆枓鈻掆枓鈻戔枒  鈻戔枒鈻堚枅                                                 [0m
[0;32mI (1963) [LOGO]:                                            鈻堚枅鈻撯枔鈻掆枓鈻掆枓鈻戔枒  鈻掆枓鈻撯枔                                               [0m
[0;32mI (1977) [LOGO]:                                                鈻堚枅鈻堚枅鈻掆枓鈻戔枒  鈻掆枓鈻堚枅                                             [0m
[0;32mI (1991) [LOGO]:                                                    鈻撯枔鈻掆枓鈻戔枒鈻戔枒鈻堚枅                                             [0m
[0;32mI (2005) [LOGO]:                                                      鈻堚枅鈻戔枒  鈻堚枅                                             [0m
[0;32mI (2018) [LOGO]:                                                鈻撯枔鈻堚枅  鈻堚枅鈻戔枒鈻戔枒鈻堚枅                                             [0m
[0;32mI (2032) [LOGO]:                                              鈻堚枅鈻戔枒鈻堚枅  鈻堚枅鈻戔枒鈻戔枒鈻堚枅                                             [0m
[0;32mI (2046) [LOGO]:                                            鈻堚枅鈻戔枒鈻堚枅    鈻堚枅鈻戔枒鈻掆枓鈻堚枅                                             [0m
[0;32mI (2060) [LOGO]:                                            鈻堚枅鈻戔枒鈻掆枓鈻堚枅鈻堚枅鈻戔枒鈻掆枓鈻堚枅                                               [0m
[0;32mI (2075) [LOGO]:                                              鈻撯枔鈻掆枓鈻掆枓鈻掆枓鈻掆枓鈻撯枔                                                 [0m
[0;32mI (2088) [LOGO]:                                                鈻堚枅鈻堚枅鈻堚枅鈻堚枅                                                   [0m
[0;32mI (2102) [LOGO]:                                                                                                           [0m
[0;32mI (2113) [LOGO]:  <============================================================================================================================> [0m
[0;32mI (2146) [CONFIGURATION]: Config name: openiris[0m
[0;32mI (2146) [CONFIGURATION]: Config loaded: true[0m
[0;31mE (2146) [PREFERENCES]: nvs_get_str len fail: OTALogin NOT_FOUND[0m
[0;31mE (2152) [PREFERENCES]: nvs_get_str len fail: OTAPassword NOT_FOUND[0m
[0;32mI (2159) DeviceMode: Loaded device mode: 2[0m
[0;31mE (2164) [PREFERENCES]: nvs_get_str len fail: hostname NOT_FOUND[0m
[0;31mE (2170) [PREFERENCES]: nvs_get_str len fail: apSSID NOT_FOUND[0m
[0;31mE (2177) [PREFERENCES]: nvs_get_str len fail: apPassword NOT_FOUND[0m
[0;32mI (2185) WiFiConfig: Loaded network 0: name=main, ssid=LinkCJ, channel=0[0m
[0;32mI (2191) [LED_MANAGER]: Setting up status led.[0m
[0;32mI (2196) [LED_MANAGER]: Setting up illuminator led.[0m
[0;32mI (2202) [LED_MANAGER]: Setting dutyCycle to: 255 [0m
[0;32mI (2209) [AdcSampler]: ADC calibration initialized[0m
[0;32mI (2213) [CurrentMonitor]: LED current monitor enabled (GPIO=3, Shunt=22000m惟, Gain=11)[0m
[0;32mI (2222) [MonitoringManager]: LED current monitoring enabled. Interval=500ms, Samples=10, Gain=11, R=22000m惟[0m
[0;32mI (2232) [MonitoringManager]: Battery monitoring disabled by Kconfig[0m
[0;32mI (2239) [MonitoringManager]: Monitoring task started[0m
[0;32mI (2245) [CAMERA_MANAGER]: Setting up camera pinout[0m
[0;32mI (2250) [CAMERA_MANAGER]: [Camera]: Camera module is GOOUUU_ESP32S3_CAM[0m
[0;32mI (2258) [CAMERA_MANAGER]: Initializing camera...[0m
[0;32mI (2263) s3 ll_cam: DMA Channel=0[0m
[0;32mI (2267) cam_hal: cam init ok[0m
[0;32mI (2271) sccb-ng: pin_sda 4 pin_scl 5[0m
[0;32mI (2275) sccb-ng: sccb_i2c_port=1[0m
[0;32mI (2290) camera: Detected camera at address=0x30[0m
[0;32mI (2292) camera: Detected OV2640 camera[0m
[0;32mI (2293) camera: Camera PID=0x26 VER=0x42 MIDL=0x7f MIDH=0xa2[0m
[0;32mI (2367) cam_hal: buffer_size: 16384, half_buffer_size: 1024, node_buffer_size: 1024, node_cnt: 16, total_cnt: 11[0m
[0;32mI (2367) cam_hal: Allocating 11520 Byte frame buffer in OnBoard RAM[0m
[0;32mI (2374) cam_hal: Allocating 11520 Byte frame buffer in OnBoard RAM[0m
[0;32mI (2381) cam_hal: cam config ok[0m
[0;32mI (2385) ov2640: Set PLL: clk_2x: 0, clk_div: 0, pclk_auto: 0, pclk_div: 8[0m
[0;32mI (2464) [CAMERA_MANAGER]: Camera initialized: ESP_OK 

[0m
[0;32mI (2464) [CAMERA_MANAGER]: Setting up camera sensor[0m
[0;33mW (2486) cam_hal: NO-SOI[0m
[0;32mI (2490) ov2640: Set PLL: clk_2x: 0, clk_div: 0, pclk_auto: 0, pclk_div: 8[0m
[0;33mW (2491) cam_hal: NO-SOI[0m
[0;33mW (2501) cam_hal: NO-SOI[0m
[0;32mI (2532) [CAMERA_MANAGER]: Setting up camera sensor done[0m
[0;32mI (2532) [MAIN]: Starting WiFi streaming mode.[0m
[0;32mI (2533) pp: pp rom version: e7ae62f[0m
[0;32mI (2536) net80211: net80211 rom version: e7ae62f[0m
I (2542) wifi:wifi driver task: 3fcce134, prio:23, stack:6656, core=0
I (2558) wifi:wifi firmware version: 14da9b7
I (2558) wifi:wifi certification version: v7.0
I (2558) wifi:config NVS flash: enabled
I (2559) wifi:config nano formatting: disabled
I (2563) wifi:Init data frame dynamic rx buffer num: 32
I (2568) wifi:Init static rx mgmt buffer num: 5
I (2572) wifi:Init management short buffer num: 32
I (2577) wifi:Init static tx buffer num: 16
I (2581) wifi:Init static tx FG buffer num: 2
I (2585) wifi:Init static rx buffer size: 1600
I (2589) wifi:Init static rx buffer num: 10
I (2593) wifi:Init dynamic rx buffer num: 32
[0;32mI (2597) wifi_init: rx ba win: 6[0m
[0;32mI (2601) wifi_init: accept mbox: 6[0m
[0;32mI (2605) wifi_init: tcpip mbox: 32[0m
[0;32mI (2609) wifi_init: udp mbox: 6[0m
[0;32mI (2613) wifi_init: tcp mbox: 6[0m
[0;32mI (2617) wifi_init: tcp tx win: 5760[0m
[0;32mI (2621) wifi_init: tcp rx win: 5760[0m
[0;32mI (2625) wifi_init: tcp mss: 1440[0m
[0;32mI (2629) wifi_init: WiFi IRAM OP enabled[0m
[0;32mI (2634) wifi_init: WiFi RX IRAM OP enabled[0m
[0;32mI (2639) [WIFI_MANAGER]: Beginning setup[0m
[0;32mI (2643) [WIFI_MANAGER]: Hardcoded credentials failed or missing, trying stored credentials[0m
[0;32mI (2752) [WIFI_MANAGER]: Setting credentials for SSID: 'LinkCJ' (length: 6)[0m
[0;32mI (2752) [WIFI_MANAGER]: Password: 'cj29785908' (length: 10)[0m
[0;32mI (2755) [WIFI_MANAGER]: Auth mode: 1, PMF capable: 0[0m
[0;32mI (2761) [WIFI_MANAGER]: Attempting to connect to SSID: 'LinkCJ'[0m
[0;32mI (2768) phy_init: phy_version 701,f4f1da3a,Mar  3 2025,15:50:10[0m
I (2810) wifi:mode : sta (1c:db:d4:99:c1:60)
I (2810) wifi:enable tsf
[0;32mI (2811) [WIFI_MANAGER]: Trying to connect, got event: 43[0m
[0;32mI (2812) [WIFI_MANAGER]: Trying to connect, got event: 2[0m
I (2824) wifi:new:<1,1>, old:<1,0>, ap:<255,255>, sta:<1,1>, prof:1, snd_ch_cfg:0x0
I (2825) wifi:state: init -> auth (0xb0)
[0;32mI (2829) [WIFI_MANAGER]: Trying to connect, got event: 43[0m
I (2847) wifi:state: auth -> assoc (0x0)
I (2878) wifi:state: assoc -> run (0x10)
I (2903) wifi:connected with LinkCJ, aid = 1, channel 1, 40U, bssid = 48:5f:08:5f:5d:52
I (2904) wifi:security: WPA2-PSK, phy: bgn, rssi: -57
I (2907) wifi:pm start, type: 1

I (2908) wifi:dp: 1, bi: 102400, li: 3, scale listen interval from 307200 us to 307200 us
I (2916) wifi:set rx beacon pti, rx_bcn_pti: 0, bcn_timeout: 25000, mt_pti: 0, mt_time: 10000
I (2925) wifi:<ba-add>idx:0 (ifx:0, 48:5f:08:5f:5d:52), tid:5, ssn:2, winSize:64
[0;32mI (2932) [WIFI_MANAGER]: Trying to connect, got event: 4[0m
I (2965) wifi:AP's beacon interval = 102400 us, DTIM period = 1
[0;32mI (3932) esp_netif_handlers: sta ip: 192.168.0.105, mask: 255.255.255.0, gw: 192.168.0.1[0m
[0;32mI (3933) [WIFI_MANAGER]: Trying to connect, got event: 0[0m
[0;32mI (3936) [WIFI_MANAGER]: got ip:192.168.0.105[0m
[0;32mI (3941) [WIFI_MANAGER]: connected to ap SSID:LinkCJ[0m
[0;32mI (3948) mdns_mem: mDNS task will be created from internal RAM[0m
ba7    3 mongoose.c:3970:mg_listen      1 54 http://0.0.0.0:81

[0;32mI (3961) [STREAM_SERVER]: Stream server started on port 80[0m
[0;32mI (3966) main_task: Returned from app_main()[0m
I (52234) wifi:<ba-add>idx:1 (ifx:0, 48:5f:08:5f:5d:52), tid:0, ssn:0, winSize:64
