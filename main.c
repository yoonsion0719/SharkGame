#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

#define MAX_DIE		6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void opening(void)
{
	printf("=========\n");
	printf("*********\n");
	printf("SharkGame\n");
	printf("*********\n");
	printf("=========\n");
	printf("\n");
}

int rolldie(void)
{
	return rand()%MAX_DIE+1;
}

int main(int argc, char *argv[]) {
	
	int pos=0;
	srand( (unsigned)(time(NULL)));
	
	//0.opening
	opening();
	
	//1.�ʱ�ȭ/�÷��̾� �̸�
	int board_initBoard(void);
	
	
	//2.�ݺ��� (�÷��̾� ���� ����)
	do {
		int step = rolldie();
		int coinResult;
		
		board_printBoardStatus(pos);
		
		pos +=step;
		printf("");
		coinResult=board_getBoardCoin(pos);
		
		printf("press any key to continue:");
		scanf("%d", &c);
		fflush(stdin);
		//2.1. �÷��̾� ���� ���
		
		//2.2. �ֻ��� ������
		
		//2.3. �̵� 
		
		//2.4. ���� �ݱ�
		
		//2.5. ���������� ����
		
		//2.6 ����� ���� (��� �÷��̾ ���� ��) 
		//if (���� ��� �÷��̷��� ���� ��)
			//����
	} while ();
	//3. ����(���� ���, ���) 
	
	
	return 0;
}
