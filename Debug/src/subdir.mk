################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/drawEngine.cpp \
../src/evilMonkey.cpp \
../src/game.cpp \
../src/kbhit.cpp \
../src/timeGetTime.cpp 

OBJS += \
./src/drawEngine.o \
./src/evilMonkey.o \
./src/game.o \
./src/kbhit.o \
./src/timeGetTime.o 

CPP_DEPS += \
./src/drawEngine.d \
./src/evilMonkey.d \
./src/game.d \
./src/kbhit.d \
./src/timeGetTime.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


