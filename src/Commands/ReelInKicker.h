#ifndef REEL_IN_KICKER_H
#define REEL_IN_KICKER_H

#include "../CommandBase.h"
#include "WPILib.h"

class ReelInKicker: public CommandBase {
public:
	ReelInKicker();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
