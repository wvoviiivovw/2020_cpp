#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>



void SetTime(int& y, int& m, int& t)
{
	time_t ptr = time(0);
	tm* ptm = localtime(&ptr);
	y = ptm->tm_year + 1900;
	m = ptm->tm_mon + 1;
	t = ptm->tm_mday;
}

int main()
{
	int y, m, t = 0;
	SetTime(y, m, t);
	std::cout << "Day = " << t << std::endl;
	std::cout << "Month = " << m << std::endl;
	std::cout << "Year = " << y << std::endl;
	return 0;
}