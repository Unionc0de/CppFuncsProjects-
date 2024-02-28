#include <iostream>
#include <fstream> //Библиотека для чтения файлов 
#include <string>//библиотека для getline 
#include <windows.h> //Библиотека для вывода русского 
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;	

void showStr(string* arr, int size);

void addStrToEnd(string*& arr, string value, int size);

void readFile(string path, string*& arr, int& size);

void writeFile(string path, string* arr, int size);

void fileCopy(string path);


