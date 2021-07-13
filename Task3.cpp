#include "Task3.h"

using namespace std;

void Stack::reset()
{
	for (size_t i = 0; i < sizeArray; i++)
	{
		nArray[i] = 0;
	}
	count = 0;
}

bool Stack::push(int element)
{
	if (count < sizeArray)
	{
		nArray[count] = element;
		count++;
		return true;
	}
	else return false;
}

int Stack::pop()
{
	if (count > 0)
	{
		count--;
		int element_L = nArray[count];
		nArray[count] = 0;
		return element_L;
	}
	else
	{
		cout << "Стек пуст!" << endl;
		return 0;
	}
}

void Stack::print()
{
	cout << "(";
	for (size_t i = 0; i < count; i++)
	{
		cout << " " << nArray[i];
	}
	cout << " )" << endl;
}
