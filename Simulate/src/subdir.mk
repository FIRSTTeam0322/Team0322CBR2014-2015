################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CommandBase.cpp \
../src/OI.cpp \
../src/Team0322CBR2014-2015.cpp 

OBJS += \
./src/CommandBase.o \
./src/OI.o \
./src/Team0322CBR2014-2015.o 

CPP_DEPS += \
./src/CommandBase.d \
./src/OI.d \
./src/Team0322CBR2014-2015.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\Robotics\FRC0322\workspace\Team0322CBR2014-2015/src" -IC:\Users\Robotics/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-3.2 -I/usr/include/sdformat-2.2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


