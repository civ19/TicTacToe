#include <iostream>
#include <cctype>
#include <ctime>
#include <string>
#include <cstdlib>
#include <limits>

using std::cout;
using std::cin;

void start(char board[3][3])
{

    void game(char board[3][3]);
    bool e = true;
    char prompt;

    cout << "Welcome to tic tac toe! Press X to start: ";
    cin >> prompt;
    prompt = toupper(prompt);
    if(prompt != 'X')
    {
        start(board);   
    }

    else
    {
        game(board);
    }

}

void game(char board[3][3])
{
    void p1turn(char board[3][3]);   
    cout << " "<< board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "  " << "\n";
    cout << "___|___|___" << "\n";
    cout << " "<< board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "  " << "\n";
    cout << "___|___|___" <<"\n";
    cout << " "<< board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "  " << "\n";
    cout << "   |   |   ";

    cout << "\n\n";
}

void p1turn(char board[3][3], char p1, char p2)
{

    int r;
    int c;

    void p2turn(char board[3][3], char p1, char p2);
    void checkwinner1(char board[3][3], char p1);

    cout << "Player 1's turn: " << "\n";
    cout << "What row? ";
    cin >> r;
    r--;
    cout << "\n";

    cout << "What column? ";
    cin >> c;
    c--;

    if(board[r][c]!= ' ')
    {
        cout << "Invalid move. Try again:" << "\n\n";
        p1turn(board,p1,p2);
    }
    else 
    {
        board[r][c] = p1;
        cout << "\n";
        game(board);
        checkwinner1(board, p1);
        p2turn(board,p1,p2);

    }
}

void p2turn(char board[3][3], char p1, char p2)
{
    void p1turn(char board[3][3], char p1, char p2);
    void game(char board[3][3]);
    void checkwinner2(char board[3][3], char p2);

    int r;
    int c;

    cout << "Player 2's turn: " << "\n";
    cout << "What row? ";
    cin >> r;
    r--;
    cout << "What column? ";
    cin >> c;
    c--;

    if(board[r][c]!= ' ')
    {
        cout << "Invalid move. Try again." << "\n\n";

        p2turn(board,p1,p2);
    }
    else 
    {
        board[r][c] = p2;
        cout << "\n";
        game(board);
        checkwinner2(board, p2);
        p1turn(board,p1,p2);
    }
    
}

void checkwinner1(char board[3][3], char p1)
{

    if(board[0][0] == p1 && board[0][1] == p1 && board[0][2] == p1) //horizontal 1
    { 
        cout << "\n"; 
        cout << "Winner is player 1!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
       
        
    }
    if(board[1][0] == p1 && board[1][1] == p1 && board[1][2] == p1) //horizontal 2
    {
        cout << "\n"; 
        cout << "Winner is player 1!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();;
        exit(1);
        
    }
    if(board[2][0] == p1 && board[2][1] == p1 && board[2][2] == p1) //horizontal 3
    { 
        cout << "\n"; 
        cout << "Winner is player 1!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
        
    }
    if(board[0][0] == p1 && board[1][0] == p1 && board[2][0] == p1) //vertical 1
    { 
        cout << "\n"; 
        cout << "Winner is player 1!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
       
    }
    if(board[0][1] == p1 && board[1][1] == p1 && board[2][1] == p1) //vertical 2
    {   
        cout << "\n"; 
        cout << "Winner is player 1!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
        
    }
    if(board[0][2] == p1 && board[1][2] == p1 && board[2][2] == p1) //vertical 3
    {  
        cout << "\n"; 
        cout << "Winner is player 1!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
        
    }
    if(board[0][0] == p1 && board[1][1] == p1 && board[2][2] == p1) //diagonal 1
    { 
        cout << "\n"; 
        cout << "Winner is player 1!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
       
    }
    if(board[0][2] == p1 && board[1][1] == p1 && board[2][0] == p1) //diagonal 2
    {  
        cout << "\n"; 
        cout << "Winner is player 1!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
        
    }

}

void checkwinner2(char board[3][3], char p2) //pass board by reference
{
    
    if(board[0][0] == p2 && board[0][1] == p2 && board[0][2] == p2) //horizontal 1
    {
        cout << "\n"; 
        cout << "Winner is player 2!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
      
    }
    if(board[1][0] == p2 && board[1][1] == p2 && board[1][2] == p2) //horizontal 2
    { 
        cout << "\n"; 
        cout << "Winner is player 2!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
      
    }
    if(board[2][0] == p2 && board[2][1] == p2 && board[2][2] == p2) //horizontal 3
    {
        cout << "\n"; 
        cout << "Winner is player 2!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
      
    }
    if(board[0][0] == p2 && board[1][0] == p2 && board[2][0] == p2) //vertical 1
    {
        cout << "\n"; 
        cout << "Winner is player 2!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
       
    }
    if(board[0][1] == p2 && board[1][1] == p2 && board[2][1] == p2) //vertical 2
    {
        cout << "\n"; 
        cout << "Winner is player 2!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
      
    }
    if(board[0][2] == p2 && board[1][2] == p2 && board[2][2] == p2) //vertical 3
    {
        cout << "\n"; 
        cout << "Winner is player 2!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
       
    }
    if(board[0][0] == p2 && board[1][1] == p2 && board[2][2] == p2) //diagonal 1
    {
        cout << "\n"; 
        cout << "Winner is player 2!";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        exit(1);
      
    }
    if(board[0][2] == p2 && board[1][1] == p2 && board[2][0] == p2) //diagonal 2
    { 
        cout << "\n"; 
        cout << "Winner is player 2!";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
        exit(1);
       
    }

}

int main()
{
    char p1 = 'X';
    char p2 = 'O';


    char board[3][3] = 
    {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    start(board);
    p1turn(board,p1,p2);

}