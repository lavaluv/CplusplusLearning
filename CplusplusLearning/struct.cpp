#include <iostream>
using namespace std;
/*
	结构是 C++ 中另一种用户自定义的可用的数据类型，它允许存储不同类型的数据项。
*/
struct MyStruct
{
	int intValue;
	string strings;
};
typedef struct MyStruct* msPtr;
void structs() {
	MyStruct s;
	s.intValue = 1;
	s.strings = "hello";
	cout << "int value: " << s.intValue << " string value: " << s.strings << endl;
	msPtr sPtr = &s;
	cout << "int value: " << sPtr->intValue << " string value: " << sPtr->strings << endl;
}