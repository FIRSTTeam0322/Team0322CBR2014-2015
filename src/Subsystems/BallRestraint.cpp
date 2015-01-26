#include "BallRestraint.h"
#include "../Robotmap.h"

BallRestraint::BallRestraint() : Subsystem("BallRestraint") {
	ballRestraintMotor = new Victor(7);
}
    
void BallRestraint::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void BallRestraint::MoveBallRestraint(float value) {
	ballRestraintMotor->Set(value);
}

void BallRestraint::RaiseBallRestraint(void) {
	MoveBallRestraint(0.50);
}

void BallRestraint::LowerBallRestraint(void) {
	MoveBallRestraint(-0.50);
}

void BallRestraint::StopBallRestraint(void) {
	MoveBallRestraint(0.0);
}
