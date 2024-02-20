#include"Process.h"
#include"Queue.h"

class Schedular
{
private:
	Queue<Process> processArray;
	int processArrayLength;
	int timeQuantum;
public:
	Schedular(Process* p, int procArrLen, int quantum);
	void assignProcessor();
};
