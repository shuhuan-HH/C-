#include<stdio.h>
#include<math.h>
int main() {
	float r;
	float h;
	float  PI = 3.14;
	printf("������Բ�İ뾶r��Բ����ĸ�h��");
	scanf_s("%f %f", &r, &h);//scanf��������Ҫ��ȡ��ַ����&
	float L, S, S1, V, V1;
	L = 2 * PI * r;
	S = PI * r * r;
	S1 = 4 * PI * r * r;
	V = 4 / 3 * PI * pow(r, 3);
	V1 = h * PI * pow(r, 2);
	printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n", L, S, S1, V, V1);
	return 0;
}