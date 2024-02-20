
template <typename T>
class Queue
{	//Schedular
private:
	T* queue;
	//int processArrayLength;
	//int timeQuantum;

	int size;
	int front;
	int rear;
	int count;
public:
	Queue() {
		size = 0;
		queue = nullptr;
		front = rear = -1;
		count = 0;
		//processArrayLength = 0;
		//timeQuantum = 0;
	}
	Queue(int s) {
		size = s;
		queue = new T[size];
		front = -1;
		rear = -1;
	}
	void setSize(int s) {
		size = s;
		queue = new T[size];
		front = -1;
		rear = -1;
	}
	void setProcess(int s) {
		size = s;
		queue = new T[size];
		front = -1;
		rear = -1;
	}
	void enqueue(T val) {
		if (isFull()) {
			resize();
			/*rear=(rear+1)%size;
			queue[rear] = val;
			count++;*/
		}
		if (front == -1) {
			front++;
		}
		rear = (rear + 1) % size;
		queue[rear] = val;
		count++;

	}
	void dequeue() {
		if (isEmpty()) {
			cout << "QUEUE IS EPMTY!" << endl;
		}
		front = (front + 1) % size;
		count--;

	}
	T& peek() {
		if (!isEmpty()) {
			//cout << "Size of Queue is: " << size << endl;
			//cout << "Count is: " << count << endl;
			//cout << "FRONT: " << front << " " << endl;
		/*	T val;
			if (front == 0) {
				return queue[front];
			}
			front = (front + 1) % size;
			val = queue[front];
			return val;
*/
			return queue[front];

		}
		else {
			cout << "Empty!" << endl;
			//return -1;
		}
	}
	bool isFull() {
		if (count == size)
		{
			return true;
		}
		else {
			return false;
		}
	}
	bool isEmpty() {
		/*if (rear == -1) {
			return true;
		}
		else {
			return false;
		}*/
		if (count == 0)
		{
			return true;
		}
		else {
			return false;
		}
		/*
		return count == 0;*/
	}
	void resize() {
		int i = 0;
		T* temp = new T[size * 2];
		while (front != rear) {
			temp[i] = queue[front];
			front = (front + 1) % size;
			i++;
		}
		temp[i] = queue[front];
		size = size * 2;
		front = -1;
		rear = count - 1;
		delete[] queue;
		queue = temp;
	}
	void display() {
		if (!isEmpty())
		{
			if (front == -1) {
				front++;
			}
			for (int i = front; i <= rear; i++)
			{
				cout << queue[i] << " ";
				//front = (front + 1) % size;
			}
		}


	}

};