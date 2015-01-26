#include "ManualLockControl.h"

ManualLockControl::ManualLockControl() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(kicker);
}

// Called just before this Command runs the first time
void ManualLockControl::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ManualLockControl::Execute() {
	kicker->manualLockControl(oi->getManipulatorStick()->GetRawAxis(3));
}

// Make this return true when this Command no longer needs to run execute()
bool ManualLockControl::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ManualLockControl::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ManualLockControl::Interrupted() {
}
