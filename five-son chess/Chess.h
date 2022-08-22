#pragma once

struct ChessPos {				//λ��
	int row;
	int col;
};

typedef enum {
	CHESS_WHITE = -1,			//����
	CHESS_BLACK = 1				//����
}chess_kind_t;

class Chess
{
public:
	void init();
	bool clockBoard(int x, int y, ChessPos* pos);
	void ChessDown(ChessPos *pos, int val);		//����λ�ü���ɫ
	int getGradeSize();			//��ȡ���̴�С
	bool checkOver();
};

