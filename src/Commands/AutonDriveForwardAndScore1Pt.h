#ifndef AUTON_DRIVE_FORWARD_AND_SCORE_1PT_H
#define AUTON_DRIVE_FORWARD_AND_SCORE_1PT_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutonDriveForwardAndScore1Pt: public CommandBase {
public:
	AutonDriveForwardAndScore1Pt();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
