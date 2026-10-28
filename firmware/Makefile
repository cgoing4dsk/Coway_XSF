# AquaPure-X1 펌웨어 빌드 (데모용)
# 실제 MCU 빌드 시 CC=arm-none-eabi-gcc 등 크로스 컴파일러 사용
CC      ?= gcc
OBJCOPY ?= objcopy
VERSION := $(shell cat ../VERSION)
TARGET  := AquaPure_X1_FW_v$(VERSION)
SRC     := $(wildcard src/*.c)
CFLAGS  := -Iinclude -O2 -Wall

all: build/$(TARGET).hex build/$(TARGET).bin

build/$(TARGET).elf: $(SRC)
	@mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $@

build/$(TARGET).hex: build/$(TARGET).elf
	$(OBJCOPY) -O ihex $< $@

build/$(TARGET).bin: build/$(TARGET).elf
	$(OBJCOPY) -O binary -j .text -j .rodata -j .data $< $@

release: all
	mkdir -p ../release/v$(VERSION)
	cp build/$(TARGET).hex build/$(TARGET).bin ../release/v$(VERSION)/
	cd ../release/v$(VERSION) && sha256sum $(TARGET).hex $(TARGET).bin > checksum.sha256

clean:
	rm -rf build
