#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	static const int NUMAXIS = 4;
	static const int NUMBUTTONS = 12;

	Joystick *driveStickLeft, *driveStickRight, *manipulatorStick;

	JoystickButton *brake, *precisionDriveButton;
	JoystickButton *kickerFire, *kickerReset;
	JoystickButton *kickerOverride, *reelOverride;
	JoystickButton *raiseBallRestraint, *lowerBallRestraint;
public:
	OI();
	Joystick* getDriveStickLeft();
	Joystick* getDriveStickRight();
	Joystick* getManipulatorStick();
};

#endif
