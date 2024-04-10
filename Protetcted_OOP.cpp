#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

class Person {
protected://Доступно только для дочерних классов(в main вызывать нельзя)
    string name;
    int age;
public:
    Person() {

    }

    Person(string name,int age) {
        this->name = name;
        this->age = age;
    }

    void eat() {
        cout << "Eating bebra...." << endl;
    }

};

class Employee {
protected://Доступно только для дочерних классов(в main вызывать нельзя)
    double salary;

public:
    Employee() {

    }

    Employee(double salary) {
        this->salary = salary;
    }

    void work() {
        cout << "Working for eat..." << endl;
    }
};

class Teacher:public Employee,public Person {
public:

    string group;

    Teacher(string name, int age, double salary,string group):
        Person(name,age),
        Employee(salary)
    
    {
        this->group = group;
    }

    void info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Group: " << group << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Teacher t1("ALINA BEBROVNA", 52, 2500, "ИС1");
    t1.info();

}#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

class Person {
protected://Доступно только для дочерних классов(в main вызывать нельзя)
    string name;
    int age;
public:
    Person() {

    }

    Person(string name,int age) {
        this->name = name;
        this->age = age;
    }

    void eat() {
        cout << "Eating bebra...." << endl;
    }

};

class Employee {
protected://Доступно только для дочерних классов(в main вызывать нельзя)
    double salary;

public:
    Employee() {

    }

    Employee(double salary) {
        this->salary = salary;
    }

    void work() {
        cout << "Working for eat..." << endl;
    }
};

class Teacher:public Employee,public Person {
public:

    string group;

    Teacher(string name, int age, double salary,string group):
        Person(name,age),
        Employee(salary)
    
    {
        this->group = group;
    }

    void info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Group: " << group << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Teacher t1("ALINA BEBROVNA", 52, 2500, "ИС1");
    t1.info();

}
