//【问题描述】编写程序：根据用户输入的球的半径值，分别计算球的表面积、体积和质量，并输出计算结果。其中，假设用户输入的球的半径的单位是米，球的密度为7.8kg/m3，π的值使用3.14即可。

//【输入形式】

//一个实数。

//【输出形式】

//3个实数，每行一个。

//【样例输入】

//请输入球的半径：1.5

//【样例输出】

//表面积：28.26

//体积：14.13

//质量：110.214

#include <iostream>
using namespace std;
int main()
{
  double PI = 3.14;
  double density = 7.8;
  double r;
  cout <<"请输入球的半径：";
  cin >> r;
  double s = 4*PI*r*r;
  double v = (4*PI*r*r*r)/3.0;
  double m = density*v;
  cout <<"表面积："<< s <<endl;
  cout <<"体积："<< v <<endl;
  cout <<"质量："<< m <<endl;
  return 0;
  
}