#include "SmartDashboardUpdater.h"
#include "../OI.h"

SmartDashboardUpdater::SmartDashboardUpdater() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	//Requires(chassis);
	//Requires(chassisSensors);
}

// Called just before this Command runs the first time
void SmartDashboardUpdater::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void SmartDashboardUpdater::Execute() {
	SmartDashboard::PutNumber("Gyro Angle", chassisSensors->getGyroAngle());
	SmartDashboard::PutNumber("Left Drive Encoder", chassisSensors->getLeftDistance());
	SmartDashboard::PutNumber("Right Drive Encoder", chassisSensors->getRightDistance());
	SmartDashboard::PutNumber("X-Axis Accelerometer", chassisSensors->getAccelerometerXData());
	SmartDashboard::PutNumber("Y-Axis Accelerometer", chassisSensors->getAccelerometerYData());
	SmartDashboard::PutNumber("Z-Axis Accelerometer", chassisSensors->getAccelerometerZData());
	SmartDashboard::PutNumber("Left Drive Stick", oi->getDriveStickLeft()->GetY());
	SmartDashboard::PutNumber("Right Drive Stick", oi->getDriveStickRight()->GetY());
	SmartDashboard::PutNumber("Left Front Motor", chassis->getSpeedControllerOutput(1));
	SmartDashboard::PutNumber("Left Rear Motor", chassis->getSpeedControllerOutput(3));	
	SmartDashboard::PutNumber("Right Front Motor", chassis->getSpeedControllerOutput(2));
	SmartDashboard::PutNumber("Right Rear Motor", chassis->getSpeedControllerOutput(4));
	SmartDashboard::PutBoolean("Kicker Status", kicker->kickerStatus(0));
}

// Make this return true when this Command no longer needs to run execute()
bool SmartDashboardUpdater::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SmartDashboardUpdater::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SmartDashboardUpdater::Interrupted() {
	End();
}
