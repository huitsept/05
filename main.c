#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	printf("정수 하나를 입력하시오: ");
	scanf("%i",&i);
	
	if (i>=0)
		printf("절댓값은 %i 입니다.\n", i);
	else 
		printf("절댓값은 %i 입니다.\n", -i);
	
	return 0;
}
