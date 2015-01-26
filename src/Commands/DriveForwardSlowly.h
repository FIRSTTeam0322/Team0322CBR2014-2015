#ifndef DRIVE_FORWARD_SLOWLY_H
#define DRIVE_FORWARD_SLOWLY_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveForwardSlowly: public CommandBase {
public:
	DriveForwardSlowly();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
