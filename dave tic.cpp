#include <iostream>
#include<windows.h>
#include<string>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

void board()
{
	system("color 97");
	system("color 0c");
	cout << "\n\n\t\t\t\t\t T I C -- T A C -- T O E -- G A M E\n\n";
	cout << "\t\t\t\t\t  Player 1 [X]  -  Player 2 [O]" << endl << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "\t\t\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "\t\t\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "\t\t\t\t\t\t     |     |     " << endl << endl;
}

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}

//void play_again();

int main()
{
bool a = false;
while (a == false)
	{
	
	int player = 1,i,choice;
	char mark;
	//char again;
	do
	{
		board();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout<<"Invalid move ";
			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();
		player++;

	}while(i==-1);

	board();
	if(i==1)
		cout<<"\t\t\t\t==>\a Congratulations Player "<<--player<<" win"<<endl;
	else
		cout<<"==>\aGame draw"<<endl;
	cin.ignore();
	cin.get();

     // play_again();
    char again;
    cout<<"Do you want to play again Y/N :";
	cin>>again;
     if(again == 'Y' || again == 'y')
     {
		square[1] = '1';
		square[2] = '2'; 
		square[3] = '3';
		square[4] = '4';
		square[5] = '5';
		square[6] = '6';
		square[7] = '7';
		square[8] = '8';
		square[9] = '9';
		 
    	a = false;
	 }
     else if(again == 'N' || again == 'n')
    {
    	a = true;
        cout<<"\n\n\tGOOD BYE"<<endl;
    }
    else
    {
        cout<<"\n\n\tINVALID INPUT"<<endl;
    }
 }

return 0;
}

/*
void play_again()
{
    char again;
    cout<<"Do you want to play again Y/N :";
	cin>>again;

    if(again == 'Y' || again == 'y')
    {
       main();

    }
    else if(again == 'N' || again == 'n')
    {
        cout<<"\n\n\tGOOD BYE"<<endl;
    }
    else
        {
         cout<<"\n\n\tINVALID INPUT"<<endl;
        }
}

*/


