# STM32L4

Project goals are to demonstrate and create reusable code for using:

- Integrated USB
- SD interface (4 bits from the SSMMC peripheral on the STM32)
- SPI camera
- QuadSPI interface

## Status

[![Clang Format Check](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/clang-format-check-caller.yaml/badge.svg)](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/clang-format-check-caller.yaml)
[![Release Drafter Caller](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/release-drafter-caller.yaml/badge.svg)](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/release-drafter-caller.yaml)
[![Label stale issues and PRs](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/stale-caller.yaml/badge.svg)](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/stale-caller.yaml)

## Repo Setup

```shell
# Clone the repo
git clone git@github.com:NathanaelGandhi/STM32L4.git
cd STM32L4

# Initialise the submodules (libopencm3)
git submodule update --init

# Build the main application firmware
cd app
make
```

## Microcontroller Target

- [STM32L496](https://www.st.com/en/microcontrollers-microprocessors/stm32l4x6.html) on a [NUCLEO-L496ZG](https://www.st.com/en/evaluation-tools/nucleo-l496zg.html) development board
  - Arm® Cortex®-M4 core with DSP and floating-point unit (FPU) at 80 MHz.

## Project Blink (STM32CubeIDE)

This is a simple blink project created using STM32CubeIDE. User LEDs 2 & 3 are toggled each second, 0.5 seconds out of phase.
[project_blink/Core/Src/main.c](project_blink/Core/Src/main.c)

## Firmware (App)

[app/src/main.c](app/src/main.c)

### Functionality

- none (successfully make empty project)

## Libraries

- [libopencm3](libs/libopencm3/)

## Utilities

- [Development Containerfile](utils/Containerfile.dev.stm32)
