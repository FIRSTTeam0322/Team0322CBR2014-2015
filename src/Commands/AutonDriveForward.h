#ifndef AUTON_DRIVE_FORWARD_H
#define AUTON_DRIVE_FORWARD_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutonDriveForward: public CommandBase {
public:
	AutonDriveForward();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
