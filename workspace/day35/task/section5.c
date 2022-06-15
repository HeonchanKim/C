#include<stdio.h>

void main() {
	
	//2번
	//(1) >
	//(2) ==
	//(3) <

	//3번
	int kor = 86, eng = 75, math = 88, soc = 60, sci = 96;
	int total = kor + eng + math + soc + sci;
	double average = (double)total / 5;
	printf("평균 : %.2f점\n", average);

	//4번
	int num = 5;
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", ++num);

}