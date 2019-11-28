#include <iostream>
using namespace std;
/*
	引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。
	一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。

	引用很容易与指针混淆，它们之间有三个主要的不同：
	1.不存在空引用。引用必须连接到一块合法的内存。
	2.一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
	3.引用必须在创建时被初始化。指针可以在任何时间被初始化。

	通过使用引用来替代指针，会使 C++ 程序更容易阅读和维护。C++ 函数可以返回一个引用，方式与返回一个指针类似。
	当函数返回一个引用时，则返回一个指向返回值的隐式指针。这样，函数就可以放在赋值语句的左边。
	当返回一个引用时，要注意被引用的对象不能超出作用域。所以返回一个对局部变量的引用是不合法的，但是，可以返回一个对静态变量的引用。
*/
void testPtr(int* i) {
	cout << "test ptr: " << *i << endl;
}
void testRef(int& i) {
	cout << "test ref: " << i << endl;
}
int& setValue(int index,int a[]) {
	return a[index];
}
void reference() {
	int i = 1;
	int& j = i;
	cout << &i << endl << &j << endl;
	testPtr(&i);
	testRef(i);
	int a[] = { 1,2,3,4 };
	setValue(1, a) = 0;
	for (auto au : a) {
		cout << au << endl;
	}
}