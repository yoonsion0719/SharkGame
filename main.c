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
	
	//1.초기화/플레이어 이름
	int board_initBoard(void);
	
	
	//2.반복문 (플레이어 턴을 도는)
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
		//2.1. 플레이어 상태 출력
		
		//2.2. 주사위 던지기
		
		//2.3. 이동 
		
		//2.4. 동전 줍기
		
		//2.5. 다음턴으로 가기
		
		//2.6 상어의 동작 (모든 플레이어가 턴을 돎) 
		//if (조건 모든 플레이러가 턴을 돎)
			//상어동작
	} while ();
	//3. 정리(승자 계산, 출력) 
	
	
	return 0;
}
