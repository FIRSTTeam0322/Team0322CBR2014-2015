#ifndef RELEASE_KICKER_H
#define RELEASE_KICKER_H

#include "../CommandBase.h"
#include "WPILib.h"

class ReleaseKicker: public CommandBase {
public:
	ReleaseKicker();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
