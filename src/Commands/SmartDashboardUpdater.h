#ifndef SMART_DASHBOARD_UPDATER_H
#define SMART_DASHBOARD_UPDATER_H

#include "../CommandBase.h"
#include "WPILib.h"

class SmartDashboardUpdater: public CommandBase {
public:
	SmartDashboardUpdater();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
