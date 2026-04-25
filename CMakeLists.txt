cmake_minimum_required(VERSION 3.6)
project(BOTA_F/T_SENSOR_TEST LANGUAGES C CXX)

# SOEM make install location: /mnt/data/maestro/core/drivers/EtherCAT/external/SOEM/build/install/cmake/soemConfig.cmake
set(soem_DIR "/home/maestro/Projects/SOEM/build/install/cmake")
find_package(soem REQUIRED)

# Add TinyXML-2 directly

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)

add_executable(etherCAT_master etherCAT_master.c)
target_link_libraries(etherCAT_master soem)