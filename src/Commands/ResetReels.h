#ifndef RESET_REELS_H
#define RESET_REELS_H

#include "../CommandBase.h"
#include "WPILib.h"

class ResetReels: public CommandBase {
private:
	Timer *resetTimer;
public:
	ResetReels();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
