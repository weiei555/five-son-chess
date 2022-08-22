#pragma once

struct ChessPos {				//位置
	int row;
	int col;
};

typedef enum {
	CHESS_WHITE = -1,			//白棋
	CHESS_BLACK = 1				//黑棋
}chess_kind_t;

class Chess
{
public:
	void init();
	bool clockBoard(int x, int y, ChessPos* pos);
	void ChessDown(ChessPos *pos, int val);		//落子位置及颜色
	int getGradeSize();			//获取棋盘大小
	bool checkOver();
};

