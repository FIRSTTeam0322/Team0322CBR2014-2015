#include "BrakeControl.h"

BrakeControl::BrakeControl() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
}

// Called just before this Command runs the first time
void BrakeControl::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BrakeControl::Execute() {
	chassis->brake();
}

// Make this return true when this Command no longer needs to run execute()
bool BrakeControl::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BrakeControl::End() {
	chassis->coast();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BrakeControl::Interrupted() {
	End();
}
