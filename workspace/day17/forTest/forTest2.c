#include<stdio.h>

void main() {
	//1~100���
	/*for (int i = 0; i < 100; i++) {
		printf("%d\n", i + 1);
	}*/

	//100~1���� ���
	/*for (int i = 100; i > 0; i--) {
		printf("%d\n",i);
	}*/

	//1~100���� �� ¦���� ���
	/*for (int i = 0; i < 50; i++) {
		printf("%d\n", (i + 1) * 2);
	}*/

	//1~10���� �� �� ���
	/*int total = 0;
	for (int i = 0; i < 10; i++) {
		total += i + 1;
	}
	printf("%d\n", total);*/

	//1~n������ �� ���
	/*char* msg = "1~n�������� \nnum : ";
	int end = 0;

	printf("%s", msg);
	scanf_s("%d", &end);

	for (int i = 0; i < end; i++) {
		total += i + 1;
	}
	printf("%d\n", total);*/

	//A~F���� ���
	/*for (int i = 0; i < 6; i++) {
		printf("%c\n", i + 65);
	}*/
	
	//A~F���� �� B�����ϰ� ���
	/*int temp = 0;
	for (int i = 0; i < 5; i++) {
		temp = i;
		if (i > 0) { temp++; }
		printf("%c\n", 65 + temp);
	}*/

	for (int i = 0; i < 5; i++) {
		printf("%c\n", i > 0 ? i + 65 : i + 65);
	}




}