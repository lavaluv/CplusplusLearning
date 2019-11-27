#include <iostream>
using namespace std;
/*
	成员函数内调用成员变量不需this,与传入的形参名称不能相同
	创建对象时不需new操作符
	每一个对象都能通过 this 常量指针来访问自己的地址。
	this 指针是所有成员函数的隐含参数。因此，在成员函数内部，它可以用来指向调用对象。
	友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针。

	析构函数：
	类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。
	析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。
	析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。

	访问修饰符：
	一个类可以有多个 public、protected 或 private 标记区域。
	每个标记区域在下一个标记区域开始之前或者在遇到类主体结束右括号之前都是有效的。
	成员和类的默认访问修饰符是 private。
	子类继承父类的成员时，也可以用访问修饰符限定，但访问成员的权限不能扩大
	
	拷贝构造函数：
	拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。
	拷贝构造函数通常用于：
	1.通过使用另一个同类型的对象来初始化新创建的对象。
	2.复制对象把它作为参数传递给函数。
	3.复制对象，并从函数返回这个对象。
	classname (const classname &obj) {
    // 构造函数的主体
	}

	必须定义拷贝构造函数的情况：
	只包含类类型成员或内置类型（但不是指针类型）成员的类，无须显式地定义拷贝构造函数也可以拷贝；
	有的类有一个数据成员是指针，或者是有成员表示在构造函数中分配的其他资源，这两种情况下都必须定义拷贝构造函数。

	友元函数：
	类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
	尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
	友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。

	内联函数：
	C++ 内联函数是通常与类一起使用。
	如果一个函数是内联的，编译器将程序中出现的内联函数的调用表达式用内联函数的函数体进行替换，而对于其他的函数，都是在运行时候才被替代。
	对内联函数进行任何修改，都需要重新编译函数的所有客户端，因为编译器需要重新更换一次所有的代码，否则将会继续使用旧的函数。
	如果想把一个函数定义为内联函数，则需要在函数名前面放置关键字 inline，在调用函数之前需要对函数进行定义。
	如果已定义的函数多于一行，编译器会忽略 inline 限定符。
	在类定义中的定义的函数都是内联函数，即使没有使用 inline 说明符。

	静态成员：
	静态成员在类的所有对象中是共享的。
	如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零。
	我们不能把静态成员的初始化放置在类的定义中，但是可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化
	静态函数只要使用类名加范围解析运算符 :: 就可以访问。
	静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。
	静态成员函数有一个类范围，他们不能访问类的 this 指针。可以使用静态成员函数来判断类的某些对象是否已被创建。
*/
class MyClass
{
public:
	static int count;
	static void getCount() {
		cout << "get count: " << count << endl;
	}
	MyClass();
	MyClass(int);
	MyClass(const MyClass& obj);
	~MyClass();
	int getX();
	friend void testFriend(MyClass obj);
	//定义类内部的函数不需inline
	inline void testInlineFunction() {
		cout << "inline function: " << this->getX() * 2 << endl;
	}
	MyClass* getAddress() {
		return this;
	}

private:
	int *x;
};

MyClass::MyClass()
{
	cout << "constructor" << endl;
	x = new int;
	*x = 10;
	count++;
}
/*
	等同于
	MyClass::MyClass(int a):x(a){}
*/
MyClass::MyClass(int a)
{
	cout << "constructor" << endl;
	x = new int;
	*x = a;
	count++;
}
MyClass::MyClass(const MyClass& obj)
{
	cout << "copy constructor" << endl;
	x = new int;
	*x = *obj.x;
	count++;
}

MyClass::~MyClass()
{
	cout << "destructor" << endl;
	delete x;
	count--;
}
int MyClass::getX()
{
	return *x;
}
void testCopy(MyClass obj) {
	cout << obj.getX() << endl;
}
void testFriend(MyClass obj)
{
	//友元函数直接获取私有变量
	cout << "friend function: " << *obj.x << endl;
}
//初始化静态成员变量
int MyClass::count = 0;
void myClass() {
	//不能用object()调用默认无参构造函数
	MyClass object(5);
	cout << object.getX() << endl;
	//显示调用拷贝构造函数
	MyClass copy(object);
	cout << copy.getX() << endl;
	//隐式调用拷贝构造函数
	testCopy(copy);
	testFriend(copy);
	copy.testInlineFunction();
	cout << "get address: " << object.getAddress() << endl << copy.getAddress() << endl;
	MyClass::getCount();
}
