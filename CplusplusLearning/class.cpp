#include <iostream>
using namespace std;
/*
	成员函数内调用成员变量不需this,与传入的形参名称不能相同
	创建对象时不需new操作符

	类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。
	析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。
	析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。

	一个类可以有多个 public、protected 或 private 标记区域。
	每个标记区域在下一个标记区域开始之前或者在遇到类主体结束右括号之前都是有效的。
	成员和类的默认访问修饰符是 private。
*/
class MyClass
{
public:
	MyClass();
	MyClass(int);
	~MyClass();
	int getX();

private:
	int x;
};

MyClass::MyClass()
{
	cout << "constructor" << endl;
	x = 10;
}
/*
	等同于
	MyClass::MyClass(int a):x(a){}
*/
MyClass::MyClass(int a)
{
	cout << "constructor" << endl;
	x = a;
}

MyClass::~MyClass()
{
	cout << "destructor" << endl;
}
int MyClass::getX()
{
	return x;
}
void myClass() {
	MyClass object;
	cout << object.getX() << endl;
}