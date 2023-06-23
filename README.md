# NgUsbToSerialAdapter

## Status

[![Clang Format Check](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/clang-format-check-caller.yaml/badge.svg)](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/clang-format-check-caller.yaml)
[![Release Drafter Caller](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/release-drafter-caller.yaml/badge.svg)](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/release-drafter-caller.yaml)
[![Label stale issues and PRs](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/stale-caller.yaml/badge.svg)](https://github.com/NathanaelGandhi/NgUsbToSerialAdapter/actions/workflows/stale-caller.yaml)

## Repo Setup

```shell
# Clone the repo
git clone git@github.com:NathanaelGandhi/NgUsbToSerialAdapter.git
cd NgUsbToSerialAdapter

# Initialise the submodules (libopencm3)
git submodule update --init

# Build the main application firmware
cd app
make
```

## Supported Processor

- Cortex-M4
- Specifically targeting STM32L496 on a NUCLEO-L496ZG development board

## Firmware (App)

|-- app/
|-- |-- src/
|-- |-- |-- main.c

### Functionality

- none

## Libraries

- libopencm3
