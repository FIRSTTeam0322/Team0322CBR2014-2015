#include "AutonDriveForwardAndScore1Pt.h"

AutonDriveForwardAndScore1Pt::AutonDriveForwardAndScore1Pt() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
	Requires(kicker);
}

// Called just before this Command runs the first time
void AutonDriveForwardAndScore1Pt::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AutonDriveForwardAndScore1Pt::Execute() {
	chassis->autoDriveSystem(-0.75, -0.75);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonDriveForwardAndScore1Pt::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonDriveForwardAndScore1Pt::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonDriveForwardAndScore1Pt::Interrupted() {
	End();
}
