#include <stdio.h>

int main(void) {
	double f_temp;
	double c_temp;

	printf("ȭ���µ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &f_temp);
	c_temp = 5.0 / 9 * (f_temp - 32);
	printf("�����µ��� %f�Դϴ�.\n", c_temp);

	return 0;
}