#include "DriveForwardSlowly.h"

DriveForwardSlowly::DriveForwardSlowly() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
}

// Called just before this Command runs the first time
void DriveForwardSlowly::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DriveForwardSlowly::Execute() {
	chassis->autoDriveSystem(0.25, 0.25);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForwardSlowly::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveForwardSlowly::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForwardSlowly::Interrupted() {
}
