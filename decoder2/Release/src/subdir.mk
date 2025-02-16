################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/decoder.c \
../src/input.c \
../src/main.c 

C_DEPS += \
./src/decoder.d \
./src/input.d \
./src/main.d 

OBJS += \
./src/decoder.o \
./src/input.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/decoder.d ./src/decoder.o ./src/input.d ./src/input.o ./src/main.d ./src/main.o

.PHONY: clean-src

