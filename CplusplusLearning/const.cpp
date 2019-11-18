#include <iostream>
using namespace std;
/*
	常量类型有整数常量，浮点数常量，布尔常量，字符常量，字符串常量
	使用#define,const定义常量,c++11中#define可用constexpr替代
	浮点数默认精度为双精度double，在末尾加f为float，加L为long double(与double精度一致)
*/
#define INT 123;
constexpr auto UNSINED_INT = 123u;
void constVariable() {
	const long LONG = 0xfeeL;
	const long EIGHT = 077;
	const unsigned long UL = 123ul;
	const long long LL = 123LL;
	const float FLOAT = 3.14f;
	const double DOUBLE = 314E-2;
	const long double LD = 314E-2L;
	bool one = true;
	bool zero = false;
	const string STRING = "t";
	cout << STRING._Equal("t") << STRING._Equal("te");
	const char CHAR = 't';
}