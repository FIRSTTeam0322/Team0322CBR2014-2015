#include "AutonomusModeSwitches.h"
#include "../Robotmap.h"

AutonomusModeSwitches::AutonomusModeSwitches() : Subsystem("AutonomusModeSwitches") {
	mode = 0;
	switch1 = new DigitalInput(8);
	switch2 = new DigitalInput(9);
	switch3 = new DigitalInput(10);
	switch4 = new DigitalInput(11);
}
    
void AutonomusModeSwitches::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
int AutonomusModeSwitches::GetMode() {
	mode = 0;
	if (switch1) mode = mode + 1;
	if (switch2) mode = mode + 2;
	if (switch3) mode = mode + 4;
	if (switch4) mode = mode + 8;
	return mode;
}

void AutonomusModeSwitches::SetMode(int setting) {
	mode = setting;
}
