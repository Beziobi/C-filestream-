#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 5;
int moves = 0;

void start_of_game(){
    cout << "*** Welcome to Sliding Puzzle Game ***"<<endl;
    cout << "--------------------------------------"<<endl<<endl;
}

void initialize_Board(int Board[SIZE][SIZE]){
    int a = 0;
    int temp = 0;
    int random_roll = 0;
    int random_column = 0;
    for(int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            Board[i][j] = a;
            a++;
        }
    }

    for(int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            random_roll = rand() % 5;
            random_column = rand() % 5;
            temp = Board[i][j];
            Board[i][j] = Board[random_roll][random_column];
            Board[random_roll][random_column] = temp;
        }
    }
}

void display_the_board(int Board[SIZE][SIZE]){
    cout << "*** Current Board ***"<<endl;
    cout << "zero(0) is the open spot"<<endl;
    cout <<endl;

    cout << "      1    2    3    4    5|"<<endl;
    cout << "-------------------------------------"<<endl;
    for(int i = 0; i < SIZE; i++){
        cout << i + 1 << " |";
        for (int j = 0; j < SIZE; j++){
            cout << std::setw(4)<< Board[i][j] << "|";
        }
        cout <<endl;
        cout << "-------------------------------------" <<endl;
    }
}

void get_user_input(string& input, int& column, int& roll){
    cout << "*** Enter piece to move (use %% to give up): "<<endl;
    cin >> input;

    roll = (int)input[0] - 48;
    column = (int)input[1] - 48;
}

bool valid_input(string input, int column, int roll){

    if(input.length() == 2){
        if(input == "%%" || input == "$$"){
            return true;
        }

        else if(column > 0 && column < 6 && roll > 0 && roll < 6){
            return true;
        }
    }
    return false;
}

bool have_valid_move(int column, int roll, int Board[SIZE][SIZE]){

    if(Board[roll][column - 1] == 0 || Board[roll - 2][column - 1] == 0 || Board[roll - 1][column] == 0 || Board[roll - 1][column - 2] == 0){
        return true;
    }
    else{
        return false;
    }
}
void swap(int& a, int& b){
    int temp = b;
    b = a;
    a = temp;
}
void move_number(int column, int roll, int Board[SIZE][SIZE]){
    if(Board[roll][column - 1] == 0){
        swap(Board[roll][column - 1], Board[roll - 1][column - 1]);
        moves++;
    }
    else if(Board[roll - 2][column - 1] == 0){
        swap(Board[roll - 2][column - 1], Board[roll - 1][column - 1]);
        moves++;
    }
    else if(Board[roll - 1][column] == 0){
        swap(Board[roll - 1][column], Board[roll - 1][column - 1]);
        moves++;
    }
    else{
        swap(Board[roll - 1][column - 2], Board[roll - 1][column - 1]);
        moves++;
    }
}

void one_step_before_complete(int Board[SIZE][SIZE]){
    int temp = 1;
    for(int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            Board[i][j] = temp;
            temp++;
        }
    }
    Board[4][4] = Board[4][3];
    Board[4][3] = 0;
}

bool complete(int Board[SIZE][SIZE]){

    int temp = 1;
    for(int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if(temp == 25){
                temp = 0;
            }
            if(Board[i][j] != temp){
                return false;
            }
            temp++;
        }
    }
    return true;
}

void congraulations(){
    cout << "*** Congratulations - you complete the puzzle successfully with " << moves << " move(s) ***"<<endl;
}

void end_of_game(){
    cout << "*** End of Game - Thanks for playing!!!"<<endl;
}

int main(){
    srand(time(nullptr));

    start_of_game();

    int Board[SIZE][SIZE];
    string input;
    int column = 0;
    int roll = 0;

    initialize_Board(Board);

    while(!complete(Board)){

        display_the_board(Board);
        get_user_input(input, column, roll);

        if(valid_input(input, column, roll)){
            if(roll > 0 && roll < 6 && column > 0 && column < 6){
                if(have_valid_move(column, roll, Board)){
                    move_number(column, roll, Board);
                }
                else{
                    cout << "*** Invalid Move - cannot make this move!"<<endl;
                };
            }

            else if(input == "%%"){
                break;
            }

            else {
                one_step_before_complete(Board);
                display_the_board(Board);
            }
        }

        else{
            cout << "** Your move is invalid.  Retry! **"<<endl<<endl;
        }
    }
    if(complete(Board)){
        display_the_board(Board);
        congraulations();
    }
    end_of_game();
    return 0;

}
