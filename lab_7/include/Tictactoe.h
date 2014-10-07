#ifndef TICTACTOE_H
#define TICTACTOE_H


class TicTacToe
{
private:
    enum Status { WIN, DRAW, CONTINUE };
    int board[ 3 ][ 3 ];
public:
    TicTacToe();
    void makeNewMove( void );
    void printBoard( void );
    bool validMove( int, int );
    bool xoMove( int );
    Status gameStatus( void );
};


#endif // TICTACTOE_H
