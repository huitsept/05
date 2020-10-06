#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int sum;
	int count;

	printf("자연수  하나를 입력하세요: ");
	scanf("%d",&i);
	
	for(count=1;count<=i;count++)

		sum+=count;
	 
	printf("1부터 입력한 정수의 합은 %d입니다.",sum);
	return 0;
}
