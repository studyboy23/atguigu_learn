#include<iostream>
using namespace std;

int main()
{
	//���
	short a = 20;
	cout << "a = " << a << endl;
	cout << "a�����׬��G" << sizeof a << endl;


	int a2 = 20;
	cout << "a2 = " << a2 << endl;
	cout << "a2�����׬��G" << sizeof a2 << endl;

	long a3 = 20;
	cout << "a3 = " << a3 << endl;
	cout << "a3�����׬��G" << sizeof a3 << endl;

	long long a4 = 20;
	cout << "a4 = " << a4 << endl;
	cout << "a4�����׬��G" << sizeof a4 << endl;

	//�L�Ÿ����
	unsigned short s1 = 65536;
	cout << "s1 = " << s1 << endl;

	//�r������
	char c = 65;
	cout << "c = " << c << endl;
	char c2 = c + 1;
	cout << "c+1 = " << c2 << endl;

	//���L����
	bool b1 = true;
	cout << "b1 = " << b1 << endl;
	cout << "b1�����׬��G" << sizeof b1 << endl;

	//�B�I����
	float f = 2.5;
	double d = 3.79e-23;
	cout << "f = " << f << endl;
	cout << "d = " << d << endl;

	//�r���ȱ`�q
	//���
	30;
	036L;
	0x1ELL;

	//�B�I����
	3.14f;
	1.25L;

	//�r������
	'�A';
	'A';
	'2';
	'\'';

	//�r�Ŧ�����
	"ABCDE";

	//��q�r��
	char tc = '\n';
	cout << "tc = " << tc << endl;

	cout << "Hello World!\t\"Hello C++!\"\n \?" << endl;

	//��Ȯɪ��۰������ഫ
	//1. ��ƭȽᵹbool�ܶq
	bool btrans = 25;
	cout << "btrans = " << btrans << endl;

	//2. �Nbool�������Ƚᵹ��ƾ㫬
	short strans = false;
	cout << "strans = " << strans << endl;

	//3. ���I�ƭȽᵹ�������
	int itrans = 3.94;
	cout << "itrans = " << itrans << endl;

	//4. ��ƼƭȽᵹ���I����
	float ftrans = 3;
	cout << "ftrans = " << ftrans << endl;

	//4. ��ȶW�X�㫬�d��
	unsigned short ustrans = 65536;
	cout << "ustrans = " << ustrans << endl;
	strans = 32768;
	cout << "strans = " << strans << endl;



	cin.get();

}