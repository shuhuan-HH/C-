#include<stdio.h>
#include<math.h>


/*循环结构也可以
{
     float p =1.0f;
	 float r =0.07;
	 int n=10;
	 for(int i=10;i<n;i++)
	 {
	 p=p*(1+r);
	 }
}
*/
int main()
{
	double p;
	p = pow(1 + 0.07, 10);
	printf("%lf", p);
}
//这里是用数学函数pow解决