#include "ManualReelControl.h"


ManualReelControl::ManualReelControl() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(kicker);
}

// Called just before this Command runs the first time
void ManualReelControl::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ManualReelControl::Execute() {
	kicker->manualReelControl(oi->getManipulatorStick()->GetRawAxis(2));
}

// Make this return true when this Command no longer needs to run execute()
bool ManualReelControl::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ManualReelControl::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ManualReelControl::Interrupted() {
}
