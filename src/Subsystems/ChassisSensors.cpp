#include "ChassisSensors.h"
#include "../Robotmap.h"

ChassisSensors::ChassisSensors() : Subsystem("ChassisSensors") {
	// Create an Encoder object for each transmission
	leftEncoder = new Encoder(4,5,true, leftEncoder->k4X);
	rightEncoder = new Encoder(6,7,false, rightEncoder->k4X);
	
	// Create a Gyro(scope) object on AnalogModule 1, AnalogInput 1
	gyro = new Gyro(0);
	
	// Create the Accelerometer object for the Built-in Accelerometer
	accel = new BuiltInAccelerometer(BuiltInAccelerometer::kRange_8G);
}
    
void ChassisSensors::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void ChassisSensors::resetEncoders() {
	leftEncoder->Reset();
	rightEncoder->Reset();
}

double ChassisSensors::getLeftDistance() {
	return leftEncoder->GetDistance();
}

double ChassisSensors::getRightDistance() {
	return rightEncoder->GetDistance();
}

void ChassisSensors::resetGyro() {
	gyro->Reset();
}

double ChassisSensors::getGyroAngle() {
	return gyro->GetAngle();
}

double ChassisSensors::getAccelerometerXData() {
	return accel->GetX();
}

double ChassisSensors::getAccelerometerYData() {
	return accel->GetY();
}

double ChassisSensors::getAccelerometerZData() {
	return accel->GetZ();
}

Encoder* ChassisSensors::getEncoder(int type) {
	switch(type) {
		case 1:
			return leftEncoder;
		break;
		
		case 2:
			return rightEncoder;
		break;
		
		default:
			return NULL;
		break;
	}
}

Gyro* ChassisSensors::getGyro() {
	return gyro;
}

BuiltInAccelerometer* ChassisSensors::getAccelerometer() {
	return accel;
}
