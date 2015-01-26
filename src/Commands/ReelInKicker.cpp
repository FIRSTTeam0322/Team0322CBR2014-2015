#include "ReelInKicker.h"

ReelInKicker::ReelInKicker() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(kicker);
}

// Called just before this Command runs the first time
void ReelInKicker::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ReelInKicker::Execute() {
	kicker->runRollersIn();
}

// Make this return true when this Command no longer needs to run execute()
bool ReelInKicker::IsFinished() {
	if (kicker->kickerStatus(0)) return true;
	else return false;
}

// Called once after isFinished returns true
void ReelInKicker::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReelInKicker::Interrupted() {
}
