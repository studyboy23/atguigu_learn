#include<iostream>
using namespace std;

int main()
{
	//整形
	short a = 20;
	cout << "a = " << a << endl;
	cout << "a的長度為：" << sizeof a << endl;


	int a2 = 20;
	cout << "a2 = " << a2 << endl;
	cout << "a2的長度為：" << sizeof a2 << endl;

	long a3 = 20;
	cout << "a3 = " << a3 << endl;
	cout << "a3的長度為：" << sizeof a3 << endl;

	long long a4 = 20;
	cout << "a4 = " << a4 << endl;
	cout << "a4的長度為：" << sizeof a4 << endl;

	//無符號整形
	unsigned short s1 = 65536;
	cout << "s1 = " << s1 << endl;

	//字符類型
	char c = 65;
	cout << "c = " << c << endl;
	char c2 = c + 1;
	cout << "c+1 = " << c2 << endl;

	//布林類型
	bool b1 = true;
	cout << "b1 = " << b1 << endl;
	cout << "b1的長度為：" << sizeof b1 << endl;

	//浮點類型
	float f = 2.5;
	double d = 3.79e-23;
	cout << "f = " << f << endl;
	cout << "d = " << d << endl;

	//字面值常量
	//整形
	30;
	036L;
	0x1ELL;

	//浮點類型
	3.14f;
	1.25L;

	//字符類型
	'，';
	'A';
	'2';
	'\'';

	//字符串類型
	"ABCDE";

	//轉義字符
	char tc = '\n';
	cout << "tc = " << tc << endl;

	cout << "Hello World!\t\"Hello C++!\"\n \?" << endl;

	//賦值時的自動類型轉換
	//1. 整數值賦給bool變量
	bool btrans = 25;
	cout << "btrans = " << btrans << endl;

	//2. 將bool類型的值賦給算數整型
	short strans = false;
	cout << "strans = " << strans << endl;

	//3. 符點數值賦給整數類型
	int itrans = 3.94;
	cout << "itrans = " << itrans << endl;

	//4. 整數數值賦給符點類型
	float ftrans = 3;
	cout << "ftrans = " << ftrans << endl;

	//4. 賦值超出整型範圍
	unsigned short ustrans = 65536;
	cout << "ustrans = " << ustrans << endl;
	strans = 32768;
	cout << "strans = " << strans << endl;



	cin.get();

}