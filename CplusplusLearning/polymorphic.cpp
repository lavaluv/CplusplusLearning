#include <iostream>
using namespace std;
/*
	普通成员函数和纯虚函数不会占用对象空间的大小，也不会影响sizeof的结果。
	而如果是虚函数就会占用空间了。
	c++的类所有的虚函数都是由一个虚函数指针所管理，它的虚函数被放在别的内存空间中管理。
	而普通函数是由this指针所管理，this指针并不是对象本身的一部分，所以不会影响到sizeof的结果。

	空类的sizeof为1,实例的占位符
	只有一个char的类的大小为1
	对齐规则以最长的变量长度为对齐长度。

	多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数

	虚函数是在基类中使用关键字 virtual 声明的函数。
	在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。
	我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定。
	虚函数可以为private, 并且可以被子类覆盖（因为虚函数表的传递），但子类不能调用父类的private虚函数。虚函数的重载性和它声明的权限无关。

	在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象，
	但是在基类中又不能对虚函数给出有意义的实现，这个时候就会用到纯虚函数。
	声明时= 0 告诉编译器，函数没有主体，是纯虚函数。
	对于纯虚函数，派生类必须给出实现。
	如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。
*/
class Person
{
public:
	Person();
	~Person();
	/*
		如果没有virtual修饰,调用函数 getSex() 被编译器设置为基类中的版本，这就是所谓的静态多态，或静态链接
		函数调用在程序执行前就准备好了。有时候这也被称为早绑定，因为 getSex() 函数在程序编译期间就已经设置好了。
	*/
	virtual void getSex() {
		cout << "Person" << endl;
	};
	virtual void pureVirtual() = 0;
private:
	int sex;
	char i;
};
Person::Person()
{
}

Person::~Person()
{
}
class Man : public Person
{
public:
	Man();
	~Man();
	void getSex() {
		cout << "Man" << endl;
	}
	virtual void pureVirtual() {};
};

Man::Man()
{
}

Man::~Man()
{
}
class Woman:public Person
{
public:
	Woman();
	~Woman();
	void getSex() {
		cout << "Woman" << endl;
	}
	virtual void pureVirtual() {};
};

Woman::Woman()
{
}

Woman::~Woman()
{
}
void poly() {
	cout << sizeof(Person) << endl;
	Person* p;
	Man man;
	Woman woman;
	p = &man;
	p->getSex();
	p = &woman;
	p->getSex();
}