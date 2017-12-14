#include "ExampleCommand.h"

ExampleCommand::ExampleCommand() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize() {
	i = 0;
}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute() {
	i++;
}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished() {
	if (i > 5)
	{
		return false;
	}
}

// Called once after isFinished returns true
void ExampleCommand::End() {
	delete i;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted() {
	i = 0;
}
