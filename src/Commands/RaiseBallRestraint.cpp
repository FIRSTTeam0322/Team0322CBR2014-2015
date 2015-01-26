#include "RaiseBallRestraint.h"

RaiseBallRestraint::RaiseBallRestraint() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(ballRestraint);
}

// Called just before this Command runs the first time
void RaiseBallRestraint::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RaiseBallRestraint::Execute() {
	ballRestraint->RaiseBallRestraint();
}

// Make this return true when this Command no longer needs to run execute()
bool RaiseBallRestraint::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RaiseBallRestraint::End() {
	ballRestraint->StopBallRestraint();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RaiseBallRestraint::Interrupted() {
	End();
}
