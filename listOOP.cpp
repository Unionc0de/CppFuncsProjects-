#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

//Создаем собственные списки 

template <typename T>
class MyList {
private:
    int size = 0;
    int capacity = 10;
    T* array;
public:
    MyList() {
        this->array = new T[capacity];
    }

    ~MyList() {
        delete[] this->array;
    }

    T& front() {//Вывод первого элемента
        return array[0];
    }

    T& back() {//Вывод последнего элемента
        return array[size - 1];
    }

    bool empty() {//Проверка, пустой масив или нет
        if (size > 0){
            return false;
        }
        return true;
    }

    int getSize() {//Узнать размер 
        return size;
    }

    void push_back(T elem) {//Добавить элемент в конец
        increaseList();
        this->array[this->size++] = elem;
    }

    void insert(T elem, int index) {//Добавить элемент по индексу 
        if (index >= size || index < 0) {
            cout << "Такого индекса нет!" << endl;
            return;
        }
        else {
            increaseList();
            for (int i = size; i > index; i--)
            {
                array[i] = array[i - 1];
            }
            array[index] = elem;
            size++;

        }
    }

    void pop(int index) {//Удалить элемент по индексу 
        if (index >= size || index < 0) {
            cout << "Такого индекса нет!" << endl;
            return;
        }

        else {
            for (int i = index; i < size; i++)
            {
                array[i] = array[i + 1];
            }
            size--;
        }
    }

    void popBack() {//Удалить элемент в конце 
        size--;
    }

    void popFront() {//Удалить элемент вначале  
        pop(0);
    }

    void push_front(T elem) {//Добавление элемента в начало 
        insert(elem, 0);
    }

    void max_size() {//Вывод максимального размера 
        return INT_MAX;
    }

    void set(T elem, int index) {
        if (index >= size || index < 0) {
            cout << "Такого индекса нет!" << endl;
            return;
        }
        else {
            array[index] = elem;
        }
    }

    void showArray() {//Вывод масива
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void clear() {//Очищение списка
        capacity = 10;
        size = 0;
        delete[] array;
        array = new T[this->capacity];
    }

    void insertRange(T *newArr, int index, int arrSize) {//Добавить несколько элементов по индексу
        if (index >= size || index < 0) {
            cout << "Такого индекса нет!" << endl;
            return;
        }

        else {
            increaseList(arrSize);
            for (int i = size; i >= index; i--)
            {
                array[i + arrSize] = array[i];
            }
            for (int i = 0; i < arrSize; i++)
            {
                array[i+index] = newArr[i];
            }
            size += arrSize;
                
        }
    }

private:
    void increaseList(int count = 1) {//Проверка размера масива и увилечение 
        if ((size + count) >= this->capacity * 0.75) {
            this->capacity *= 1.5;
            if (capacity < size + count) {
                capacity += count;
            }
            T* buf = new T[this->capacity];
            for (int i = 0; i < size; i++)
            {
                buf[i] = array[i];
            }
            delete[] array;
            array = buf;
        }
    }



};

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    MyList <int> list;
    int* newArr = new int[3]{ 1,2,3 };
    list.push_back(12);
    list.push_back(32);
    list.push_back(14);
    list.push_back(52);
    list.showArray();
    list.insertRange(newArr, 4, 3);
    list.showArray();
}
