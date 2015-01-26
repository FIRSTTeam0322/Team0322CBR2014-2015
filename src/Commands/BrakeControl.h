#ifndef BRAKE_CONTROL_H
#define BRAKE_CONTROL_H

#include "../CommandBase.h"
#include "WPILib.h"

class BrakeControl: public CommandBase {
public:
	BrakeControl();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
