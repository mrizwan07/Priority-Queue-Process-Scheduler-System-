#include"Schedular.h"

Schedular::Schedular(Process* p, int procArrLen, int quantum)
{
	processArray.setSize(procArrLen);
	for (int i = 0; i < procArrLen; i++)
	{
		processArray.enqueue(p[i]);
	}
	/*
			processArray.enQueue(p[3])*/

	processArrayLength = procArrLen;
	timeQuantum = quantum;
}


void Schedular::assignProcessor()
{
	while (!processArray.isEmpty())
	{
		if (processArray.peek().getExeTime() > 0)
		{
			Process currProcess = processArray.peek();
			cout << "\nProcess " << currProcess.getId() << " is executing: \n" << endl;
			cout << "Process Name: " << currProcess.getName() << endl;
			cout << "Execution Time Required: " << currProcess.getExeTime() << endl;
			int time = currProcess.getExeTime() - timeQuantum;
			currProcess.setExeTime(time);
			if (currProcess.getExeTime() <= 0)
			{
				processArray.dequeue();
			}
			else {
				Process temp = currProcess;
				processArray.dequeue();
				processArray.enqueue(temp);

			}

			/*processArray[rear] = processArray[i].peek();
			processArray[i].dequeue();*/

			//processArray[i].peek().setExeTime(processArray[i].peek().getExeTime() - timeQuantum);
			//processArray[rear] = processArray[i].peek();
			//processArray[i].dequeue();
		}
	}
}