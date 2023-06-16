FROM ubuntu:22.04

RUN \
    apt-get update \
    && apt-get install -y \
    git nano tree \
    build-essential cmake gcc make clang-format \
    gcc-arm-linux-gnueabi binutils-arm-linux-gnueabi qemu-system-arm \
    && rm -rf /var/lib/apt/lists/*

############################################################################

ENTRYPOINT [ "/bin/bash" ]
