#ifndef AUTON_DO_NOTHING_H
#define AUTON_DO_NOTHING_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutonDoNothing: public CommandBase {
public:
	AutonDoNothing();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
