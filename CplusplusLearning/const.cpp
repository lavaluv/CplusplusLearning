#include <iostream>
using namespace std;
/*
	�������������������������������������������ַ��������ַ�������
	ʹ��#define,const���峣��,c++11��#define����constexpr���
	������Ĭ�Ͼ���Ϊ˫����double����ĩβ��fΪfloat����LΪlong double(��double����һ��)
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