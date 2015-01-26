#ifndef RESET_KICKER_LOCK_H
#define RESET_KICKER_LOCK_H

#include "../CommandBase.h"
#include "WPILib.h"

class ResetKickerLock: public CommandBase {
private:
	Timer* resetTimer;
public:
	ResetKickerLock();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
