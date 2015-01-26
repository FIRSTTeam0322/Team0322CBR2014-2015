#ifndef MANUAL_REEL_CONTROL_H
#define MANUAL_REEL_CONTROL_H

#include "../CommandBase.h"
#include "WPILib.h"

class ManualReelControl: public CommandBase {
public:
	ManualReelControl();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
