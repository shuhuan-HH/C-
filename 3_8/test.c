#include<stdio.h>
int main() {
	char c1, c2;//��������������printf��������һ����������
	               //int��char�ǲ��ȼ۵�
	c1 = getchar();
	c2 = getchar();
	printf("%c%c\n",c1,c2);
	putchar(c1);
	putchar(c2);
	return 0;
}