#include <iostream>
using namespace std;
/*

*/
void myArray() {
	//µÈÍ¬ÓÚ{1,2,3,2,3,4}
	int a[2][3] = { {1,2,3},{2,3,4} };
	for (int i = 0; i < 2; i++)
	{
		for (int i : a[i]) {
			cout << i;
		}
		cout << endl;
	}
	for (int i = 0; i < 2; i++)
	{
		int* p = a[i];
		for (int j = 0; j < 3; j++) {
			cout << *(p + j);
		}
		cout << endl;
	}
}