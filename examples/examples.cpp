// Main source https://github.com/AnthonyCalandra/modern-cpp-features

#include "stdafx.h"
#include <iostream>
#include <memory>
#include <vector>

template<typename T>
decltype(auto) get_element(T &array, size_t index)
{
	return array[index];
};


int main()
{

	std::vector<int> vec(2);

	get_element(vec, 0) = 4;

	std::cout << vec[0] << std::endl;

	return 0;
}

#if 0
#include <typeinfo>       // operator typeid
// C++14 auto return type
auto hello()
{
	//return "hello";
}

// C++14 relaxed expr
const int k = 1024;
constexpr int length()
{
	return k * 4;
}
char buffer[length()];

// C++14 Template constants

#if 0
template<typename T>
constexpr T pi = T(3.141592653589793238462643383);
template<>
constexpr const char* pi<const char*> = "pi";
#endif

// C++14 Generic lambdas
auto add = [](auto x, auto y) {return x + y; };

struct S
{
	int a;
	char *b;
};

int main()
{
	std::cout << "type of hello: " << typeid(hello).name() << std::endl;

	//std::tuple<std::string, std::string, int> t("foo", "bar", 7);
	//int i = std::get<int>(t); 

	// i == 7
	//auto str = "hello world"s;
	//if constexpr (true)
	//std::cout << add("1"s,"2") << std::endl;
	return 0;
}

#endif