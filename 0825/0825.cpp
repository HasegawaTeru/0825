#include <iostream>

template<class T>T max(T a, T b)
{
	return a > b ? a : b;
};

int  main()
{
//	int a = max(3, 5);
//	double b = max(2.3, 4.8);

	int a = 10;
	int b = 20;
	float c = 10.1;
	float d = 10.2;

	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "max: " << max(c, d) << std::endl;
}