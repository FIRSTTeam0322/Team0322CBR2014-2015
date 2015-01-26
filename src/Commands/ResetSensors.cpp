#include "ResetSensors.h"

ResetSensors::ResetSensors() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassisSensors);
	SetTimeout(0.25);
}

// Called just before this Command runs the first time
void ResetSensors::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ResetSensors::Execute() {
	chassisSensors->resetEncoders();
	chassisSensors->resetGyro();
}

// Make this return true when this Command no longer needs to run execute()
bool ResetSensors::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ResetSensors::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ResetSensors::Interrupted() {
}
