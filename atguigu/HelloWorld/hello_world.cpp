#include<iostream>
using namespace std;

//�w�q�@���w����
void welcome() {
	//���ܨϥΪ̿�J�m�W
	cout << "�п�J�m�W�G" << endl;

	//�Τ@���ܼƨ��x�s��L��J���H��
	string name;

	cin >> name;

	//��X�@�y�w��H��
	cout << "Hello, " << name << endl;
}

/*
* �D���
* ��XHello World
*/
int main() {

	//��X�@��T��
	cout << "Hello World!" << endl;

	//�ե�welcome���
	welcome();

	//������L��J
	cin.get();
	cin.get();

}