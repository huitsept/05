#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int answer=59;
	int trynum=0;
	
	do
	{
		printf("���ڸ� �ϳ� �Է��ϼ���:");
		scanf("%i",&i); 
		trynum++;
		
		if(i<answer)
			printf("���亸�� �۽��ϴ�.\n\n");
		else if(i>answer)
			printf("���亸�� Ů�ϴ�.\n\n");

	}
	while(i!=answer);
	
	printf("�����Դϴ�.\n");
	printf("�õ� Ƚ��: %d",trynum); 
	return 0;
}
