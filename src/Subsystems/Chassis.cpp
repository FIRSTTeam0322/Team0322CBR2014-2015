#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithJoystick.h"
#include "RobotDrive.h"

Chassis::Chassis() : Subsystem("Chassis") {
	
	frontLeftMotor = new Talon(0);
	rearLeftMotor = new Talon(1);
	frontRightMotor = new Talon(2);
	rearRightMotor = new Talon(3);
	robotDrive = new RobotDrive(frontLeftMotor, rearLeftMotor, frontRightMotor, rearRightMotor);
	//robotDrive->SetInvertedMotor(robotDrive->kFrontLeftMotor, true);
	//robotDrive->SetInvertedMotor(robotDrive->kFrontRightMotor, true);
	//robotDrive->SetInvertedMotor(robotDrive->kRearLeftMotor, true);
	//robotDrive->SetInvertedMotor(robotDrive->kRearRightMotor, true);
	robotDrive->SetSafetyEnabled(true);
	
	// Create the DigitalOutput objects for the brake/coast header control system
	leftFrontBrake = new DigitalOutput(0);
	leftRearBrake = new DigitalOutput(1);
	rightFrontBrake = new DigitalOutput(2);
	rightRearBrake = new DigitalOutput(3);
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Chassis::driveWithJoystick(Joystick *leftStick, Joystick *rightStick) {
	robotDrive->TankDrive(leftStick, rightStick);
	//robotDrive->ArcadeDrive(leftStick, true);
}

void Chassis::autoDriveSystem(float left, float right) {
	robotDrive->TankDrive(left, right);
}

void Chassis::precisionDriveSystem(Joystick *leftStick, Joystick *rightStick) {
	robotDrive->ArcadeDrive(rightStick->GetY() / 2, rightStick->GetX() / 2, true);
	//robotDrive->TankDrive(leftStick->GetY() / 4, rightStick->GetY() / 4);
}

void Chassis::brake() {
	leftFrontBrake->Set(1);
	rightFrontBrake->Set(1);
	leftRearBrake->Set(1);
	rightRearBrake->Set(1);
}

void Chassis::coast() {
	leftFrontBrake->Set(0);
	rightFrontBrake->Set(0);
	leftRearBrake->Set(0);
	rightRearBrake->Set(0);
}

float Chassis::getSpeedControllerOutput(int selection) {
	switch(selection) {
		case 1:
			return(-(frontLeftMotor->Get()));
			break;
		
		case 2:
			return(frontRightMotor->Get());
			break;
		
		case 3:
			return(-(rearLeftMotor->Get()));
			break;
		
		case 4:
			return(rearRightMotor->Get());
			break;
		
		default:
			return(0.0);
	}
}
