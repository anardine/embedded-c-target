################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/initialize.c \
../Src/main.c \
../Src/readInput.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/initialize.o \
./Src/main.o \
./Src/readInput.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/initialize.d \
./Src/main.d \
./Src/readInput.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F411RE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/initialize.cyclo ./Src/initialize.d ./Src/initialize.o ./Src/initialize.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/readInput.cyclo ./Src/readInput.d ./Src/readInput.o ./Src/readInput.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

