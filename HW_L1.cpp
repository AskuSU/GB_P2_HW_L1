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
	cout << "Работа с классом RGBA:" << endl << endl;
	RGBA myRgba;
	cout << "Создали экземпляр класса с не параметризованным конструктором, вызвали метод print()" << endl;
	myRgba.print();
	cout << "Теперь внесём значения каналов и создадим новый экземпляр с этими параметрами:" << endl;
	cout << "R = ";
	auto r = GetUserInput<unsigned int>(true);
	cout << "G = ";
	auto g = GetUserInput<unsigned int>(true);
	cout << "B = ";
	auto b = GetUserInput<unsigned int>(true);
	cout << "Alpha = ";
	auto a = GetUserInput<unsigned int>(true);
	RGBA newRgba(r, g, b, a);
	newRgba.print();
	cout << endl;
}

void Task3()
{
	cout << "Работа со Stack:" << endl << endl;
	Stack stack;
	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();
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