#ifndef PRECISION_DRIVE_H
#define PRECISION_DRIVE_H

#include "../CommandBase.h"
#include "WPILib.h"

class PrecisionDrive: public CommandBase {
public:
	PrecisionDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
