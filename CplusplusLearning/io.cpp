#include <iostream>
using namespace std;
/*
	C++ 的 I/O 发生在流中，流是字节序列。
	如果字节流是从设备（如键盘、磁盘驱动器、网络连接等）流向内存，这叫做输入操作。
	如果字节流是从内存流向设备（如显示屏、打印机、磁盘驱动器、网络连接等），这叫做输出操作。

	<iostream> 该文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
	cout:
	C++ 编译器根据要输出变量的数据类型，选择合适的流插入运算符来显示值。<< 运算符被重载来输出内置类型（整型、浮点型、double 型、字符串和指针）的数据项。
	cin:
	C++ 编译器根据要输入值的数据类型，选择合适的流提取运算符来提取值，并把它存储在给定的变量中。
	cerr:
	cerr 对象附属到标准错误设备，通常也是显示屏，但是 cerr 对象是非缓冲的，且每个流插入到 cerr 都会立即输出。
	clog:
	clog 对象是缓冲的。这意味着每个流插入到 clog 都会先存储在缓冲在，直到缓冲填满或者缓冲区刷新时才会输出。

	<iomanip> 该文件通过所谓的参数化的流操纵器（比如 setw 和 setprecision），来声明对执行标准化 I/O 有用的服务。

	<fstream> 该文件为用户控制的文件处理声明服务。我们将在文件和流的相关章节讨论它的细节。
*/
void io() {
	int size;
	cout << "size is: " << endl;;
	cin >> size;
	char* string = new char[size];
	cout << "string is: " << endl;
	cin >> string;
	cout << "input is: " << string << endl;
}