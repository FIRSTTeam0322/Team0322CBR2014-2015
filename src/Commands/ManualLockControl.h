#ifndef MANUAL_LOCK_CONTROL_H
#define MANUAL_LOCK_CONTROL_H

#include "../CommandBase.h"
#include "WPILib.h"

class ManualLockControl: public CommandBase {
public:
	ManualLockControl();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
