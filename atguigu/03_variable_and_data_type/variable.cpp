#include<iostream>
#define PI 3.14
using namespace std;

//定義全局變量(會默認初始化)
int number;


int main() {

	//定義變量
	int a = 1, b;
	cout << "a = " << a << endl;
	b = 10;
	cout << "b = " << b << endl;
	b = 25;
	cout << "現在 b = " << b << endl;

	//定義局部變量
	int number = 1;
	cout << "number = " << number << endl;
	cout << "::number = " << ::number << endl;

	//常量
	const float Pi = 3.14;

	//pi = 3.15;

	cout << "PI = " << PI << endl;
	cout << "pi = " << Pi << endl;

	cin.get();
}