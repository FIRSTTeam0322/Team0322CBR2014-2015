#include "Kicker.h"
#include "../Robotmap.h"
#include "RobotDrive.h"

Kicker::Kicker() : Subsystem("Kicker") {
	// Create the SpeedController objects for the kicker release mechanisms
	kickerRelease = new Victor(4);
	
	// Create the SpeedController objects for the kicker retraction mechanism
	kickerLeftReel = new Victor(5);
	kickerRightReel = new Victor(6);
	
	// Create the DigitalInput objects for the kicker release and reset detectors
	kickerSensorLeft = new DigitalInput(12);
	kickerSensorRight = new DigitalInput(13);
}

void Kicker::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Kicker::unlockKicker() {
	kickerRelease->Set(-0.25);
}

void Kicker::lockKicker() {
	kickerRelease->Set(0.25);
}

void Kicker::runRollersIn() {
	kickerLeftReel->Set(1.0);
	kickerRightReel->Set(1.0);
}

void Kicker::runRollersOut() {
	kickerLeftReel->Set(1.0);
	kickerRightReel->Set(1.0);
}

bool Kicker::kickerStatus(int side) {
	switch(side) {
	case 0:
		if (kickerSensorLeft && kickerSensorRight) return true;
		else return false;
		break;
	case 1:
		if (kickerSensorLeft) return true;
		else return false;
		break;
	case 2:
		if (kickerSensorRight) return true;
		else return false;
		break;
	default:
		return false;
		break;
	}
}

void Kicker::manualReelControl(float reelSpeed) {
	kickerLeftReel->Set(reelSpeed);
	kickerRightReel->Set(reelSpeed);
}

void Kicker::manualLockControl(float lockSpeed) {
	kickerRelease->Set(lockSpeed);
}
