//编程实现，用户从键盘输入3个整数，计算并打印这三个数的和、平均值及平均值的四舍五入整数值。（注意:输入的三个整数、它们的和、平均值的四舍五入值用整型变量表示，平均值用双精度变量表示。）

//【输入形式】

//三个整数，中间用空格隔开。

//【输出形式】

//计算结果，整数、实数和整数，分别表示：和、平均值及平均值的四舍五入整数值，分三行输出。

//【样例输入】

//3 6 8

//【样例输出】

//17

//5.66667

//6

#include <iostream>
#include <cmath> //四舍五入要用cmath
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	double avg = sum / 3.0;
	int round_avg = round(avg);
	cout << sum <<endl;
	cout << avg <<endl;
	cout << round_avg <<endl;
	return 0;
}