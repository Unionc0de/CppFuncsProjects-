#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const int SIZE = 5;

template <typename T>
class MyQueue {
private:
    T* elements;
    int capacity;
    int size;
public:
    MyQueue() :capacity(10), size(0) {
        elements = new T[capacity];
    }

    ~MyQueue() {
        delete[] this->elements;
    }

    MyQueue(const MyQueue& newQueue) {//конструктор копирования
        this->capacity = newQueue.capacity;
        this->size = newQueue.size;
        this->elements = new T[newQueue.capacity];
        for (int i = 0; i <= newQueue.size; i++)
        {
            this->elements[i] = newQueue.elements[i];
        }
    }

    MyQueue& operator=(const MyQueue& newQueue) {
        delete[] this->elements;
        this->capacity = newQueue.capacity;
        this->size = newQueue.size;
        this->elements = new T[newQueue.capacity];
        for (int i = 0; i <= newQueue.size; i++)
        {
            this->elements[i] = newQueue.elements[i];
        }
        return *this;
    }

    bool operator ==(const MyQueue& newQueue) {
        if (this->size != newQueue.size) {
            return false;
        }
        else {
            for (int i = 0; i < this->size; i++)
            {
                if (this->elements[i] != newQueue.elements[i]) {
                    return false;
                }
            }
            return true;
        }
    }

    void push(const T& elem) {
        if (size == capacity) {
            capacity *= 2;
            T* buf = new T[capacity];
            for (int i = 0; i < size; i++)
            {
                buf[i] = elements[i];
            }
        }
        elements[size++] = elem;
        
    }

    bool empty() {
        if (size < 0) {
            return true;
        }
        return false;
    }

    void pop() {
        if (size == capacity) {
            capacity *= 2;
            T* buf = new T[capacity];
            for (int i = 0; i < size; i++)
            {
                buf[i] = elements[i];
            }
        }
        
        if (empty())
        {
            throw out_of_range("Массив пуст");//Вывод ошибки о переполнении 
        }
        
        
        else {
            for (int i = 0; i < size; i++)
            {
                swap(elements[i],elements[i + 1]);
            }
            size--;
        }
    }

    T& front() {
        return elements[0];
    }

    T& back() {
        return elements[size-1];
    }

    void print() {
        for (int i = 0; i < size; i++)
        {
            cout << elements[i] << endl;
        }
        cout << endl;
    }
};



int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    MyQueue<int> que1;

    que1.push(1);
    que1.push(12);
    que1.push(14);
    que1.push(71);
    que1.push(1);
    que1.push(12);
    que1.push(14);
    que1.push(71);
    que1.push(0);
    que1.push(0);
    que1.print();
    que1.pop();
    que1.print();

    /*MyQueue<int> que2;

    que2.push(1);
    que2.push(12);
    que2.push(14);
    que2.push(71);

    cout << (que1 == que2) << endl;*/

}
