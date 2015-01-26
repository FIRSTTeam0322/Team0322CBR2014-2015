#include "AutonDoNothing.h"

AutonDoNothing::AutonDoNothing() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void AutonDoNothing::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AutonDoNothing::Execute() {
	Wait(15.0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonDoNothing::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonDoNothing::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonDoNothing::Interrupted() {
}
