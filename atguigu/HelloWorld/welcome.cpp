#include<iostream>
using namespace std;

//定義一個歡迎函數
void welcome() {
	//提示使用者輸入姓名
	cout << "請輸入姓名：" << endl;

	//用一個變數來儲存鍵盤輸入的信息
	string name;

	cin >> name;

	//輸出一句歡迎信息
	cout << "Hello, " << name << endl;
}