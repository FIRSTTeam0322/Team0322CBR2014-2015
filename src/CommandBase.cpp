#include "CommandBase.h"
#include "Subsystems/ChassisSensors.h"
#include "Subsystems/AutonomusModeSwitches.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Kicker.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
ChassisSensors* CommandBase::chassisSensors = NULL;
AutonomusModeSwitches* CommandBase::autonomusModeSwitches = NULL;
BallRestraint* CommandBase::ballRestraint = NULL;
Chassis* CommandBase::chassis = NULL;
Kicker* CommandBase::kicker = NULL;
OI* CommandBase::oi = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	chassisSensors = new ChassisSensors();
	autonomusModeSwitches = new AutonomusModeSwitches();
	ballRestraint = new BallRestraint();
	chassis = new Chassis();
	kicker = new Kicker();
	oi = new OI();
}
