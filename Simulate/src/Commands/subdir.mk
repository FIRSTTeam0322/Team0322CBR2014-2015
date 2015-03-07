################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/AutonDoNothing.cpp \
../src/Commands/AutonDriveForward.cpp \
../src/Commands/AutonDriveForwardAndScore1Pt.cpp \
../src/Commands/AutonSelector.cpp \
../src/Commands/BrakeControl.cpp \
../src/Commands/DriveBackwards.cpp \
../src/Commands/DriveForward.cpp \
../src/Commands/DriveForwardSlowly.cpp \
../src/Commands/DriveWithJoystick.cpp \
../src/Commands/DriversStationUpdater.cpp \
../src/Commands/FireKicker.cpp \
../src/Commands/LowerBallRestraint.cpp \
../src/Commands/ManualLockControl.cpp \
../src/Commands/ManualReelControl.cpp \
../src/Commands/PrecisionDrive.cpp \
../src/Commands/RaiseBallRestraint.cpp \
../src/Commands/ReelInKicker.cpp \
../src/Commands/ReleaseKicker.cpp \
../src/Commands/ResetKicker.cpp \
../src/Commands/ResetKickerLock.cpp \
../src/Commands/ResetReels.cpp \
../src/Commands/ResetSensors.cpp \
../src/Commands/SmartDashboardUpdater.cpp 

OBJS += \
./src/Commands/AutonDoNothing.o \
./src/Commands/AutonDriveForward.o \
./src/Commands/AutonDriveForwardAndScore1Pt.o \
./src/Commands/AutonSelector.o \
./src/Commands/BrakeControl.o \
./src/Commands/DriveBackwards.o \
./src/Commands/DriveForward.o \
./src/Commands/DriveForwardSlowly.o \
./src/Commands/DriveWithJoystick.o \
./src/Commands/DriversStationUpdater.o \
./src/Commands/FireKicker.o \
./src/Commands/LowerBallRestraint.o \
./src/Commands/ManualLockControl.o \
./src/Commands/ManualReelControl.o \
./src/Commands/PrecisionDrive.o \
./src/Commands/RaiseBallRestraint.o \
./src/Commands/ReelInKicker.o \
./src/Commands/ReleaseKicker.o \
./src/Commands/ResetKicker.o \
./src/Commands/ResetKickerLock.o \
./src/Commands/ResetReels.o \
./src/Commands/ResetSensors.o \
./src/Commands/SmartDashboardUpdater.o 

CPP_DEPS += \
./src/Commands/AutonDoNothing.d \
./src/Commands/AutonDriveForward.d \
./src/Commands/AutonDriveForwardAndScore1Pt.d \
./src/Commands/AutonSelector.d \
./src/Commands/BrakeControl.d \
./src/Commands/DriveBackwards.d \
./src/Commands/DriveForward.d \
./src/Commands/DriveForwardSlowly.d \
./src/Commands/DriveWithJoystick.d \
./src/Commands/DriversStationUpdater.d \
./src/Commands/FireKicker.d \
./src/Commands/LowerBallRestraint.d \
./src/Commands/ManualLockControl.d \
./src/Commands/ManualReelControl.d \
./src/Commands/PrecisionDrive.d \
./src/Commands/RaiseBallRestraint.d \
./src/Commands/ReelInKicker.d \
./src/Commands/ReleaseKicker.d \
./src/Commands/ResetKicker.d \
./src/Commands/ResetKickerLock.d \
./src/Commands/ResetReels.d \
./src/Commands/ResetSensors.d \
./src/Commands/SmartDashboardUpdater.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\Robotics\FRC0322\workspace\Team0322CBR2014-2015/src" -IC:\Users\Robotics/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-3.2 -I/usr/include/sdformat-2.2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


