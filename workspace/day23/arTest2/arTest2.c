#include<stdio.h>

void main() {
	//1~100���� �迭�� ���� �� Ȧ���� ���
	/*int arData[100] = { 0, };

	for (int i = 0; i < 100; i++) {
		arData[i] = i + 1;
		if (i % 2 == 1) {
			printf("%d\n", arData[i]);
		}
	}*/

	//1~100���� �迭�� ���� �� ¦���� �� ���
	/*int arData[100] = { 0, };
	int total = 0;

	for (int i = 0; i < 100; i++) {
		arData[i] = i + 1;
		if (arData[i] % 2 == 0) {
			total += arData[i];
		}
	}

	printf("%d", total);*/

	//A~F���� �� C �����ϰ� �迭�� ���� �� ���
	//char arData[5] = {' ',};
	////0 1 2 3 4
	////+65
	////A B C D E
	//for (int i = 0; i < 5; i++) {
	//	arData[i] = i > 1 ? 66 + i : 65 + i;
	//	printf("%c ", arData[i]);
	//}

	////5���� ������ �Է¹ް� �ִ밪�� �ּҰ� ���ϱ�
	//int arData[5] = { 0, };

	//int max = 0;
	//int min = 0;

	//for (int i = 0; i < 5; i++) {
	//	printf("%d��° ���� : ", i + 1);
	//	scanf_s("%d", arData + i);
	//}
	//max = arData[0];
	//min = arData[0];

	//for (int i = 1; i < 5; i++) {
	//	if(max < arData[i]) { max = arData[i];}
	//	if (min > arData[i]) { min = arData[i]; }
	//}
	//printf("�ִ밪 : %d\n�ּҰ� : %d", max, min);

	//aBcDeFgHiJkLmNoPqRsTuVwXyZ �迭�� ���

	char arData[26] = { ' ', };
	for (int i = 0; i < 26; i++) {
		arData[i] = i % 2 == 0 ? i + 97 : i + 65;
		printf("%c", arData[i]);
	}

}