#include "DriveBackwards.h"

DriveBackwards::DriveBackwards() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
}

// Called just before this Command runs the first time
void DriveBackwards::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DriveBackwards::Execute() {
	chassis->autoDriveSystem(-0.5, -0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveBackwards::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveBackwards::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveBackwards::Interrupted() {
}
