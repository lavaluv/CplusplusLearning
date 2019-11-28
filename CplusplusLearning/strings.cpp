#include <iostream>
using namespace std;
/*
	字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。
	因此，一个以 null 结尾的字符串，包含了组成字符串的字符。

	用来操作以 null 结尾的字符串的函数:
	strcpy(s1,s2):将s2复制到s1
	strcat(s1,s2):将s2链接到s1的末尾
	strlen(s1):返回s1的长度
	strcmp(s1,s2):比较s1和s2
	strchr(s1,ch):返回指向ch在s1第一次出现的位置的指针
	strstr(s1,s2):返回指向s2在s1第一次出现的位置的指针
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