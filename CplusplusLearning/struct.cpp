#include <iostream>
using namespace std;
/*
	�ṹ�� C++ ����һ���û��Զ���Ŀ��õ��������ͣ�������洢��ͬ���͵������
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