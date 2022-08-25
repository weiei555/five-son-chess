#include<iostream>
#include"ChessGame.h"


int main(void)
{
	Man man;
	AI ai;
	Chess chess;
	ChessGame game(&man, &ai, &chess);
	
	game.play();
	return 0;

}