#include <iostream>
#include <fstream> //Библиотека для чтения файлов 
#include <string>//библиотека для getline 
#include <windows.h> //Библиотека для вывода русского 
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

//Работа с файлами 

void showStr(string* arr,int size) {//Вывод массива
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void addStrToEnd(string* &arr,string value,int size) {//Добавление элемента в конец 
    string* buf = new string[size+1];

    for (int i = 0; i < size; i++)
    {
        buf[i] = arr[i];
    }

    buf[size] = value;

    delete[] arr;
    arr = buf;

}

void readFile(string path, string* &arr, int &size) {
    ifstream in(path); //Создание потока, открытие файла
    if (in.is_open()) {//Проверка, открыт ли файл
        string str;//Переменная для считывания
        while (getline(in, str))//Прохождение по файлу, первый аргумент - поток, второй - переменная куда нужна записать
        {
            addStrToEnd(arr, str, size++);
        }

    }
    else
    {
        cout << "Файл не найден!!!!!!!!!!!!!";
    }

    in.close();//Закрытие файла
}

int main()
{
    setlocale(LC_ALL, "rus");
    //SetConsoleCP(1251);//Вывод русского в консоль
    //SetConsoleOutputCP(1251);//Вывод русского в консоль
    srand(time(NULL));


    //char a[] = {'h','e','l','l','\0'};//Не забывать про \0
    //char b[] = "Hello!";// Несколько символов в "". Длинна будет на 1 больше, чем количество символов из-за /0 (терминального нуля) 
    //cout << a;
    // ------------------------------------------
    //string a = "hello";//Класс стринг
    //cout << a;
    //a += 'd';//Добавление чара к стрингу 
    //cout << endl << a;
    //for (int i = 0; i < a.length(); i++) // Вывод стринг через цикл 
    //{
    //    cout << a[i];
    //}
    // ------------------------------------------

    /*string* stringArray = new string[0];
    int arraySize = 0;

    readFile("file.txt", stringArray, arraySize);
    showStr(stringArray, arraySize);*/

    ofstream out ("hello.txt");//ОТкрытие файла на запись 
    //ofstream out("hello.txt", ios:: app);//Открытие на дозапись 
    if (out.is_open()) {
        for (int i = 0; i < 4; i++)
        {
        out << "ЛЕША КОТИК"<<endl;
        }
    }

    out.close();
}
