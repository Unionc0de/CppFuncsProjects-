#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const int SIZE = 5;
//OOП 
//private://Делает поля после двоеточия локальными для этого класса  
//public://Делает поля после двоеточия глобальным для всего кода 


class Student {//Создание класса студент, поля по умолчанию private  
private://Делает поля после двоеточия локальными для этого класса  
    string name;//Поле
    int age;
public: 
    Student(string name) {//конструктор для заполнения полей, должен быть всегда public 
        this->name = name;//this - указатель для полей
    }
    
    Student(string name, int age):Student(name)//Вызов конструктора внутри констурктора 
    {//перегрузка для конструктора
        this->age = age;//this - указатель для полей
    }

    void setName(string name) {//Создание сэтера, который меняет значения private, название начинается c get
        this->name = name;
    }
    
    void setAge(int age) {//Создание сэтера, который меняет значения private, название начинается c get
        this->age = age;
    }


    string getName() {//Создание гэтера, который  выводит данные privat, название начинается с get
        return name;
    }

    int getAge() {//Создание гэтера, который выводит данные privat, название начинается с get
        return age;
    }

    void showInfo() {
        cout << "Name: " << this->name << "\nAge:  " << this->age << endl;
    }
};


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Student st1("Pizda",52);//Создание объекта с помощью конструктора 
    st1.showInfo();
    st1.setAge(st1.getAge() + 1);//увеличение возраста на 1
    st1.showInfo();
}


