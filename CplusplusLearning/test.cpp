#include <iostream>
using namespace std;
/*
	c++的break不可用于跳出外层循环,可用goto或设置跳出变量来跳出外层循环
*/
extern void dataFormat();
extern void variable();
extern void constVariable();
extern void storage();
extern void caculator();
extern void function();
extern void myClass();
int main() {
	myClass();
}