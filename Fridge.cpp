#include <iostream>
#include <ctime>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

//void addString(string*& arr,string str) {
//	string* buf = new string[size + 1];
//
//	for (int i = 0; i < size; i++)
//	{
//		buf[i] = arr[i];
//	}
//
//	buf[size] = value;
//
//	delete[] arr;
//	arr = buf;
//}
//
//string* split(string str,char symb) {
//	string newStr = "";
//	string* arrayString = new string[0];
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == symb) {
//			addString(arrayString, newStr);
//			newStr = "";
//		}
//		newStr += str[i];
//	}
//}

//Прога бурятский холодильник 
int* parseDate(string date);
struct Product {
	string name;
	float volume;
	int* date;
};

struct Fridge {
	string name = "Burytka";
	float volumeCapacity;//общий размер
	float volume = 0;//на сколько заполнен 
	int size = 0;//Сколько продуктов в текущий момент
	Product** products = new Product * [0];
};

void productInfo(Product product) {//Вывод информации о продукте 
	cout << "Name: " << product.name <<
		"\nVolume: " << product.volume <<
		"\nDate: " 
		<< product.date[0] <<"."
		<< product.date[1] <<"."
		<< product.date[2];
	cout << "------------------" << endl;
}

Product* createProduct(string name, float volume,string date) {//Создание продукта 
	int* arrayDate = parseDate(date);
	
	if (arrayDate == nullptr) {
		return nullptr;
	}

	Product* product = new Product;
	product->name = name;
	product->volume = volume;
	product->date = arrayDate;
	return product;
}

Fridge* createFridge(string name, float capacity) {
	Fridge* fridge = new Fridge();
	fridge->name = name;
	fridge->volumeCapacity = capacity;
	return fridge;
}

int* parseDate(string date) {
	int* dateArray = new int[3];
	string str = " ";
	for (int i = 0,j=0; i < date.length(); i++)
	{
		if (date[i] == '.') {
			dateArray[j++] = stoi(str);//Переделывание стринга в инт
			str = " ";
		}
		else if (i == date.length()-1) {
			str += date[i];
			dateArray[j++] = stoi(str);//Переделывание стринга в инт
			str = " ";
		}
		else {
			str += date[i];
		}
	}
	if (dateArray[0] > 31
		||dateArray[1]>12
		||dateArray[2]> 9999)
	{
		return nullptr;
	}
	return dateArray;
}

void addProduct(Fridge*& fridge,Product *product) {
	
	if (fridge->size >= fridge->volume) {
		cout << "Холодильник заполнен, иди жри, чмо" << endl;
	}

	Product** buf = new Product * [fridge->size + 1];

	for (int i = 0; i < fridge->size; i++)
	{
		buf[i] = fridge->products[i];
	}

	buf[fridge->size] = product;



}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	Product* pr1 = createProduct("Бурятские кокосы", 10.6, "20.12.2024");
	productInfo(*pr1);

	Product* pr2 = createProduct("Бурятские Мандаринки", 1670.6, "10.12.4024");
	productInfo(*pr2);

	Product* pr3 = createProduct("Бурятские Бананчики", 110.6, "20.12.6024");
	productInfo(*pr3);

	
	

		
}
