#ifndef AUTONOMUS_MODE_SWITCHES_H
#define AUTONOMUS_MODE_SWITCHES_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author CCRLH85
 */
class AutonomusModeSwitches: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	DigitalInput *switch1, *switch2, *switch3, *switch4;
	int mode;
public:
	AutonomusModeSwitches();
	void InitDefaultCommand();
	int GetMode(void);
	void SetMode(int);
};

#endif
