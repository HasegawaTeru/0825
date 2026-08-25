#include <iostream>

//template<class T>T max(T a, T b)
//{
//	return a > b ? a : b;
//};
//
//int  main()
//{
////	int a = max(3, 5);
////	double b = max(2.3, 4.8);
//
//	int a = 10;
//	int b = 20;
//	float c = 10.1;
//	float d = 10.2;
//
//	std::cout << "max: " << max(a, b) << std::endl;
//	std::cout << "max: " << max(c, d) << std::endl;
//}

//template<typename T, std::size_t N>
//class StaticArray{
//	T data[N];
//public:
//	constexpr T& operator[](std::size_t i){ return data[i]; }
//	constexpr const T& operator[](std::size_t i)const { return data[i]; }
//	constexpr std::size_t size() const { return N; }
//};
//
//int main()
//{
//	StaticArray<int, 30> data;
//
//	for (auto i = 0; i < data.size(); ++i)
//	{
//		data[i] = i;
//	}
//
//	std::cout << data[5] << std::endl;
//}

template<typename T>struct IsPointer
{
	static constexpr bool value = false;
};

template <typename U>struct IsPointer<U*>
{
	static constexpr bool value = true;
};

struct NotPointer : IsPointer<int>
{

};

int main()
{
	std::cout << IsPointer<int>::value << std::endl;
	std::cout << IsPointer<int*>::value << std::endl;
	std::cout << IsPointer<float>::value << std::endl;
	std::cout << IsPointer<float*>::value << std::endl;
	std::cout << NotPointer::value << std::endl;
}