#include<iostream>
#define PI 3.14
using namespace std;

//�w�q�����ܶq(�|�q�{��l��)
int number;


int main() {

	//�w�q�ܶq
	int a = 1, b;
	cout << "a = " << a << endl;
	b = 10;
	cout << "b = " << b << endl;
	b = 25;
	cout << "�{�b b = " << b << endl;

	//�w�q�����ܶq
	int number = 1;
	cout << "number = " << number << endl;
	cout << "::number = " << ::number << endl;

	//�`�q
	const float Pi = 3.14;

	//pi = 3.15;

	cout << "PI = " << PI << endl;
	cout << "pi = " << Pi << endl;

	cin.get();
}