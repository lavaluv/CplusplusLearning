#include <iostream>
using namespace std;
/*
	��ͨ��Ա�����ʹ��麯������ռ�ö���ռ�Ĵ�С��Ҳ����Ӱ��sizeof�Ľ����
	��������麯���ͻ�ռ�ÿռ��ˡ�
	c++�������е��麯��������һ���麯��ָ�������������麯�������ڱ���ڴ�ռ��й���
	����ͨ��������thisָ��������thisָ�벢���Ƕ������һ���֣����Բ���Ӱ�쵽sizeof�Ľ����

	�����sizeofΪ1,ʵ����ռλ��
	ֻ��һ��char����Ĵ�СΪ1
	�����������ı�������Ϊ���볤�ȡ�

	��̬��ζ�ŵ��ó�Ա����ʱ������ݵ��ú����Ķ����������ִ�в�ͬ�ĺ���

	�麯�����ڻ�����ʹ�ùؼ��� virtual �����ĺ�����
	�������������¶�������ж�����麯��ʱ������߱�������Ҫ��̬���ӵ��ú�����
	������Ҫ�����ڳ������������Ը��������õĶ���������ѡ����õĺ��������ֲ�������Ϊ��̬���ӣ�����ڰ󶨡�
	�麯������Ϊprivate, ���ҿ��Ա����า�ǣ���Ϊ�麯����Ĵ��ݣ��������಻�ܵ��ø����private�麯�����麯���������Ժ���������Ȩ���޹ء�

	�ڻ����ж����麯�����Ա��������������¶���ú������õ������ڶ���
	�����ڻ������ֲ��ܶ��麯�������������ʵ�֣����ʱ��ͻ��õ����麯����
	����ʱ= 0 ���߱�����������û�����壬�Ǵ��麯����
	���ڴ��麯����������������ʵ�֡�
	�������������һ������������Ϊ���麯�������������ǳ����ࡣ
*/
class Person
{
public:
	Person();
	~Person();
	/*
		���û��virtual����,���ú��� getSex() ������������Ϊ�����еİ汾���������ν�ľ�̬��̬����̬����
		���������ڳ���ִ��ǰ��׼�����ˡ���ʱ����Ҳ����Ϊ��󶨣���Ϊ getSex() �����ڳ�������ڼ���Ѿ����ú��ˡ�
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