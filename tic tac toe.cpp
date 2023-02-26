#include <iostream>
#include <windows.h>
using namespace std;

void displayBoard(char board[]);
bool rangeCorrect(int cell);
bool cellIsEmpty(int cell, char board[]);
void changeTurn(char &turn);
bool three(char turn, char board[]);
bool threeInARow(char turn, char board[]);
bool threeInAColumn(char turn, char board[]);
bool threeInADiagonal(char turn, char board[]);

struct Node
{
   int moveNumber;
   char board[9];
   Node *nextPtr;
};



int main()
 {
	char board[9];
	//initializing board
		board[0] = '1';
		board[1] = '2';
		board[2] = '3';
		board[3] = '4';
		board[4] = '5';
		board[5] = '6';
		board[6] = '7';
		board[7] = '8';
		board[8] = '9';

	Node *head = NULL;   // head of linked list
    Node *tempPtr;

	int moveNumber = 0;
	char turn = 'X';
	int cell = 0;
	bool play_a = true;

	// button to play again
	char p_a;

while (play_a)
{

	while(moveNumber < 9)
    {
    	
        displayBoard(board);
		cout<<"*****************************"<<endl;
		cout << "TURN: "<< turn << " make your move: ";
		cin >> cell;
        system("cls");

		if(rangeCorrect(cell))  //checking if inside the range 1-9
		{
			if(cellIsEmpty(cell-1, board))
            {
				//checking if cell is empty. subtracting 1, because array starts from 0.
				board[cell-1] = turn;//storing the move in the array
				if(three(turn, board))
				{//checking if there are three in a row or column or diagonal
					displayBoard(board);
					cout<<"\n\t\t\t\t\t  ''''''''GAME OVER''''''''   "<<endl;
					cout << "\t\t\t\t\t     player ["<<turn<<"] You win!!" << endl;
					cout<<"\n*****************************"<<endl;
					cout << "\tTo play again press Y" << endl;
					cout << "\tTo exit press N" << endl;
					cin >> p_a;
					if(p_a == 'Y' || p_a == 'y')
					{
						board[0] = '1';
						board[1] = '2';
						board[2] = '3';
						board[3] = '4';
						board[4] = '5';
						board[5] = '6';
						board[6] = '7';
						board[7] = '8';
						board[8] = '9';
						moveNumber = 0;
					}
					else
					{
						return 1;
					}
				}

				tempPtr = new Node;
				// Insert at head of list
				tempPtr->moveNumber = moveNumber;
				for(int i=0;i<9;i++)
                {
					tempPtr->board[i]=board[i];
				}
				tempPtr->nextPtr = head; //the pointer of the node points to the first element of the list
				head = tempPtr; //the head points to the new node just created
				moveNumber++; //preparing for next move.
				changeTurn(turn);//changing the turn to the next player.
			}
			else
			{ //cell was full
				cout << "Sorry...cell "<< cell << " has already been used, try again: " << endl;
			}
		}
		else
		{
			cout << "Sorry...cell "<< cell << " is outside the range 1-9, try again: " << endl;
		}
	  }
	       displayBoard(board);
           cout<<"\n\t\t\t\t\t ''''''''Game Draw''''''''"<<endl;
           cout << "\t\t\t\t\t  To play again press Y" << endl;
           cout << "\t\t\t\t\t  To exit press N" << endl;
					cin >> p_a;
					if(p_a == 'Y' || p_a == 'y')
					{
						board[0] = '1';
						board[1] = '2';
						board[2] = '3';
						board[3] = '4';
						board[4] = '5';
						board[5] = '6';
						board[6] = '7';
						board[7] = '8';
						board[8] = '9';
						moveNumber = 0;
					}
					else
					{
						return 1;
					}
}
	return 1;
}

void displayBoard(char board[]) // function that accept a char array as an argument 
{
    system("color 0c"); // change the color to red 
    cout << "\n\n\t\t\t\t\t T I C -- T A C -- T O E -- G A M E\n\n";
    cout << "\t\t\t\t\t  Player [X]  -  Player [O]" << endl << endl;

    cout << "\t\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t\t  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << endl;
    cout << "\t\t\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t\t  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << endl;
    cout << "\t\t\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t\t  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << endl;
    cout << "\t\t\t\t\t\t     |     |     " << endl << endl;
    /*
	cout << "\t\t\t\t\t\t ___   ___   ___ "<<endl;
	cout << "\t\t\t\t\t\t| "<<board[0]<<" |"<<" "<< "| "<< board[1]<<" |"<<" "<< "| "<< board[2]<<" |"<<endl;
	cout << "\t\t\t\t\t\t|___| |___| |___| "<<endl;
	cout << "\t\t\t\t\t\t ___   ___   ___ "<<endl;
	cout << "\t\t\t\t\t\t| "<<board[3]<<" |"<<" "<< "| "<< board[4]<<" |"<<" "<< "| "<< board[5]<<" |"<<endl;
	cout << "\t\t\t\t\t\t|___| |___| |___| "<<endl;
	cout << "\t\t\t\t\t\t ___   ___   ___ "<<endl;
	cout << "\t\t\t\t\t\t| "<<board[6]<<" |"<<" "<< "| "<< board[7]<<" |"<<" "<< "| "<< board[8]<<" |"<<endl;
	cout << "\t\t\t\t\t\t|___| |___| |___| "<<endl;
	*/
}

bool rangeCorrect(int cell)
{
	if(cell >= 1 && cell <= 9)
		return true;
	else
		return false;
}

//returns true if the cell has already been used
bool cellIsEmpty(int cell, char  board[])
{
	if(board[cell] == 'X' || board[cell] == 'O')
	{
		return false;
	}
	else
	{
		return true;
	}
}

void changeTurn(char &turn)
{
	if(turn == 'X')
	{
		turn = 'O';
	}
	else
	{
		turn = 'X';
	}
}
bool three(char turn, char board[])
{
	if(threeInARow(turn, board) || threeInAColumn(turn,board) || threeInADiagonal(turn,board))
		return true;
	else
		return false;
}
bool threeInARow(char turn, char board[])
{
	if((board[0] == turn && board[1] == turn && board[2] == turn) ||
	   (board[3] == turn && board[4] == turn && board[5] == turn) ||
	   (board[6] == turn && board[7] == turn && board[8] == turn))
	   return true;
	else
		return false;
}
bool threeInAColumn(char turn, char board[])
{
	if((board[0] == turn && board[3] == turn && board[6] == turn) ||
	   (board[1] == turn && board[4] == turn && board[7] == turn) ||
	   (board[2] == turn && board[5] == turn && board[8] == turn))
	   return true;
	else
		return false;
}

bool threeInADiagonal(char turn, char board[])
{
	if((board[0] == turn && board[4] == turn && board[8] == turn) ||
	   (board[2] == turn && board[4] == turn && board[6] == turn))
	   return true;
	else
		return false;
}

