#include"Process.h"

Process::Process()
{
	processId = 0;
	processName = "";
	processExecTime = 0;
}

Process::Process(int id, string name, int burstTime)
{
	processId = id;
	processName = name;
	processExecTime = burstTime;
}

void Process::setExeTime(int t) {
	this->processExecTime = t;
}

int Process::getId()
{
	return processId;
}

string Process::getName()
{
	return processName;
}

int Process::getExeTime() 
{
	return processExecTime;
}