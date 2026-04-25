//This is a code to read a F/T Sensor (BOTA_BFT_ROKS_M8) using SOEM as the communication platform
//Author: Souparna Gangopadhyay
//Date: 04/24/2026
//Email: souparna@stanford.edu

// maestro@srl-optitrack-ubuntu:~/Projects/SOEM/build/samples/slaveinfo$ sudo ./slaveinfo enp8s0
// SOEM (Simple Open EtherCAT Master)
// Slaveinfo
// Starting slaveinfo
// ecx_init on enp8s0 succeeded.
// 1 slaves found and configured.
// Calculated workcounter 3

// Slave:1
//  Name:BFT-ROKS-ECAT-M8
//  Output size: 8bits
//  Input size: 616bits
//  State: 4
//  Delay: 0[ns]
//  Has DC: 1
//  DCParentport:0
//  Activeports:1.0.0.0
//  Configured address: 1001
//  Man: 0000b07a ID: 00000001 Rev: 00000003
//  SM0 A:1000 L: 128 F:00010026 Type:1
//  SM1 A:1080 L: 128 F:00010022 Type:2
//  SM2 A:1100 L:   1 F:00010024 Type:3
//  SM3 A:1180 L:  77 F:00010020 Type:4
//  FMMU0 Ls:00000000 Ll:   1 Lsb:0 Leb:7 Ps:1100 Psb:0 Ty:02 Act:01
//  FMMU1 Ls:00000001 Ll:  77 Lsb:0 Leb:7 Ps:1180 Psb:0 Ty:01 Act:01
//  FMMU2 Ls:0000004e Ll:   1 Lsb:0 Leb:7 Ps:080d Psb:0 Ty:01 Act:01
//  FMMUfunc 0:1 1:2 2:3 3:0
//  MBX length wr: 128 rd: 128 MBX protocols : 0c
//  CoE details: 03 FoE details: 01 EoE details: 00 SoE details: 00
//  Ebus current: 0[mA]
//  only LRD/LWR:0
// End slaveinfo, close socket
// End program
// maestro@srl-optitrack-ubuntu:~/Projects/SOEM/build/samples/slaveinfo$ sudo ./slaveinfo enp8s0 -sdo
// SOEM (Simple Open EtherCAT Master)
// Slaveinfo
// Starting slaveinfo
// ecx_init on enp8s0 succeeded.
// 1 slaves found and configured.
// Calculated workcounter 3

// Slave:1
//  Name:BFT-ROKS-ECAT-M8
//  Output size: 8bits
//  Input size: 616bits
//  State: 4
//  Delay: 0[ns]
//  Has DC: 1
//  DCParentport:0
//  Activeports:1.0.0.0
//  Configured address: 1001
//  Man: 0000b07a ID: 00000001 Rev: 00000003
//  SM0 A:1000 L: 128 F:00010026 Type:1
//  SM1 A:1080 L: 128 F:00010022 Type:2
//  SM2 A:1100 L:   1 F:00010024 Type:3
//  SM3 A:1180 L:  77 F:00010020 Type:4
//  FMMU0 Ls:00000000 Ll:   1 Lsb:0 Leb:7 Ps:1100 Psb:0 Ty:02 Act:01
//  FMMU1 Ls:00000001 Ll:  77 Lsb:0 Leb:7 Ps:1180 Psb:0 Ty:01 Act:01
//  FMMU2 Ls:0000004e Ll:   1 Lsb:0 Leb:7 Ps:080d Psb:0 Ty:01 Act:01
//  FMMUfunc 0:1 1:2 2:3 3:0
//  MBX length wr: 128 rd: 128 MBX protocols : 0c
//  CoE details: 03 FoE details: 01 EoE details: 00 SoE details: 00
//  Ebus current: 0[mA]
//  only LRD/LWR:0
//  CoE Object Description found, 24 entries.
// 0x1000      "Device Type"                                 [VAR]
//     0x00      "Device Type"                                 [UNSIGNED32       R_R_R_]      0x00001389 / 5001
// 0x1008      "Device Name"                                 [VAR]
//     0x00      "Device Name"                                 [VISIBLE_STR(160) R_R_R_]      "BFT-ROKS-ECAT-M8""
// 0x1009      "Hardware Version"                            [VAR]
//     0x00      "Hardware Version"                            [VISIBLE_STR(96)  R_R_R_]      "RM200V4_6adc""
// 0x100a      "Software Version"                            [VAR]
//     0x00      "Software Version"                            [VISIBLE_STR(104) R_R_R_]      "1.3.8-dirty-R""
// 0x1018      "Identity Object"                             [RECORD  maxsub(0x04 / 4)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x04 / 4
//     0x01      "Vendor ID"                                   [UNSIGNED32       R_R_R_]      0x0000b07a / 45178
//     0x02      "Product Code"                                [UNSIGNED32       R_R_R_]      0x00000001 / 1
//     0x03      "Revision Number"                             [UNSIGNED32       R_R_R_]      0x00000003 / 3
//     0x04      "Serial Number"                               [UNSIGNED32       R_R_R_]      0x000002d9 / 729
// 0x1600      "Digital Output"                              [RECORD  maxsub(0x01 / 1)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x01 / 1
//     0x01      "Digital Output"                              [UNSIGNED32       R_R_R_]      0x70000008 / 1879048200
// 0x1a00      "Sensor Data"                                 [RECORD  maxsub(0x16 / 22)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x16 / 22
//     0x01      "Status"                                      [UNSIGNED32       R_R_R_]      0x60000108 / 1610613000
//     0x02      "Warnings Errors Fatals"                      [UNSIGNED32       R_R_R_]      0x60000220 / 1610613280
//     0x03      "Force x"                                     [UNSIGNED32       R_R_R_]      0x60000420 / 1610613792
//     0x04      "Force y"                                     [UNSIGNED32       R_R_R_]      0x60000520 / 1610614048
//     0x05      "Force z"                                     [UNSIGNED32       R_R_R_]      0x60000620 / 1610614304
//     0x06      "Torque x"                                    [UNSIGNED32       R_R_R_]      0x60000720 / 1610614560
//     0x07      "Torque y"                                    [UNSIGNED32       R_R_R_]      0x60000820 / 1610614816
//     0x08      "Torque z"                                    [UNSIGNED32       R_R_R_]      0x60000920 / 1610615072
//     0x09      "Force Torque Saturated"                      [UNSIGNED32       R_R_R_]      0x60000a10 / 1610615312
//     0x0a      "Acceleration x"                              [UNSIGNED32       R_R_R_]      0x60000b20 / 1610615584
//     0x0b      "Acceleration y"                              [UNSIGNED32       R_R_R_]      0x60000c20 / 1610615840
//     0x0c      "Acceleration z"                              [UNSIGNED32       R_R_R_]      0x60000d20 / 1610616096
//     0x0d      "Acceleration Saturated"                      [UNSIGNED32       R_R_R_]      0x60000e08 / 1610616328
//     0x0e      "Angular Rate x"                              [UNSIGNED32       R_R_R_]      0x60000f20 / 1610616608
//     0x0f      "Angular Rate y"                              [UNSIGNED32       R_R_R_]      0x60001020 / 1610616864
//     0x10      "Angular Rate z"                              [UNSIGNED32       R_R_R_]      0x60001120 / 1610617120
//     0x11      "Angular Rate Saturated"                      [UNSIGNED32       R_R_R_]      0x60001208 / 1610617352
//     0x12      "Temperature"                                 [UNSIGNED32       R_R_R_]      0x60001320 / 1610617632
//     0x13      "Orientation Estimate x"                      [UNSIGNED32       R_R_R_]      0x60001420 / 1610617888
//     0x14      "Orientation Estimate y"                      [UNSIGNED32       R_R_R_]      0x60001520 / 1610618144
//     0x15      "Orientation Estimate z"                      [UNSIGNED32       R_R_R_]      0x60001620 / 1610618400
//     0x16      "Orientation Estimate w"                      [UNSIGNED32       R_R_R_]      0x60001720 / 1610618656
// 0x1c00      "Sync Manager Communication Type"             [ARRAY  maxsub(0x04 / 4)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x04 / 4
//     0x01      "Communications Type SM0"                     [UNSIGNED8        R_R_R_]      0x01 / 1
//     0x02      "Communications Type SM1"                     [UNSIGNED8        R_R_R_]      0x02 / 2
//     0x03      "Communications Type SM2"                     [UNSIGNED8        R_R_R_]      0x03 / 3
//     0x04      "Communications Type SM3"                     [UNSIGNED8        R_R_R_]      0x04 / 4
// 0x1c12      "Sync Manager 2 PDO Assignment"               [ARRAY  maxsub(0x01 / 1)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x01 / 1
//     0x01      "PDO Mapping"                                 [UNSIGNED16       R_R_R_]      0x1600 / 5632
// 0x1c13      "Sync Manager 3 PDO Assignment"               [ARRAY  maxsub(0x01 / 1)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x01 / 1
//     0x01      "PDO Mapping"                                 [UNSIGNED16       R_R_R_]      0x1a00 / 6656
// 0x2000      "Calibration"                                 [RECORD  maxsub(0x57 / 87)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x57 / 87
//     0x01      "Passphrase"                                  [UNSIGNED32       RWRWRW]      0x00000000 / 0
//     0x02      "Force Torque Calibration Matrix 0 0"         [REAL32           RWRWRW]      -0.000316
//     0x03      "Force Torque Calibration Matrix 0 1"         [REAL32           RWRWRW]      0.029541
//     0x04      "Force Torque Calibration Matrix 0 2"         [REAL32           RWRWRW]      0.023114
//     0x05      "Force Torque Calibration Matrix 0 3"         [REAL32           RWRWRW]      -0.014429
//     0x06      "Force Torque Calibration Matrix 0 4"         [REAL32           RWRWRW]      -0.022518
//     0x07      "Force Torque Calibration Matrix 0 5"         [REAL32           RWRWRW]      -0.014606
//     0x08      "Force Torque Calibration Matrix 1 0"         [REAL32           RWRWRW]      -0.026695
//     0x09      "Force Torque Calibration Matrix 1 1"         [REAL32           RWRWRW]      0.000064
//     0x0a      "Force Torque Calibration Matrix 1 2"         [REAL32           RWRWRW]      0.012653
//     0x0b      "Force Torque Calibration Matrix 1 3"         [REAL32           RWRWRW]      0.024205
//     0x0c      "Force Torque Calibration Matrix 1 4"         [REAL32           RWRWRW]      0.014160
//     0x0d      "Force Torque Calibration Matrix 1 5"         [REAL32           RWRWRW]      -0.024578
//     0x0e      "Force Torque Calibration Matrix 2 0"         [REAL32           RWRWRW]      -0.021580
//     0x0f      "Force Torque Calibration Matrix 2 1"         [REAL32           RWRWRW]      0.000184
//     0x10      "Force Torque Calibration Matrix 2 2"         [REAL32           RWRWRW]      -0.021339
//     0x11      "Force Torque Calibration Matrix 2 3"         [REAL32           RWRWRW]      -0.000320
//     0x12      "Force Torque Calibration Matrix 2 4"         [REAL32           RWRWRW]      -0.021417
//     0x13      "Force Torque Calibration Matrix 2 5"         [REAL32           RWRWRW]      0.000026
//     0x14      "Force Torque Calibration Matrix 3 0"         [REAL32           RWRWRW]      -0.000747
//     0x15      "Force Torque Calibration Matrix 3 1"         [REAL32           RWRWRW]      -0.000001
//     0x16      "Force Torque Calibration Matrix 3 2"         [REAL32           RWRWRW]      0.000360
//     0x17      "Force Torque Calibration Matrix 3 3"         [REAL32           RWRWRW]      0.000297
//     0x18      "Force Torque Calibration Matrix 3 4"         [REAL32           RWRWRW]      0.000380
//     0x19      "Force Torque Calibration Matrix 3 5"         [REAL32           RWRWRW]      -0.000298
//     0x1a      "Force Torque Calibration Matrix 4 0"         [REAL32           RWRWRW]      0.000001
//     0x1b      "Force Torque Calibration Matrix 4 1"         [REAL32           RWRWRW]      -0.000362
//     0x1c      "Force Torque Calibration Matrix 4 2"         [REAL32           RWRWRW]      -0.000636
//     0x1d      "Force Torque Calibration Matrix 4 3"         [REAL32           RWRWRW]      0.000177
//     0x1e      "Force Torque Calibration Matrix 4 4"         [REAL32           RWRWRW]      0.000629
//     0x1f      "Force Torque Calibration Matrix 4 5"         [REAL32           RWRWRW]      0.000178
//     0x20      "Force Torque Calibration Matrix 5 0"         [REAL32           RWRWRW]      0.000007
//     0x21      "Force Torque Calibration Matrix 5 1"         [REAL32           RWRWRW]      -0.000157
//     0x22      "Force Torque Calibration Matrix 5 2"         [REAL32           RWRWRW]      -0.000001
//     0x23      "Force Torque Calibration Matrix 5 3"         [REAL32           RWRWRW]      -0.000166
//     0x24      "Force Torque Calibration Matrix 5 4"         [REAL32           RWRWRW]      0.000003
//     0x25      "Force Torque Calibration Matrix 5 5"         [REAL32           RWRWRW]      -0.000156
//     0x26      "Force Torque Calibration Temperature"        [REAL32           RWRWRW]      0.000000
//     0x27      "ADC Calibration Offset 0"                    [UNSIGNED32       RWRWRW]      0x0075c553 / 7718227
//     0x28      "ADC Calibration Offset 1"                    [UNSIGNED32       RWRWRW]      0x007e2058 / 8265816
//     0x29      "ADC Calibration Offset 2"                    [UNSIGNED32       RWRWRW]      0x00822ff7 / 8531959
//     0x2a      "ADC Calibration Offset 3"                    [UNSIGNED32       RWRWRW]      0x0079b7b3 / 7976883
//     0x2b      "ADC Calibration Offset 4"                    [UNSIGNED32       RWRWRW]      0x007da3b1 / 8233905
//     0x2c      "ADC Calibration Offset 5"                    [UNSIGNED32       RWRWRW]      0x00894395 / 8995733
//     0x2d      "ADC Range"                                   [BIT8             RWRWRW]      0x0 / 0
//     0x2e      "Thermistor Calibration 0"                    [REAL32           RWRWRW]      0.000000
//     0x2f      "Thermistor Calibration 1"                    [REAL32           RWRWRW]      0.000000
//     0x30      "Force Torque Temperature Gain 0"             [REAL32           RWRWRW]      0.000000
//     0x31      "Force Torque Temperature Gain 1"             [REAL32           RWRWRW]      0.000000
//     0x32      "Force Torque Temperature Gain 2"             [REAL32           RWRWRW]      0.000000
//     0x33      "Force Torque Temperature Gain 3"             [REAL32           RWRWRW]      0.000000
//     0x34      "Force Torque Temperature Gain 4"             [REAL32           RWRWRW]      0.000000
//     0x35      "Force Torque Temperature Gain 5"             [REAL32           RWRWRW]      0.000000
//     0x36      "Acceleration Calibration Offset x"           [REAL32           RWRWRW]      0.000000
//     0x37      "Acceleration Calibration Offset y"           [REAL32           RWRWRW]      0.000000
//     0x38      "Acceleration Calibration Offset z"           [REAL32           RWRWRW]      0.000000
//     0x39      "External Acceleration Calibration Offset"      [REAL32           RWRWRW]      0.000000
//     0x3a      "External Acceleration Calibration Offset"      [REAL32           RWRWRW]      0.000000
//     0x3b      "External Acceleration Calibration Offset"      [REAL32           RWRWRW]      0.000000
//     0x3c      "Angular Rate Calibration Offset x"           [REAL32           RWRWRW]      0.000000
//     0x3d      "Angular Rate Calibration Offset y"           [REAL32           RWRWRW]      0.000000
//     0x3e      "Angular Rate Calibration Offset z"           [REAL32           RWRWRW]      0.000000
//     0x3f      "External Angular Rate Calibration Offset"      [REAL32           RWRWRW]      0.000000
//     0x40      "External Angular Rate Calibration Offset"      [REAL32           RWRWRW]      0.000000
//     0x41      "External Angular Rate Calibration Offset"      [REAL32           RWRWRW]      0.000000
//     0x42      "Sensor Inertia Mass"                         [REAL32           RWRWRW]      0.000000
//     0x43      "Sensor Inertia Dx"                           [REAL32           RWRWRW]      0.000000
//     0x44      "Sensor Inertia Dy"                           [REAL32           RWRWRW]      0.000000
//     0x45      "Sensor Inertia Dz"                           [REAL32           RWRWRW]      0.000000
//     0x46      "Sensor Inertia Ixx"                          [REAL32           RWRWRW]      0.000000
//     0x47      "Sensor Inertia Iyy"                          [REAL32           RWRWRW]      0.000000
//     0x48      "Sensor Inertia Izz"                          [REAL32           RWRWRW]      0.000000
//     0x49      "Sensor Inertia Ixy"                          [REAL32           RWRWRW]      0.000000
//     0x4a      "Sensor Inertia Iyz"                          [REAL32           RWRWRW]      0.000000
//     0x4b      "Sensor Inertia Ixz"                          [REAL32           RWRWRW]      0.000000
//     0x4c      "ADC Calibration Gain 0"                      [UNSIGNED32       RWRWRW]      0x00594673 / 5850739
//     0x4d      "ADC Calibration Gain 1"                      [UNSIGNED32       RWRWRW]      0x0059301e / 5845022
//     0x4e      "ADC Calibration Gain 2"                      [UNSIGNED32       RWRWRW]      0x0059337b / 5845883
//     0x4f      "ADC Calibration Gain 3"                      [UNSIGNED32       RWRWRW]      0x00592db4 / 5844404
//     0x50      "ADC Calibration Gain 4"                      [UNSIGNED32       RWRWRW]      0x005927f1 / 5842929
//     0x51      "ADC Calibration Gain 5"                      [UNSIGNED32       RWRWRW]      0x00592d0b / 5844235
//     0x52      "Gage DAC 0"                                  [INTEGER8         RWRWRW]      0xffffffff / -1
//     0x53      "Gage DAC 1"                                  [INTEGER8         RWRWRW]      0x00 / 0
//     0x54      "Gage DAC 2"                                  [INTEGER8         RWRWRW]      0x00 / 0
//     0x55      "Gage DAC 3"                                  [INTEGER8         RWRWRW]      0x00 / 0
//     0x56      "Gage DAC 4"                                  [INTEGER8         RWRWRW]      0xffffffff / -1
//     0x57      "Gage DAC 5"                                  [INTEGER8         RWRWRW]      0x00 / 0
// 0x6000      "Sensor Data"                                 [RECORD  maxsub(0x17 / 23)]
// - Time:       0.000 SDO slave:1 index:6000.03 error:06090011 Subindex does not exist

// - 
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x17 / 23
//     0x01      "Status"                                      [UNSIGNED8        R_R_R_]      0x00 / 0
//     0x02      "Warnings Errors Fatals"                      [UNSIGNED32       R_R_R_]      0x00000000 / 0
//     0x04      "Force x"                                     [REAL32           R_R_R_]      -1.085257
//     0x05      "Force y"                                     [REAL32           R_R_R_]      2.819278
//     0x06      "Force z"                                     [REAL32           R_R_R_]      153.354721
//     0x07      "Torque x"                                    [REAL32           R_R_R_]      0.082582
//     0x08      "Torque y"                                    [REAL32           R_R_R_]      0.010760
//     0x09      "Torque z"                                    [REAL32           R_R_R_]      1.146103
//     0x0a      "Force Torque Saturated"                      [UNSIGNED16       R_R_R_]      0x0000 / 0
//     0x0b      "Acceleration x"                              [REAL32           R_R_R_]      -0.096680
//     0x0c      "Acceleration y"                              [REAL32           R_R_R_]      0.104980
//     0x0d      "Acceleration z"                              [REAL32           R_R_R_]      0.995605
//     0x0e      "Acceleration Saturated"                      [UNSIGNED8        R_R_R_]      0x00 / 0
//     0x0f      "Angular Rate x"                              [REAL32           R_R_R_]      -1.097561
//     0x10      "Angular Rate y"                              [REAL32           R_R_R_]      0.182927
//     0x11      "Angular Rate z"                              [REAL32           R_R_R_]      -0.121951
//     0x12      "Angular Rate Saturated"                      [UNSIGNED8        R_R_R_]      0x00 / 0
//     0x13      "Temperature"                                 [REAL32           R_R_R_]      30.018412
//     0x14      "Orientation Estimate x"                      [REAL32           R_R_R_]      0.000000
//     0x15      "Orientation Estimate y"                      [REAL32           R_R_R_]      0.000000
//     0x16      "Orientation Estimate z"                      [REAL32           R_R_R_]      0.000000
//     0x17      "Orientation Estimate w"                      [REAL32           R_R_R_]      0.000000
// 0x7000      "Digital Output"                              [VAR]
//     0x00      "Digital Output"                              [INTEGER8         R_R_R_]      0x00 / 0
// 0x8000      "Force Torque Offset"                         [ARRAY  maxsub(0x06 / 6)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x06 / 6
//     0x01      "Force_Torque_Offset0"                        [REAL32           RWRWRW]      0.000000
//     0x02      "Force_Torque_Offset1"                        [REAL32           RWRWRW]      0.000000
//     0x03      "Force_Torque_Offset2"                        [REAL32           RWRWRW]      0.000000
//     0x04      "Force_Torque_Offset3"                        [REAL32           RWRWRW]      0.000000
//     0x05      "Force_Torque_Offset4"                        [REAL32           RWRWRW]      0.000000
//     0x06      "Force_Torque_Offset5"                        [REAL32           RWRWRW]      0.000000
// 0x8001      "Acceleration Offset"                         [ARRAY  maxsub(0x06 / 6)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x06 / 6
//     0x01      "Acceleration_Offset0"                        [REAL32           RWRWRW]      0.000000
//     0x02      "Acceleration_Offset1"                        [REAL32           RWRWRW]      0.000000
//     0x03      "Acceleration_Offset2"                        [REAL32           RWRWRW]      0.000000
//     0x04      "Acceleration_Offset3"                        [REAL32           RWRWRW]      0.000000
//     0x05      "Acceleration_Offset4"                        [REAL32           RWRWRW]      0.000000
//     0x06      "Acceleration_Offset5"                        [REAL32           RWRWRW]      0.000000
// 0x8002      "Angular Rate Offset"                         [ARRAY  maxsub(0x06 / 6)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x06 / 6
//     0x01      "Angular_Rate_Offset0"                        [REAL32           RWRWRW]      0.000000
//     0x02      "Angular_Rate_Offset1"                        [REAL32           RWRWRW]      0.000000
//     0x03      "Angular_Rate_Offset2"                        [REAL32           RWRWRW]      0.000000
//     0x04      "Angular_Rate_Offset3"                        [REAL32           RWRWRW]      0.000000
//     0x05      "Angular_Rate_Offset4"                        [REAL32           RWRWRW]      0.000000
//     0x06      "Angular_Rate_Offset5"                        [REAL32           RWRWRW]      0.000000
// 0x8004      "Acceleration Range"                          [VAR]
//     0x00      "Acceleration Range"                          [BIT8             RWR_R_]      0x3 / 3
// 0x8005      "Angular Rate Range"                          [VAR]
//     0x00      "Angular Rate Range"                          [BIT8             RWR_R_]      0x3 / 3
// 0x8006      "Force Torque Filter"                         [RECORD  maxsub(0x04 / 4)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x04 / 4
//     0x01      "Sinc length"                                 [UNSIGNED16       RWR_R_]      0x0800 / 2048
//     0x02      "FIR disable"                                 [UNSIGNED8        RWR_R_]      0x01 / 1
//     0x03      "FAST enable"                                 [UNSIGNED8        RWR_R_]      0x00 / 0
//     0x04      "CHOP enable"                                 [UNSIGNED8        RWR_R_]      0x00 / 0
// 0x8007      "Acceleration Filter"                         [VAR]
//     0x00      "Acceleration Filter"                         [BIT8             RWR_R_]      0x1 / 1
// 0x8008      "Angular Rate Filter"                         [VAR]
//     0x00      "Angular Rate Filter"                         [BIT8             RWR_R_]      0x3 / 3
// 0x8010      "Device configuration"                        [RECORD  maxsub(0x06 / 6)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x06 / 6
//     0x01      "Force Torque Calibration Matrix Active"      [BIT8             RWRWRW]      0x1 / 1
//     0x02      "Force Torque Temperature Compensation Ac"      [BIT8             RWRWRW]      0x0 / 0
//     0x03      "IMU Active"                                  [BIT8             RWRWRW]      0x1 / 1
//     0x04      "Coordinate System Configuration Active"      [BIT8             RWRWRW]      0x0 / 0
//     0x05      "Inertia and Gravity Compensation Active"      [BIT8             RWRWRW]      0x0 / 0
//     0x06      "Orientation Estimation Active"               [BIT8             RWRWRW]      0x0 / 0
// 0x8011      "Sampling Rate"                               [VAR]
//     0x00      "Sampling Rate"                               [UNSIGNED16       R_R_R_]      0x0096 / 150
// 0x8030      "Control"                                     [RECORD  maxsub(0x02 / 2)]
//     0x00      "Max SubIndex"                                [UNSIGNED8        R_R_R_]      0x02 / 2
//     0x01      "command"                                     [UNSIGNED8        RWRWRW]      0x00 / 0
//     0x02      "status"                                      [UNSIGNED8        R_R_R_]      0x00 / 0
// End slaveinfo, close socket
// End program


#define _GNU_SOURCE
#include <sched.h> // For CPU_SET, CPU_ZERO
#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <inttypes.h>
#include <stdbool.h>
#include "soem/soem.h"
#include <signal.h>
#include <time.h>
#include <limits.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define EC_TIMEOUTMON 500
#define MAX_SAMPLES 10000 // Track 10 seconds of data at 1ms
uint64_t latencies[MAX_SAMPLES];
int sample_idx = 0;

static char IOmap[4096];
static ecx_contextt ctx;
char ifname[] = "enp8s0";  // Change to your NIC
uint8_t slave = 1;

// Helper to get time in nanoseconds
uint64_t get_ns() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ULL + ts.tv_nsec;
}

volatile int run = 1;
void stop_handler(int sig) { run = 0; }


// TxPDO
uint8_t  *status;
uint32_t *warnings;

float *fx; //Force in X
float *fy; //Force in Y
float *fz; //Force in Z

float *tx; //Moment in X
float *ty; //Moment in Y
float *tz; //Moment in Z

// RxPDO
int8_t *digital_output; //Digital Output

void mapMappedPDOparameters()
{
     // TxPDO
    status = (uint8_t *)(ctx.slavelist[1].inputs + 0);                    
    warnings = (uint32_t *)(ctx.slavelist[1].inputs + 1);    
    fx = (float *)(ctx.slavelist[1].inputs + 5);                       
    fy = (float *)(ctx.slavelist[1].inputs + 9);                             
    fz = (float *)(ctx.slavelist[1].inputs + 13);
    tx = (float*)(ctx.slavelist[1].inputs + 17);
    ty = (float*)(ctx.slavelist[1].inputs + 21);
    tz = (float*)(ctx.slavelist[1].inputs + 25);                   
    // RxPDO
    digital_output = (int8_t*)(ctx.slavelist[1].outputs + 0);
}


void configFTSensor(){

    // Here only write to SDOs which are not in your TxPDOs, and RxPDOs

    // Set Sinc Length
    uint32_t sinc_length = 0x33; //Update Rate 1003 Hz
    int sinc_length_size = sizeof(sinc_length);
    ecx_SDOwrite(&ctx, slave, 0x8006, 1, FALSE, sinc_length_size, &sinc_length, EC_TIMEOUTRXM);

    //Disable FIR
    uint8_t fir_disable = 1;
    int fir_disable_size = sizeof(fir_disable);
    ecx_SDOwrite(&ctx, slave, 0x8006, 2, FALSE, fir_disable_size, &fir_disable, EC_TIMEOUTRXM);

    uint16_t sampling_rate = 0;
    int sampling_rate_size = sizeof(sampling_rate);

    int wkc = ecx_SDOread(&ctx,
                        slave,        // usually 1
                        0x8011,       // index
                        0x00,         // subindex
                        FALSE,
                        &sampling_rate_size,
                        &sampling_rate,
                        EC_TIMEOUTRXM);

    if (wkc > 0) {
        printf("Sampling rate (Hz): %d\n", sampling_rate);
    } else {
        printf("SDO read failed\n");
    }

}


int main() {

    // --- STEP 1: PIN TO CORE 7 ---
    cpu_set_t cpuset;
    CPU_ZERO(&cpuset);
    CPU_SET(7, &cpuset);

    // Use sched_setaffinity for the whole process
    if (sched_setaffinity(0, sizeof(cpu_set_t), &cpuset) == -1) {
        perror("ERROR: Could not pin to Core 7");
        // Don't exit, but we know it failed
    } else {
        printf("SUCCESS: Process pinned to Core 7\n");
    }

    // --- STEP 2: ELEVATE TO REAL-TIME PRIORITY ---
    // This is vital to stay on the core without being kicked off by the kernel
    struct sched_param param;
    param.sched_priority = 80; 
    if (sched_setscheduler(0, SCHED_FIFO, &param) == -1) {
        perror("ERROR: sched_setscheduler (Run with sudo!)");
    }

    signal(SIGINT, stop_handler);
    printf("Starting SOEM with default PDO control...\n");

    // Initialize SOEM
    if (!ecx_init(&ctx, ifname)) {
        printf("Failed to initialize interface %s\n", ifname);
        return -1;
    }
    printf("ekhane\n");

    // Find and configure slaves
    if (ecx_config_init(&ctx) <= 0) {
        printf("No slaves found\n");
        ecx_close(&ctx);
        return -1;
    }

    printf("%d slave(s) found.\n", ctx.slavecount);
    if (ctx.slavecount < 1) {
        ecx_close(&ctx);
        return -1;
    }

     // Go to INIT state
    ctx.slavelist[1].state = EC_STATE_INIT;
    ecx_writestate(&ctx, 1);
    ecx_statecheck(&ctx, 1, EC_STATE_INIT, EC_TIMEOUTSTATE);

    if (ctx.slavelist[1].state != EC_STATE_INIT)
    {
        printf("Slave 1 failed to reach INIT\n");
        ecx_close(&ctx);
        return -1;
    }

    osal_usleep(10000); // 10ms cycle

    // Go to PRE-OP state
    ctx.slavelist[1].state = EC_STATE_PRE_OP;
    ecx_writestate(&ctx, 1);
    ecx_statecheck(&ctx, 1, EC_STATE_PRE_OP, EC_TIMEOUTSTATE);

    if (ctx.slavelist[1].state != EC_STATE_PRE_OP)
    {
        printf("Slave 1 failed to reach PRE-OP\n");
        ecx_close(&ctx);
        return -1;
    }

    osal_usleep(10000); // 10ms cycle

    // Map PDOs for the slave
    // Sync Manager for TxPDOs
    uint8 tx_zero = 0;
    ecx_SDOwrite(&ctx, slave, 0x1C13, 0, FALSE, 1, &tx_zero, EC_TIMEOUTRXM);
    
    uint16 tx_pdo = 0x1A00;
    ecx_SDOwrite(&ctx,slave, 0x1C13, 1, FALSE, 2, &tx_pdo, EC_TIMEOUTRXM);

    osal_usleep(10000); // 10ms cycle

    uint8 tx_one = 1;
    ecx_SDOwrite(&ctx,slave, 0x1C13, 0, FALSE, 1, &tx_one, EC_TIMEOUTRXM);

    // Sync Manager for RxPDO
    uint8 rx_zero = 0;
    ecx_SDOwrite(&ctx, slave, 0x1C12, 0, FALSE, 1, &rx_zero, EC_TIMEOUTRXM);
    
    uint16 rx_pdo = 0x1600;
    ecx_SDOwrite(&ctx, slave, 0x1C12, 1, FALSE, 2, &rx_pdo, EC_TIMEOUTRXM);
    osal_usleep(10000); // 10ms cycle

    uint8 rx_one = 1;
    ecx_SDOwrite(&ctx, slave, 0x1C12, 0, FALSE, 1, &rx_one, EC_TIMEOUTRXM);

    // Map PDOs
    ec_groupt *group = &ctx.grouplist[0];
    ecx_config_map_group(&ctx, IOmap, 0);

    // Configure Distributed Clocks (if supported)
    ecx_configdc(&ctx);

    osal_usleep(100000); // 10ms cycle

    // Map pointers to the default PDO offsets
    mapMappedPDOparameters();

    // Set Profile Torque mode
    configFTSensor();

    // Put the slave in safe-op state
    ctx.slavelist[1].state = EC_STATE_SAFE_OP;
    ecx_writestate(&ctx, 1);
    ecx_statecheck(&ctx, 1, EC_STATE_SAFE_OP, EC_TIMEOUTSTATE);


    if (ctx.slavelist[1].state != EC_STATE_SAFE_OP)
    {
        printf("Slave 1 failed to reach SAFE-OP\n");
        ecx_close(&ctx);
        return -1;
    }

    ecx_send_processdata(&ctx);
    ecx_receive_processdata(&ctx, EC_TIMEOUTRET);

    // Put the slave in OPERATIONAL state (After this state is enabled, PDO exchanging starts happening)
    ctx.slavelist[1].state = EC_STATE_OPERATIONAL;
    ecx_writestate(&ctx, 1);
    ecx_statecheck(&ctx, 1, EC_STATE_OPERATIONAL, EC_TIMEOUTSTATE);

    if (ctx.slavelist[1].state != EC_STATE_OPERATIONAL) {
        printf("Slave 1 failed to reach OPERATIONAL\n");
        ecx_close(&ctx);
        return -1;
    }

    printf("Slave 1 in OPERATIONAL state.\n");

    osal_usleep(10000); // 10ms cycle

    // Main cyclic loop
    int index = 0;

    // --- PREPARE THE ABSOLUTE TIMER ---
    struct timespec next_period;
    const uint64_t interval_ns = 1000000; // 0.5ms in nanoseconds
    clock_gettime(CLOCK_MONOTONIC, &next_period);
    uint64_t last_time = get_ns();
    uint64_t current_time;

    while (run) {

        // 1. Calculate the next absolute wake-up time
        next_period.tv_nsec += interval_ns;
        while (next_period.tv_nsec >= 1000000000) {
            next_period.tv_nsec -= 1000000000;
            next_period.tv_sec++;
        }

        // 2. Sleep until that absolute time point
        // This compensates for code execution time automatically
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &next_period, NULL);

        // 3. Timing Measurement (Capture start of cycle)
        current_time = get_ns();
        if (sample_idx < MAX_SAMPLES) {
            latencies[sample_idx++] = current_time - last_time;
        }
        last_time = current_time;

        ecx_send_processdata(&ctx);
        ecx_receive_processdata(&ctx, EC_TIMEOUTRET);

        if (index == 200) {  // print diagnostics every 200 cycles (~2s)
            printf("fx: %f\n", *fx);
            printf("fy: %f\n", *fy);
            printf("fz: %f\n", *fz);
            printf("tx: %f\n", *tx);
            printf("ty: %f\n", *ty);
            printf("tz: %f\n", *tz);
            index = 0;
        }
        index++;
    
    }

    for (int i = 0; i < 10; i++) {
        ecx_send_processdata(&ctx);
        ecx_receive_processdata(&ctx, EC_TIMEOUTRET);
        osal_usleep(1000);
    }


    for (int i = 0; i < 10; i++) {
        ecx_send_processdata(&ctx);
        ecx_receive_processdata(&ctx, EC_TIMEOUTRET);
        osal_usleep(1000);
    }

    osal_usleep(10000); // 10ms cycle

    // --- Post-Execution Analysis ---
    uint64_t min_lat = ULLONG_MAX, max_lat = 0, total_lat = 0;
    
    printf("\n--- Timing Analysis (Nanoseconds) ---\n");
    for (int i = 1; i < sample_idx; i++) { // Skip index 0 as it has no previous reference
        if (latencies[i] < min_lat) min_lat = latencies[i];
        if (latencies[i] > max_lat) max_lat = latencies[i];
        total_lat += latencies[i];
    }

    if (sample_idx > 1) {
        double avg = (double)total_lat / (sample_idx - 1);
        printf("Samples collected: %d\n", sample_idx - 1);
        printf("Average Cycle: %.2f ns (%.3f ms)\n", avg, avg / 1000000.0);
        printf("Minimum Cycle: %" PRIu64 " ns\n", min_lat);
        printf("Maximum Cycle: %" PRIu64 " ns\n", max_lat);
        printf("Jitter (Max - Min): %" PRIu64 " ns\n", max_lat - min_lat);
    }

    ecx_close(&ctx);
    
    return 0;
}