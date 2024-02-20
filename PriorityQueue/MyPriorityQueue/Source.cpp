#include <iostream>
#include "Process.h"
#include"Schedular.h"
using namespace std;




//-----------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------------

int main()
{
	Process arr[4] = {
		Process(1,"notepad",20),
		Process(13,"mp3Player",5),
		Process(4,"bcc",30),
		Process(11,"explorer",2)
	};
	Schedular s(arr, 4, 5);
	s.assignProcessor();

	/*queue<int> q1(5);
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.dequeue();
	q1.enqueue(4);
	q1.dequeue();
	q1.enqueue(5);
	q1.enqueue(6);
	q1.enqueue(7);
	q1.enqueue(8);
	q1.display();
	cout << "peek value is: " << q1.peek() << endl;*/


	return 0;
}