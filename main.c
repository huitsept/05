#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int sum;
	int count;

	printf("�ڿ���  �ϳ��� �Է��ϼ���: ");
	scanf("%d",&i);
	
	for(count=1;count<=i;count++)

		sum+=count;
	 
	printf("1���� �Է��� ������ ���� %d�Դϴ�.",sum);
	return 0;
}
