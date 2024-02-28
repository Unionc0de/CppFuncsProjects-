#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

struct Car//создание структуры
{
	string number;//Параметр 1(поля)
	string color;//Параметр 2
	string model;//Параметр 3
	int power;//Параметр 4
};

struct Garage
{
	string name;
	float price;//Значение по умолчанию
	int capicity;
	int capicityNow = 0;
	Car** allCar = new Car*[0];
};

void showInfoCar(Car* car) {//Вывод параметров структуры
	cout << "Number: " << car->number <<
	"\nColor: " << car->color <<
	"\nModel: " << car->model <<
	"\nPower: " << car->power << endl;
}

void showAllCar(Garage garage) {
	int size = garage.capicityNow;
	cout << "Сейчас в гараже:" << endl;
	for (int i = 1; i < size+1; i++) {
		cout << "Car " << i << ":" << endl;
		showInfoCar(garage.allCar[i-1]);
		cout << endl;
	}
	cout << endl;
	cout << "Всего в гараже " << garage.capicityNow << " машины" << endl;
	cout << "\n\n";
}

Car* createCar(string number, string color, string model, int power) {//Заполнение параметров структуры
	Car* car = new Car;
	car->number = number;//Задаем значения нашим параметрам
	car->color = color;
	car->model = model;
	car->power = power;
	return car;
}

void parkCar(Garage &garage,Car *car) {
	if (garage.capicityNow >= garage.capicity) {//Проверка на заполненность гаража 
		cout << "Парковка заполнена, петляй отсюда";
		return;
	}
	
	for (int i = 0; i < garage.capicityNow; i++) {//Проверка на наличие такой же машины
		if (garage.allCar[i]->number == car->number) {
			cout << "Такая машина уже есть!" << endl;
			return;
		}
	}

	Car** buf = new Car * [garage.capicityNow + 1];

	for (int i = 0; i < garage.capicityNow; i++) {
		buf[i] = garage.allCar[i];
	}

	buf[garage.capicityNow] = car;

	delete[] garage.allCar;
	garage.allCar = buf;
	garage.capicityNow++;
}

void deleteCarByNum(Garage& garage, string num) {//удаление машины по ее гос. номеру 
	int index = -1;
	
	if (garage.capicityNow == 0) {
		cout << "Ваш гараж абсолютно пуст!" << endl;
		return;
	}

	for (int i = 0; i < garage.capicityNow; i++) {
		if (garage.allCar[i]->number == num) {
			index = i;
			break;
		}
	}

	if (index != -1) {
		Car** buf = new Car * [garage.capicityNow-1];
		for (int i = 0; i < index; i++) {
			buf[i] = garage.allCar[i];
		}
		for (int i = index; i < garage.capicityNow; i++)
		{
			buf[i] = garage.allCar[i+1];
		}
		delete[] garage.allCar;
		garage.allCar = buf;
		garage.capicityNow--;
	}
	else {
		cout << "Такой машины нет!!!" << endl;
	}

}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	Garage garage1;
	garage1.capicity = 100;
	garage1.name = "Union garage";
	garage1.price = 3.5;

	Car *cr1;
	cr1 = createCar("MPA3b", "Black", "Audi RS6 C8", 650);

	Car* cr2;
	cr2 = createCar("Cl100TOR", "Red", "Honda NSX", 350);

	Car* cr3;
	cr3 = createCar("BURYATINKA", "Grey", "Nissan Silvia S15", 280);

	parkCar(garage1, cr1);
	parkCar(garage1, cr2);
	parkCar(garage1, cr3);
	parkCar(garage1, cr2);
	showAllCar(garage1);
	//deleteCarByNum(garage1, "BURYATINKA");
	/*deleteCarByNum(garage1, "MPA3b");*/
	//deleteCarByNum(garage1, "Cl100TOR");
	cout << endl;
	/*showAllCar(garage1);*/
	


	
}
