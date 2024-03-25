#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

const char LETTERS[] = { 'A','B','E','K','M','H','O','P','C','T','X' };
const char NUMBERS[] = { '0','1','2','3','4','5','6','7','8','9' };
const string COLORS[] = { "White","Red","Aqua","Blue","Black","Yellow","Green" };
const string MODELS[] = { "Nissan Silvia S15","BMW M4 G80","Acura NSX 1",
"BMW M5 E60","Tesla Model X Plaid","Audi RS6 C8","Porsche 911 935","BMW M5 F90"
,"Zeekr 001","Audi RS2","Mazda RX-7 FD" };

class Car {
private:
    static string lastNumber;//Создание статического поля - поле, которое относится ко всему классу, а не к объекту
    string number;
    string model;
    string color;
public:

    Car() {};

    Car(string model, string color) {
        this->number = lastNumber;
        this->model = model;
        this->color = color;
        string createNumber = generateNumber();
        if (lastNumber != "EKH")
        {
            lastNumber = createNumber;
        }
    }

    string getNumber() {
        return number;
    }

    static string getLastNumber() {//метод для возврата статического поля тоже должен быть статическим 
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

    void setCarColor(string carColor) {
        color = carColor;
    }

    string getCarColor() {
        return color;
    }

    string getCarNumber() {
        return number;
    }

    string getCarModel() {
        return model;
    }


private:
    string generateNumber() {
        string letters = "";
        letters += lastNumber[0];
        letters += lastNumber[4];
        letters += lastNumber[5];
        int number = stoi(lastNumber.substr(1, 3));//Перевод из стр в инт. Substr - Вырезает значения из инта

        if (number >= 999) {
            number = 0;
            if (letters[2] == 'X') {
                letters[2] = LETTERS[0];
                if (letters[1] == 'X')
                {
                    letters[1] = LETTERS[0];
                    if (letters[0] == 'X')
                    {
                        return "EKH";
                    }
                    else
                    {
                        letters[0] = findNextLetter(letters[0]);
                    }

                }
                else
                {
                    letters[1] = findNextLetter(letters[1]);
                }
            }
            else
            {

                letters[2] = findNextLetter(letters[2]);
            }
        }
        else
        {
            number++;
        }

        int count = 1;

        if (number < 100 && number > 9)
        {
            count = 2;
        }

        else if (number < 1000 && number > 99)
        {
            count = 3;
        }

        string newNumber = "";
        newNumber += letters[0];

        for (int i = 0; i < 3 - count; i++)
        {
            newNumber += '0';
        }

        newNumber += to_string(number);
        newNumber += letters[1];
        newNumber += letters[2];

        return newNumber;
    }

    char findNextLetter(char currentLetter) {
        for (int i = 0; i < 11; i++)
        {
            if (LETTERS[i] == currentLetter)
            {
                return LETTERS[i + 1];
            }
        }
    }
};

string Car::lastNumber = "A000AA ";//Инцилизация статического поля 

class Parking {
private:
    string name;
    int capacity;
    int size = 0;
    float price;
    Car** cars = new Car*[size];
public:
    Parking(string name, int capacity, float price) {
        this->name = name;
        this->capacity = capacity;
        this->price = price;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setPrice(float price) {
        this->price = price;
    }

    float getPrice() {
        return price;
    }

    void addCar(Car* car) {
        
        if (size >= capacity) {
            cout << "Гараж переполнен!" << endl;
            return;
        }

        for (int i = 0; i < size; i++)
        {
            if (car->getCarNumber() == cars[i]->getNumber()) {
                cout << "Такая машина уже есть!" << endl;
                return;
            }
        }

        Car** buf = new Car*[size + 1];

        for (int i = 0; i < size; i++)
        {
            buf[i] = cars[i];
        }
        
        buf[size] = car;
        delete[] cars;
        cars = buf;
        size++;
    }

    void deleteCar(string number) {
        if (size <= 0) 
        {
            cout << "Ваш гараж пуст" << endl;
        }

        int index = -1;

        for (int i = 0; i < size; i++)
        {
            if (cars[i]->getNumber() == number) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            cout << "Такой машины нет!" << endl;
            return;
        }

        else {
            Car** buf = new Car*[size - 1];

            for (int i = 0; i < index; i++)
            {
                buf[i] = cars[i];
            }

            for (int i = index; i < size; i++)
            {
                buf[i] = cars[i + 1];
            }
            delete[] cars;
            cars = buf;
            size--;
        }

    }

    void parkInfo() { 
        cout << "Название парковки: " << this->name << endl;
        cout << "Занятость парковки: " << this->size << " машины" << endl;
        cout << "Цена парковки: " << this->price << " долларов" << endl;

        if (size == 0) 
         {
            cout << "Парковка пустая!" << endl;
        }

        else
        {
            cout << "Машины:" << endl;
            for (int i = 0; i < size; i++)
            {
                cars[i]->carInfo();
            }
            
        }
    }

};

//Parking::Parking(string name, int capacity, float price) {//Вынос метода за пределы класса 
//    this->name = name;
//    this->capacity = capacity;
//    this->price = price;
//}

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    const int CARS_SIZE = 100;
    Car** cars = new Car*[CARS_SIZE];
    for (int i = 0; i < CARS_SIZE; i++)
    {
        cars[i] = new Car(MODELS[random(0, 10)], COLORS[random(0, 6)]);
    }

    //for (int i = 0; i < CARS_SIZE; i++)
    //{
    //    cars[i]->carInfo();
    //}

    Parking pr1("Union", 100, 8);
    pr1.addCar(cars[0]);
    pr1.addCar(cars[52]);
    pr1.addCar(cars[28]);
    pr1.addCar(cars[9]);
    pr1.parkInfo();
    pr1.deleteCar("A009AA");
    pr1.parkInfo();
}
