#define N_BOARD		15

#define BOARDSTATUS_OK		1
#define BOARDSTATUS_NOK		0

#define N_COINPOS		14
#define MAX_COIN		4

#define N_PLAYER		4
#define PLAYERSTATUS_LIVE		0
#define PLAYERSTATUS_DIE		1
#define PLAYERSTATUS_END		2

#define MAX_CHARNAME		200
#define MAX_DIE		6


int board_initBoard(void);
int board_getBoardStatus(int pos);

int board_getShartPosition(void);
int board_stepShark(void);

int board_getBoardCoin(int pos);

void board_printBoardStatus(void);


