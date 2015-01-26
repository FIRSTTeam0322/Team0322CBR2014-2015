#include "OI.h"
#include "Commands/BrakeControl.h"
#include "Commands/PrecisionDrive.h"
#include "Commands/FireKicker.h"
#include "Commands/LowerBallRestraint.h"
#include "Commands/RaiseBallRestraint.h"
#include "Commands/ReelInKicker.h"
#include "Commands/ResetKicker.h"
#include "Commands/ResetReels.h"
#include "Commands/ManualReelControl.h"
#include "Commands/ManualLockControl.h"

OI::OI() {
	// Process operator interface input here.

	// Create the three Joystick objects
	driveStickLeft = new Joystick(1);
	driveStickRight = new Joystick(2);
	manipulatorStick = new Joystick(3, NUMAXIS, NUMBUTTONS);

	// Create the Brake SubSystem controls
	brake = new JoystickButton(driveStickLeft, 1);
	brake->WhileHeld(new BrakeControl());

	// Create the Drive System controls
	precisionDriveButton = new JoystickButton(driveStickRight, 1);
	precisionDriveButton->WhileHeld(new PrecisionDrive());

	// Create the Kicker controls
	kickerFire = new JoystickButton(manipulatorStick, 1);
	kickerReset = new JoystickButton(manipulatorStick, 2);
	kickerFire->WhileHeld(new FireKicker());
	kickerReset->WhileHeld(new ResetKicker());

	// Create the Kicker & Reel Override controls
	reelOverride = new JoystickButton(manipulatorStick, 7);
	kickerOverride = new JoystickButton(manipulatorStick, 8);
	reelOverride->WhileHeld(new ManualReelControl());
	kickerOverride->WhileHeld(new ManualLockControl());

	// Create the Ball Restraint controls
	raiseBallRestraint = new JoystickButton(manipulatorStick, 3);
	lowerBallRestraint = new JoystickButton(manipulatorStick, 4);
	raiseBallRestraint->WhileHeld(new RaiseBallRestraint());
	lowerBallRestraint->WhileHeld(new LowerBallRestraint());
}

Joystick* OI::getDriveStickLeft() {
	return driveStickLeft;
}

Joystick* OI::getDriveStickRight() {
	return driveStickRight;
}

Joystick* OI::getManipulatorStick() {
	return manipulatorStick;
}
