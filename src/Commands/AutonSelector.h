#ifndef AUTON_SELECTOR_H
#define AUTON_SELECTOR_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutonSelector: public CommandBase {
private:
	Command* autonCommand;
	int mode;
public:
	AutonSelector();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
