#include<iostream>
using namespace std;

//函數聲明
void welcome();



/*
* 主函數
* 輸出Hello World
*/
int main() {

	//輸出一行訊息
	cout << "Hello World!" << endl;

	//調用welcome函數
	welcome();

	//等待鍵盤輸入
	cin.get();
	cin.get();

}