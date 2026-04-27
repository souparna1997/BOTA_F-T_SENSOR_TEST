# BOTA_F-T_SENSOR_TEST

Real-time EtherCAT communication with a Bota Systems Force/Torque sensor using SOEM (Simple Open EtherCAT Master) on Linux.

## Overview

This project interfaces with a **Bota Systems EtherCAT Force/Torque sensor** and streams real-time wrench data:

* Force: Fx, Fy, Fz (N)
* Torque: Tx, Ty, Tz (Nm)

The system uses:

* **SOEM** for EtherCAT master communication
* Linux real-time scheduling (`SCHED_FIFO`)
* CPU core pinning for deterministic loop timing
* Custom PDO mapping for high-speed cyclic data exchange

This project can be used as a base for:

* Robot force control
* Impedance/admittance control
* Contact detection
* Haptics
* Balance / manipulation experiments
* Sensor integration into custom robotics stacks

---

## Hardware Used

* Bota Systems EtherCAT F/T Sensor
* Ubuntu Linux PC
* Dedicated Ethernet NIC

---

## Software Stack

* C
* CMake
* SOEM (Simple Open EtherCAT Master)
* Linux PREEMPT / RT-friendly scheduling

---

## Features

* Detect EtherCAT slave automatically
* Configure PDO mappings
* Configure sensor filters via SDO
* Read real-time force/torque values
* Deterministic cyclic loop timing
* Timing jitter measurement

---

## Build Instructions

```bash
mkdir build
cd build
cmake ..
make -j$(nproc)
```

---

## Run

```bash
sudo ./etherCAT_master
```

> Root privileges are required for raw Ethernet access.

---

## Example Output

```text
1 slave(s) found.
Sampling rate (Hz): 150
Slave 1 in OPERATIONAL state.

fx: 2.40
fy: 3.18
fz: 159.18
tx: 0.056
ty: -0.052
tz: 1.163
```

---

## Notes

* EtherCAT communication uses raw Ethernet (not TCP/IP).
* Use a dedicated NIC for reliable performance.
* Sensor update rate depends on configured filter settings.

---

## Author

Souparna Gangopadhyay

