#include <iostream>
using namespace std;
/*
	��Ա�����ڵ��ó�Ա��������this,�봫����β����Ʋ�����ͬ
	��������ʱ����new������

	����������������һ������ĳ�Ա������������ÿ��ɾ���������Ķ���ʱִ�С�
	���������������������������ȫ��ͬ�ģ�ֻ����ǰ����˸����˺ţ�~����Ϊǰ׺�������᷵���κ�ֵ��Ҳ���ܴ����κβ�����
	�����������������������򣨱���ر��ļ����ͷ��ڴ�ȣ�ǰ�ͷ���Դ��

	һ��������ж�� public��protected �� private �������
	ÿ�������������һ���������ʼ֮ǰ�������������������������֮ǰ������Ч�ġ�
	��Ա�����Ĭ�Ϸ������η��� private��
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
	��ͬ��
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