#include <iostream>
#include <ctime>
using namespace std;
/*
	C++ 继承了 C 语言用于日期和时间操作的结构和函数。为了使用日期和时间相关的函数和结构，需要在 C++ 程序中引用 <ctime> 头文件。
	struct tm {
		int tm_sec;   // 秒，正常范围从 0 到 59，但允许至 61
		int tm_min;   // 分，范围从 0 到 59
		int tm_hour;  // 小时，范围从 0 到 23
		int tm_mday;  // 一月中的第几天，范围从 1 到 31
		int tm_mon;   // 月，范围从 0 到 11
		int tm_year;  // 自 1900 年起的年数
		int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
		int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
		int tm_isdst; // 夏令时
	}
}
*/
void time() {
	time_t now = time(0);
	cout << "time stamp:" << now << endl;
	char* chNow = ctime(&now);
	cout << "local time: " << chNow << endl;
	//localtime(&now)为当地时间
	tm* gmTime = gmtime(&now);
	chNow = asctime(gmTime);
	cout << "UTC time: " << chNow << endl;
	cout << "year: " << 1900 + gmTime->tm_year << endl;
	cout << "mouth: " << 1 + gmTime->tm_mon << endl;
	cout << "day: " << gmTime->tm_mday << endl;
	cout << "hour: " << gmTime->tm_hour << endl;
}