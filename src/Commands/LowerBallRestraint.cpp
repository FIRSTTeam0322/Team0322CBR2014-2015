#include "LowerBallRestraint.h"

LowerBallRestraint::LowerBallRestraint() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(ballRestraint);
}

// Called just before this Command runs the first time
void LowerBallRestraint::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void LowerBallRestraint::Execute() {
	ballRestraint->LowerBallRestraint();
}

// Make this return true when this Command no longer needs to run execute()
bool LowerBallRestraint::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void LowerBallRestraint::End() {
	ballRestraint->StopBallRestraint();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LowerBallRestraint::Interrupted() {
	End();
}
