#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int answer=59;
	int trynum=0;
	
	do
	{
		printf("숫자를 하나 입력하세요:");
		scanf("%i",&i); 
		trynum++;
		
		if(i<answer)
			printf("정답보다 작습니다.\n\n");
		else if(i>answer)
			printf("정답보다 큽니다.\n\n");

	}
	while(i!=answer);
	
	printf("정답입니다.\n");
	printf("시도 횟수: %d",trynum); 
	return 0;
}
