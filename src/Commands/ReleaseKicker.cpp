#include "ReleaseKicker.h"

ReleaseKicker::ReleaseKicker() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(kicker);
}

// Called just before this Command runs the first time
void ReleaseKicker::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ReleaseKicker::Execute() {
	if (kicker->kickerStatus(0)) kicker->unlockKicker();
}

// Make this return true when this Command no longer needs to run execute()
bool ReleaseKicker::IsFinished() {
	if (kicker->kickerStatus(0)) return false;
	else return true;
}

// Called once after isFinished returns true
void ReleaseKicker::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReleaseKicker::Interrupted() {
}
