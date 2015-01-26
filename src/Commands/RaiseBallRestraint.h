#ifndef RAISE_BALL_RESTRAINT_H
#define RAISE_BALL_RESTRAINT_H

#include "../CommandBase.h"
#include "WPILib.h"

class RaiseBallRestraint: public CommandBase {
public:
	RaiseBallRestraint();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
