#include<stdio.h>
int main() {
	char c1, c2;//如果定义的是整型printf会随机输出一个数字所以
	               //int和char是不等价的
	c1 = getchar();
	c2 = getchar();
	printf("%c%c\n",c1,c2);
	putchar(c1);
	putchar(c2);
	return 0;
}