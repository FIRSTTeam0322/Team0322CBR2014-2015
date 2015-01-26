#ifndef RESET_SENSORS_H
#define RESET_SENSORS_H

#include "../CommandBase.h"
#include "WPILib.h"

class ResetSensors: public CommandBase {
public:
	ResetSensors();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
