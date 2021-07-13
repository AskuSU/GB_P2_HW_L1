#include "Task2.h"

using namespace std;

void RGBA::print()
{
	cout << "Значения каналов:" << endl;
	cout << "R = " << static_cast<int>(m_red) << endl;
	cout << "G = " << static_cast<int>(m_green) << endl;
	cout << "B = " << static_cast<int>(m_blue) << endl;
	cout << "Alpha = " << static_cast<int>(m_alpha) << endl;
}
