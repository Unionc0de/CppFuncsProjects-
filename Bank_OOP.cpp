#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const char NUMBERS[] = { '0','1','2','3','4','5','6','7','8','9' };
const string firstNameArr[] = {"Arnold","Vadim","Berta","Fritz","Govno","Impotent","Burytka","Pedya","Bebra","Comar"};
const string lastNameArr[] = {"Borisov","Kukuhin","Drizhenko","Suprimov","Tadzhichka","Glinomes"
,"Pnev","Mitko","Cumshotov","Magdesyan"};
class Client;
class Bank;


class Client {
    friend class Bank;//Теперь в классе банк все поля клиента стали public
private:
    string firstName;
    string lastName;
    int age;
    long int bankAcc;
    long float balance;
    static int id;
public:
    Client() {

    }
    
    Client(string fName, string lName,int age,long float balance = 0) {
        this->firstName = fName;
        this->lastName = lName;
        this->age = age;
        
        int newId = generateId();

    }

    void setFirstName(string fName) {
        this->firstName = fName;
    }

    void setLastName(string lName) {
        this->lastName = lName;
    }

    void setAge(int age) {
        this->age = age;
    }

    void showInfo() {
        cout << "First name: " << this->firstName << endl;
        cout << "Last name: " << this->lastName << endl;
        cout << "Age: " << this->age << endl;
        //cout << "Balance" << this->balance << endl;
    }
    
    string getFirstName() {
        return this->firstName;
    }

     string getLastName() {
         return this->lastName;
     }

     string getName() {
         return this->firstName, this->lastName;
     }

     int getAge() {
         return this->age;
     }

     long int getBankAccount() {
         return this->bankAcc;
     }

     long float getBalance() {
         return this->balance;
     }

     //int lastId(int id) {
     //    return this->id;
     //}
private:
     static int generateId() {
         return id + 1;
         id++;
     }

};

class Bank {
public:
    string name;
private:
    Client* clients = new Client[100];
};


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Client cl1 = Client(firstNameArr[random(0, 9)], lastNameArr[random(0, 9)],52);
    cl1.showInfo();
}