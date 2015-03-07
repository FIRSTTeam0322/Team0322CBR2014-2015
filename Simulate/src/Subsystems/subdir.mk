################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Subsystems/AutonomusModeSwitches.cpp \
../src/Subsystems/BallRestraint.cpp \
../src/Subsystems/Chassis.cpp \
../src/Subsystems/ChassisSensors.cpp \
../src/Subsystems/Kicker.cpp 

OBJS += \
./src/Subsystems/AutonomusModeSwitches.o \
./src/Subsystems/BallRestraint.o \
./src/Subsystems/Chassis.o \
./src/Subsystems/ChassisSensors.o \
./src/Subsystems/Kicker.o 

CPP_DEPS += \
./src/Subsystems/AutonomusModeSwitches.d \
./src/Subsystems/BallRestraint.d \
./src/Subsystems/Chassis.d \
./src/Subsystems/ChassisSensors.d \
./src/Subsystems/Kicker.d 


# Each subdirectory must supply rules for building sources it contributes
src/Subsystems/%.o: ../src/Subsystems/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\Robotics\FRC0322\workspace\Team0322CBR2014-2015/src" -IC:\Users\Robotics/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-3.2 -I/usr/include/sdformat-2.2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


