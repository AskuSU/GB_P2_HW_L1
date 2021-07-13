#pragma once
#include<iostream>


class Stack
{
public:
	Stack() = default;

	void reset();
	bool push(int element);
	int pop();
	void print();

private:
	static const size_t sizeArray = 10;
	int nArray[sizeArray]{};
	size_t count{ 0 };
};