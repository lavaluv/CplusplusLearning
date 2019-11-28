#include <iostream>
#include <ctime>
using namespace std;
/*
	C++ �̳��� C �����������ں�ʱ������Ľṹ�ͺ�����Ϊ��ʹ�����ں�ʱ����صĺ����ͽṹ����Ҫ�� C++ ���������� <ctime> ͷ�ļ���
	struct tm {
		int tm_sec;   // �룬������Χ�� 0 �� 59���������� 61
		int tm_min;   // �֣���Χ�� 0 �� 59
		int tm_hour;  // Сʱ����Χ�� 0 �� 23
		int tm_mday;  // һ���еĵڼ��죬��Χ�� 1 �� 31
		int tm_mon;   // �£���Χ�� 0 �� 11
		int tm_year;  // �� 1900 ���������
		int tm_wday;  // һ���еĵڼ��죬��Χ�� 0 �� 6��������������
		int tm_yday;  // һ���еĵڼ��죬��Χ�� 0 �� 365���� 1 �� 1 ������
		int tm_isdst; // ����ʱ
	}
}
*/
void time() {
	time_t now = time(0);
	cout << "time stamp:" << now << endl;
	char* chNow = ctime(&now);
	cout << "local time: " << chNow << endl;
	//localtime(&now)Ϊ����ʱ��
	tm* gmTime = gmtime(&now);
	chNow = asctime(gmTime);
	cout << "UTC time: " << chNow << endl;
	cout << "year: " << 1900 + gmTime->tm_year << endl;
	cout << "mouth: " << 1 + gmTime->tm_mon << endl;
	cout << "day: " << gmTime->tm_mday << endl;
	cout << "hour: " << gmTime->tm_hour << endl;
}