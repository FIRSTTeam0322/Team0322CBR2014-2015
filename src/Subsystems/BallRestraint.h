#ifndef BALL_RESTRAINT_H
#define BALL_RESTRAINT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author CCRLH85
 */
class BallRestraint: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	SpeedController *ballRestraintMotor;
public:
	BallRestraint();
	void InitDefaultCommand();
	void MoveBallRestraint(float);
	void RaiseBallRestraint(void);
	void LowerBallRestraint(void);
	void StopBallRestraint(void);
};

#endif
