#ifndef CHASSIS_SENSORS_H
#define CHASSIS_SENSORS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class ChassisSensors: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Encoder *leftEncoder, *rightEncoder;
	Gyro *gyro;
	BuiltInAccelerometer *accel;
public:
	ChassisSensors();
	void InitDefaultCommand();
	void resetEncoders();
	double getLeftDistance();
	double getRightDistance();
	void resetGyro();
	double getGyroAngle();
	double getAccelerometerXData();
	double getAccelerometerYData();
	double getAccelerometerZData();
	Encoder* getEncoder(int);
	Gyro* getGyro();
	BuiltInAccelerometer* getAccelerometer();
};

#endif
