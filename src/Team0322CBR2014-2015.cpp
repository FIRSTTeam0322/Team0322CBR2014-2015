#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ResetSensors.h"
#include "Commands/DriversStationUpdater.h"
#include "Commands/AutonSelector.h"
#include "Commands/AutonDriveForward.h"
#include "Commands/SmartDashboardUpdater.h"
#include "CommandBase.h"

//void UpdateSmartDashboard(void);

class Team0322CBR2014_2015: public IterativeRobot
{
private:
	Command *autonomousCommand;
	Command* resetSensors;
	Command* driversStationUpdater;
	Command* smartDashboardUpdater;
	LiveWindow *lw;

	void RobotInit()
	{
		CommandBase::init();
		autonomousCommand = new AutonSelector();
		//autonomousCommand = new AutonDriveForward();
		resetSensors = new ResetSensors();
		driversStationUpdater = new DriversStationUpdater();
		smartDashboardUpdater = new SmartDashboardUpdater();
		lw = LiveWindow::GetInstance();

		resetSensors->SetRunWhenDisabled(true);
		driversStationUpdater->SetRunWhenDisabled(true);
		smartDashboardUpdater->SetRunWhenDisabled(true);

		/*
		CameraServer::GetInstance()->SetQuality(50);
		//the camera name (ex "cam0") can be found through the roboRIO web interface
		CameraServer::GetInstance()->StartAutomaticCapture("cam0");
		*/

		resetSensors->Start();

		resetSensors->Cancel();
	}
	
	void DisabledPeriodic()
	{
		driversStationUpdater->Run();
		//smartDashboardUpdater->Run();
		UpdateSmartDashboard();
		/*
		SmartDashboard::PutNumber("Gyro Angle", CommandBase::chassisSensors->getGyroAngle());
		SmartDashboard::PutNumber("Left Drive Encoder", CommandBase::chassisSensors->getLeftDistance());
		SmartDashboard::PutNumber("Right Drive Encoder", CommandBase::chassisSensors->getRightDistance());
		SmartDashboard::PutNumber("X-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerXData());
		SmartDashboard::PutNumber("Y-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerYData());
		SmartDashboard::PutNumber("Z-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerZData());
		SmartDashboard::PutNumber("Left Drive Stick", CommandBase::oi->getDriveStickLeft()->GetY());
		SmartDashboard::PutNumber("Right Drive Stick", CommandBase::oi->getDriveStickRight()->GetY());
		SmartDashboard::PutNumber("Left Front Motor", CommandBase::chassis->getSpeedControllerOutput(1));
		SmartDashboard::PutNumber("Left Rear Motor", CommandBase::chassis->getSpeedControllerOutput(3));
		SmartDashboard::PutNumber("Right Front Motor", CommandBase::chassis->getSpeedControllerOutput(2));
		SmartDashboard::PutNumber("Right Rear Motor", CommandBase::chassis->getSpeedControllerOutput(4));
		SmartDashboard::PutBoolean("Kicker Status", CommandBase::kicker->kickerStatus(0));
		*/
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit()
	{
		if (autonomousCommand != NULL)
			autonomousCommand->Start();
		resetSensors->Cancel();
	}

	void AutonomousPeriodic()
	{
		driversStationUpdater->Run();
		//smartDashboardUpdater->Run();
		UpdateSmartDashboard();
		/*
		SmartDashboard::PutNumber("Gyro Angle", CommandBase::chassisSensors->getGyroAngle());
		SmartDashboard::PutNumber("Left Drive Encoder", CommandBase::chassisSensors->getLeftDistance());
		SmartDashboard::PutNumber("Right Drive Encoder", CommandBase::chassisSensors->getRightDistance());
		SmartDashboard::PutNumber("X-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerXData());
		SmartDashboard::PutNumber("Y-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerYData());
		SmartDashboard::PutNumber("Z-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerZData());
		SmartDashboard::PutNumber("Left Drive Stick", CommandBase::oi->getDriveStickLeft()->GetY());
		SmartDashboard::PutNumber("Right Drive Stick", CommandBase::oi->getDriveStickRight()->GetY());
		SmartDashboard::PutNumber("Left Front Motor", CommandBase::chassis->getSpeedControllerOutput(1));
		SmartDashboard::PutNumber("Left Rear Motor", CommandBase::chassis->getSpeedControllerOutput(3));
		SmartDashboard::PutNumber("Right Front Motor", CommandBase::chassis->getSpeedControllerOutput(2));
		SmartDashboard::PutNumber("Right Rear Motor", CommandBase::chassis->getSpeedControllerOutput(4));
		SmartDashboard::PutBoolean("Kicker Status", CommandBase::kicker->kickerStatus(0));
		*/
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit()
	{
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		if (autonomousCommand != NULL)
			autonomousCommand->Cancel();
		resetSensors->Cancel();
	}

	void TeleopPeriodic()
	{
		driversStationUpdater->Run();
		//smartDashboardUpdater->Run();
		UpdateSmartDashboard();
		/*
		SmartDashboard::PutNumber("Gyro Angle", CommandBase::chassisSensors->getGyroAngle());
		SmartDashboard::PutNumber("Left Drive Encoder", CommandBase::chassisSensors->getLeftDistance());
		SmartDashboard::PutNumber("Right Drive Encoder", CommandBase::chassisSensors->getRightDistance());
		SmartDashboard::PutNumber("X-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerXData());
		SmartDashboard::PutNumber("Y-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerYData());
		SmartDashboard::PutNumber("Z-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerZData());
		SmartDashboard::PutNumber("Left Drive Stick", CommandBase::oi->getDriveStickLeft()->GetY());
		SmartDashboard::PutNumber("Right Drive Stick", CommandBase::oi->getDriveStickRight()->GetY());
		SmartDashboard::PutNumber("Left Front Motor", CommandBase::chassis->getSpeedControllerOutput(1));
		SmartDashboard::PutNumber("Left Rear Motor", CommandBase::chassis->getSpeedControllerOutput(3));
		SmartDashboard::PutNumber("Right Front Motor", CommandBase::chassis->getSpeedControllerOutput(2));
		SmartDashboard::PutNumber("Right Rear Motor", CommandBase::chassis->getSpeedControllerOutput(4));
		SmartDashboard::PutBoolean("Kicker Status", CommandBase::kicker->kickerStatus(0));
		*/
		Scheduler::GetInstance()->Run();
	}

	void TestPeriodic()
	{
		lw->Run();
	}

	void UpdateSmartDashboard() {
		SmartDashboard::PutNumber("Gyro Angle", CommandBase::chassisSensors->getGyroAngle());
		SmartDashboard::PutNumber("Left Drive Encoder", CommandBase::chassisSensors->getLeftDistance());
		SmartDashboard::PutNumber("Right Drive Encoder", CommandBase::chassisSensors->getRightDistance());
		SmartDashboard::PutNumber("X-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerXData());
		SmartDashboard::PutNumber("Y-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerYData());
		SmartDashboard::PutNumber("Z-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerZData());
		SmartDashboard::PutNumber("Left Drive Stick", CommandBase::oi->getDriveStickLeft()->GetY());
		SmartDashboard::PutNumber("Right Drive Stick", CommandBase::oi->getDriveStickRight()->GetY());
		SmartDashboard::PutNumber("Left Front Motor", CommandBase::chassis->getSpeedControllerOutput(1));
		SmartDashboard::PutNumber("Left Rear Motor", CommandBase::chassis->getSpeedControllerOutput(3));
		SmartDashboard::PutNumber("Right Front Motor", CommandBase::chassis->getSpeedControllerOutput(2));
		SmartDashboard::PutNumber("Right Rear Motor", CommandBase::chassis->getSpeedControllerOutput(4));
		SmartDashboard::PutBoolean("Kicker Status", CommandBase::kicker->kickerStatus(0));
	}
};

START_ROBOT_CLASS(Team0322CBR2014_2015);

