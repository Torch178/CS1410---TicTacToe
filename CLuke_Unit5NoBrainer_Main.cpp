#include <iostream>
#include "TTTGrid.h"
#include <cstdlib>

using std:: cin;
using std::cout;
using std::endl;

int main()
{
    TTTGrid game;
    char choice;

    for(int i = 0; i < 9;i++){
        system("cls");
        //system("clear"); / system("cls"); clears the screen on windows devices so only 1 ttt board/ grid is shown
        cout << "Tic Tac Toe" << endl;
        cout << game;
        cout << endl << game.getCurrentPlayer() << "\'s turn: ";
        cin >> choice;

        game.selectMove(choice);
        if(game.hasWon()){
            cout << game.getCurrentPlayer() << " Wins ";
            break;
        }
        else{
            game.switchPlayer();
        }
    }

    return 0;
}
