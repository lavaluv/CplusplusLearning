#include <iostream> 
using namespace std;
/*
	һ��������̳������еĻ��෽����������������⣺
	1.����Ĺ��캯�������������Ϳ������캯����
	2.����������������
	3.�������Ԫ������

	ͬһ�������е�ĳ�������������ָ��������壬�ֱ��Ϊ�������غ���������ء�
	����������ָһ����֮ǰ�Ѿ��ڸ����������������ĺ����򷽷�������ͬ���Ƶ��������������ǵĲ����б�Ͷ��壨ʵ�֣�����ͬ��
	������һ�����غ��������������ʱ��������ͨ������ʹ�õĲ��������붨���еĲ������ͽ��бȽϣ�����ѡ������ʵĶ��塣
	ѡ������ʵ����غ���������������Ĺ��̣���Ϊ���ؾ��ߡ�
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