#include <iostream>
using namespace std;
/*
	运算符包括算术运算符，关系运算符，逻辑运算符，位运算符，赋值运算符，杂项运算符

	位运算符包括与&,或|,非~,异或^,左移位<<.右移位>>

	杂项运算符包括：sizeof,三元运算符,逗号运算符,.和->成员运算符,强制转换运算符,&和*指针运算符
*/
void caculator() {
	int a = 12;
	int b = 3;
	cout << "a&b :" << (a & b) << endl;
	cout << "a|b :" << (a | b) << endl;
	cout << "~a :" << (~a) << endl;
	cout << "a^b :" << (a ^ b) << endl;
	cout << "a<<1 :" << (a << 1) << endl;
	cout << "a>>1 :" << (a >> 1) << endl;
}