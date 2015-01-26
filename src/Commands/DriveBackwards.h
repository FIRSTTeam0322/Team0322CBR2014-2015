#ifndef DRIVE_BACKWARDS_H
#define DRIVE_BACKWARDS_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveBackwards: public CommandBase {
public:
	DriveBackwards();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
