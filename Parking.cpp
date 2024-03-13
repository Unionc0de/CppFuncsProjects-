#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

const char LETTERS[] = {'A','B','E','K','M','H','O','P','C','T','X'};
const char NUMBERS[] = { '0','1','2','3','4','5','6','7','8','9' };
const string COLORS[] = { "White","Red","Aqua","Blue","Black","Yellow","Green"};
const string MODELS[] = { "Nissan Silvia S15","BMW M4 G80","Acura NSX 1",
"BMW M5 E60","Tesla Model X Plaid","Audi RS6 C8","Porsche 911 935","BMW M5 F90"
,"Zeekr 001","Audi RS2","Mazda RX-7 FD"};

class Car {
private:
    static int lastNumber;//Создание статического поля - поле, которое относится ко всему классу, а не к объекту
    int number;
    string model;
    string color;
public:
    Car(){};
    
    Car(string model, string color) {
        this->number = lastNumber++;
        this->model = model;
        this->color = color;
    }

    int getNumber() {
        return number;
    }

    static int getLastNumber() {//метод для возврата статического поля тоже должен быть статическим 
        return lastNumber;
    }

    static void setLastNumber(int newLastNumber) {
        lastNumber = newLastNumber;
    }

    void carInfo() {
        cout << "Car number: " << number
            << "\nCar Model: " << model
            << "\nCar color: " << color << "\n\n";
    }
//private:
//    void incrementLastNumber() {
//        while (lastNumber[5] != 'X'
//            && lastNumber[1] != '9'
//            && lastNumber[2] != '9'
//            && lastNumber[3] != '9') {
//            
//            for (int i = 0; i < 10; i++) {
//                lastNumber[3] = NUMBERS[i];
//                cout << lastNumber << " ";
//            }
//        }
//    }
};

int Car::lastNumber = 1;//Инцилизация статического поля 

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
   
    Car cars[100];
    for (int i = 0; i < 100; i++)
    {
        cars[i] = Car(MODELS[random(0, 10)], COLORS[random(0, 6)]);
    }

    for (int i = 0; i < 100; i++)
    {
        cars[i].carInfo();
    }
}