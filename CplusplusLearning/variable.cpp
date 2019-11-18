#include <iostream>
using namespace std;
/*
	全局变量会被同名局部变量替代

	数值类型int等变量初始化为0
	字符char初始化为'\0'
	指针初始化为NULL
*/
int Int = 10;
void variable() {
	int Int = 5;
	cout << Int;
}