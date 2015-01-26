#ifndef LOWER_BALL_RESTRAINT_H
#define LOWER_BALL_RESTRAINT_H

#include "../CommandBase.h"
#include "WPILib.h"

class LowerBallRestraint: public CommandBase {
public:
	LowerBallRestraint();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
