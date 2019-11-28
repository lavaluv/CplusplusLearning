#include <iostream>
using namespace std;
/*
	�ַ���ʵ������ʹ�� null �ַ� '\0' ��ֹ��һά�ַ����顣
	��ˣ�һ���� null ��β���ַ���������������ַ������ַ���

	���������� null ��β���ַ����ĺ���:
	strcpy(s1,s2):��s2���Ƶ�s1
	strcat(s1,s2):��s2���ӵ�s1��ĩβ
	strlen(s1):����s1�ĳ���
	strcmp(s1,s2):�Ƚ�s1��s2
	strchr(s1,ch):����ָ��ch��s1��һ�γ��ֵ�λ�õ�ָ��
	strstr(s1,s2):����ָ��s2��s1��һ�γ��ֵ�λ�õ�ָ��
*/
void strings() {
	char a[] = "hello";
	char b[6] = { 'h','e','l','l','o','\0' };
	cout << a << endl;
	cout << b << endl;
	char* c = new char(strlen(a)+strlen(b));
	strcpy(c, a);
	cout << "strcpy(c,b): " << c << endl;
	cout << "strlen(c): " << strlen(c) << endl;
	strcat(c, b);
	cout << "strcat(c,b): " << c << endl;
	cout << "strlen(c): " << strlen(c) << endl;
	cout << "strcmp(a,b): " << strcmp(a, b) << endl;
	cout << "strcmp(a,c): " << strcmp(a, c) << endl;
	cout << "strchr(c,'e')" << strchr(c, 'e') << endl;
	cout << "strstr(c,\"llo\")" << strstr(c, "llo") << endl;
}