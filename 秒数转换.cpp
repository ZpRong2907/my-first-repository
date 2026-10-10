//编写程序，将用户输入的总秒数zongm转换成小时、分钟、秒来表示。

//【输入形式】

//一个正整数。

//【输出形式】

//3个整数。

//【样例输入】

//请输入总秒数：7278

//【样例输出】

//2小时1分18秒

#include <iostream>
using namespace std;
int main()
{
 int zongm;
 cout << "请输入总秒数：";
 cin >> zongm;
 int h = zongm / 3600;
 int m = zongm / 60 % 60;
 int s = zongm % 60;
 cout << h << "小时"<< m <<"分"<< s <<"秒";
 return 0;	
}