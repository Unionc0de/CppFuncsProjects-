#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

//Создаем собственные списки 

template <typename T>
class MyVector {
private:
    int size = 0;
    int capacity = 10;
    T* array;
public:
    MyVector() {
        this->array = new T[capacity];
    }

    ~MyVector() {
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
        increasevector();
        this->array[this->size++] = elem;
    }

    void insert(T elem, int index) {//Добавить элемент по индексу 
        if (index >= size || index < 0) {
            cout << "Такого индекса нет!" << endl;
            return;
        }
        else {
            increasevector();
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
            increasevector(arrSize);
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

    void sort(bool reverse = false) {
        for (int i = 0, k = size; i < k; i++)
        {
            for (int j = 0; j < k-1; j++)
            {
                if (reverse == true) {
                    if (array[j] < array[j + 1]) {
                        swap(array[j], array[j + 1]);
                    }
                }
                else {
                    if (array[j] > array[j + 1]) {
                        swap(array[j], array[j + 1]);
                    }
                }
            }
        }
        
        
    }

    T& at(int index) {
        if (index >= size || index < 0) {
            cout << "Такого индекса нет!" << endl;
            return;
        }
        return array[index];
    }

    T& operator[](int index) {
        if (index >= size || index < 0) {
            cout << "Такого индекса нет!" << endl;
            throw out_of_range("Invalid kuznechik");
        }
        return array[index];
    }

    class Iterator {//Класс внутри класса (Подкласс) можно обращаться к полям внешнего класса 
    private:
        T* ptr;
    public:
        Iterator(T* ptr) {
            this->ptr = ptr;

        }
        T& operator*() const {
            return *ptr;
        }

        Iterator& operator++() {//Префиксный 
            ++ptr;
            return *this;
        }

        Iterator& operator--() {//Префиксный 
            --ptr;
            return *this;
        }

        Iterator& operator++(int) {//Префиксный 
            Iterator temp = *this;
            ++ptr;
            return temp;
        }

        bool operator==(const Iterator& other) const {
            return this->ptr == other.ptr;
        }


        bool operator !=(const Iterator& other) const {
            return this->ptr != other.ptr;
        }

        Iterator& operator +(int num) {
            Iterator iter = (this->ptr + num);
            return iter;
        }

        Iterator& operator -(int num) {
            Iterator iter = (this->ptr - num);
            return iter;
        }
    };

    Iterator begin() {//Ссылка на первый элемент 
        return Iterator(array);
    }

    Iterator end() {//Ссылка на пустоту после последнего элемента 
        return Iterator(array+size);
    }


    typename MyVector<T>::Iterator erase(typename MyVector<T>::Iterator position) {
        if (position == this->end()) {
            throw out_of_range("Invalid kuznechik");//Вывод ошибки об выходе за границы
            return position;
        }
        for (auto it = position; it != this->end() - 1; ++it) {
            *it = *(it + 1);
        }
        --size;
        return position;
    }


private:
    void increasevector(int count = 1) {//Проверка размера масива и увилечение 
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
//* -Вывести значение по ссылке 
//& - Вывести ссылку по значение 

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    MyVector <int> vector;
    int* newArr = new int[3]{ 1,2,3 };
    vector.push_back(12);
    vector.push_back(32);
    vector.push_back(14);
    vector.push_back(52);
    vector.showArray();
    //vector.insertRange(newArr, 0, 3);
    //vector.showArray();

    //MyVector<int>::Iterator it = vector.end()-3;// Вызов подкласса в мейне 
    //cout << *it << endl;
    //vector.showArray();
    //vector.erase(it);
    
    vector.sort();
    vector.showArray();
    //for (auto it = vector.begin(); it != vector.end(); ++it)//auto - автоопределние типа данных 
    //{
    //    cout << *it <<" ";
    //}
}
