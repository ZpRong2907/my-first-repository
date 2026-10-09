//【问题描述】编写一个程序，将英寸换算为厘米。输入英寸，输出厘米。

//换算关系：1inch=2.54cm 

//程序运行结果如下：

//14

//14inch=35.56cm

//【输入形式】

//一个实数。

//【输出形式】

//换算式,单位为小写英文字母，等号为英文等号，单位和数字之间没有空格，如：

//14inch=35.56cm

//【样例输入】

//14

//【样例输出】

//14inch=35.56cm

#include <iostream>
using namespace std;
int main()
{
    double inch;
    cin >> inch;
    double a = inch * 2.54;
    cout << inch << "inch=" << a << "cm" <<endl;
    return 0;
}
