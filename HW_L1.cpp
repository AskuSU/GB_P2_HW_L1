#include<iostream>
#include<windows.h>
#include"MyLib.h"
#include"Task1.h"
#include"Task2.h"
#include"Task3.h"

using namespace std;
using namespace myLib;

void Task1()
{
	cout << "Возведение вещественного числа в вещественную степень:" << endl << endl;
	cout << "Введите основание: x = ";
	double x = GetUserInput<double>(true);
	cout << "Введите степень: y = ";
	double y = GetUserInput<double>(true);
	Power result;
	result.Set(x, y);
	cout << x <<" ^ " << y << " = " << result.Calculate() << endl;
}

void Task2()
{
	/*cout << "Проверка принадлежности введеного числа интервалу:" << endl << endl;
	cout << "Введите положительное число: ";
	unsigned short a = GetUserInput(true);
	const unsigned short end = 100;
	if (checkNumberInInterval(a, end)) cout << "true";
	else cout << "false";
	cout << endl;*/
}

void Task3()
{
#define SIZE 6

	/*cout << "Сортировка пользовательского массива:" << endl << endl;
	int* arrPtr = createIntArr(SIZE);
	initArr(arrPtr, SIZE);
	bubbleSort(arrPtr, SIZE);
	PrintArr(SIZE, false, arrPtr);*/
}


int main()
{
	setlocale(LC_ALL, "RU");
	//srand(time(0));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short taskNumber = 0;
	while (true)
	{
		taskNumber = getUserSelectedTask(3);
		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		}
		cout << endl;
	}
}