#include "ResetKickerLock.h"

ResetKickerLock::ResetKickerLock() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(kicker);
	resetTimer = new Timer();
}

// Called just before this Command runs the first time
void ResetKickerLock::Initialize() {
	resetTimer->Start();
}

// Called repeatedly when this Command is scheduled to run
void ResetKickerLock::Execute() {
	kicker->lockKicker();
}

// Make this return true when this Command no longer needs to run execute()
bool ResetKickerLock::IsFinished() {
	if (resetTimer->Get() < 1.0) return false;
	else return true;
}

// Called once after isFinished returns true
void ResetKickerLock::End() {
	resetTimer->Stop();
	resetTimer->Reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ResetKickerLock::Interrupted() {
	End();
}
