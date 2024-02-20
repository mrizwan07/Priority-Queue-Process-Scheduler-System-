#include <iostream>
using namespace std;

template <typename T>
class Bhistory {
    T* queue;
    int size;
    int front;
    int rear;
    int count;

public:
    Bhistory(int s = 10) : size(s), front(-1), rear(-1), count(0) {
        queue = new T[size];
    }

    ~Bhistory() {
        delete[] queue;
    }

    void forward(T val) {
        if (!isFull()) {
            rear = (rear + 1) % size;
            queue[rear] = val;
            count++;
            if (front == -1) {
                front++;
            }
        } else {
            cout << "Queue is full" << endl;
        }
    }

    void back() {
        if (!isEmpty()) {
            front = (front + 1) % size;
            count--;
        } else {
            cout << "Queue is empty" << endl;
        }
    }

    bool isFull() {
        return count == size;
    }

    bool isEmpty() {
        return count == 0;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Elements in queue are following:" << endl;
        int temp = front;
        while (temp != rear) {
            cout << queue[temp] << endl;
            temp = (temp + 1) % size;
        }
        cout << queue[temp] << endl;
    }
};

int main() {
    Bhistory<int> q1(5);
    q1.forward(1);
    q1.forward(2);
    q1.forward(3);
    q1.forward(4);
    q1.forward(5);
    q1.forward(6); // Queue is full
    q1.display();
    q1.back();
    q1.back();
    q1.back();
    q1.back();
    q1.back();
    q1.display(); // Queue is empty
    return 0;
}
