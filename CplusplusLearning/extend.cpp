#include <iostream> 
using namespace std;
/*
	一个派生类继承了所有的基类方法，但下列情况除外：
	1.基类的构造函数、析构函数和拷贝构造函数。
	2.基类的重载运算符。
	3.基类的友元函数。

	同一作用域中的某个函数和运算符指定多个定义，分别称为函数重载和运算符重载。
	重载声明是指一个与之前已经在该作用域内声明过的函数或方法具有相同名称的声明，但是它们的参数列表和定义（实现）不相同。
	当调用一个重载函数或重载运算符时，编译器通过把所使用的参数类型与定义中的参数类型进行比较，决定选用最合适的定义。
	选择最合适的重载函数或重载运算符的过程，称为重载决策。
*/
class Father
{
public:
	Father();
	~Father();
	Father(const Father& obj) {
		cout << "copy constructor" << endl;
		x = obj.x;
		publicValue = obj.publicValue;
	}
	int publicValue;
	Father(int in) {
		cout << "father constructor" << endl;
		x = in;
		publicValue = in;
	}
private:
	int x;
};

Father::Father()
{
	cout << "father constructor" << endl;
}

Father::~Father()
{
	cout << "father destructor" << endl;
}
class Son : public Father
{
public:
	Son();
	~Son();
	Son(int in) {
		cout << "son constructor" << endl;
		y = in;
		publicValue = in;
	}
	Son(Father f) {
		cout << "son constructor" << endl;
		y = f.publicValue;
		publicValue = f.publicValue;
	}
private:
	int y;
};

Son::Son()
{
	cout << "son constructor" << endl;
}

Son::~Son()
{
	cout << "son destructor" << endl;
}
void extend() {
	Father father(1);
	Son son = father;
	cout << son.publicValue << endl;
}