#pragma once
#ifndef PROCESS_H
#define PROCESS_H
#include <iostream>
#include <string>
using namespace std;
class Process
{
private:
	int processId;
	string processName;
	int processExecTime;
public:
	Process();
	Process(int id, string name, int burstTime);
	void setExeTime(int t);
	int getId();
	string getName();
	int getExeTime();
};
#endif