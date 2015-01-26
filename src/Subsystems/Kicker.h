#ifndef KICKER_H
#define KICKER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Kicker: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	SpeedController *kickerLeftReel, *kickerRightReel, *kickerRelease;
	DigitalInput *kickerSensorLeft, *kickerSensorRight;
	
	bool kickerResetCheck(void);
	bool kickerReleaseCheck(void);
public:
	Kicker();
	void InitDefaultCommand();
	void lockKicker(void);
	void unlockKicker(void);
	void runRollersIn(void);
	void runRollersOut(void);
	bool kickerStatus(int);
	void manualReelControl(float);
	void manualLockControl(float);
};

#endif
