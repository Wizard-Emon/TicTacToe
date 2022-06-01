#include <iostream>

using namespace std;
char user[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';
// That is a good thing that is the same thing that can do the thing that is the same thing nothing 
void interface()
{

    for (int i = 0; i < 3; i++)
    {
        cout << "   \n  ";
        for (int j = 0; j < 3; j++)
        {
            cout << user[i][j] << "     ";
        }
        cout << endl;
    }
}
// this is an input button 
void input()
{
    cout << "Enter your number - " << endl;

    int a;
    cin >> a;
    if (a == 1)
    {

        user[0][0] = player;
    }
    else if (a == 2)
    {

        user[0][1] = player;
    }
    if (a == 3)
    {

        user[0][2] = player;
    }
    if (a == 4)
    {

        user[1][0] = player;
    }
    if (a == 5)
    {

        user[1][1] = player;
    }
    if (a == 6)
    {

        user[1][2] = player;
    }
    if (a == 7)
    {

        user[2][0] = player;
    }
    if (a == 8)
    {

        user[2][1] = player;
    }
    if (a == 9)
    {

        user[2][2] = player;
    }
}// This is a toggle button 
// 

void toggle()
{

    if (player == 'X')
    {

        player = 'O';
    }
    else
    {
        player = 'X';
    }
}
// This is a winner function
char winner()
{
    if (user[0][0] == 'X' && user[0][1] == 'X' && user[0][2] == 'X')
        return 'X';
    if (user[1][0] == 'X' && user[1][1] == 'X' && user[1][2] == 'X')
        return 'X';
    if (user[2][0] == 'X' && user[2][1] == 'X' && user[2][2] == 'X')
        return 'X';
    if (user[0][0] == 'X' && user[1][0] == 'X' && user[2][0] == 'X')
        return 'X';
    if (user[0][1] == 'X' && user[1][1] == 'X' && user[2][1] == 'X')
        return 'X';
    if (user[0][2] == 'X' && user[1][2] == 'X' && user[2][2] == 'O')
        return 'O';
    if (user[0][0] == 'X' && user[1][1] == 'X' && user[2][2] == 'X')
        return 'X';
    if (user[0][2] == 'X' && user[1][1] == 'X' && user[2][0] == 'X')
        return 'X';
    if (user[0][0] == 'O' && user[0][1] == 'O' && user[0][2] == 'O')
        return 'O';
    if (user[1][0] == 'O' && user[1][1] == 'O' && user[1][2] == 'O')
        return 'O';
    if (user[2][0] == 'O' && user[2][1] == 'O' && user[2][2] == 'O')
        return 'O';
    if (user[0][0] == 'O' && user[1][0] == 'O' && user[2][0] == 'O')
        return 'O';
    if (user[0][1] == 'O' && user[1][1] == 'O' && user[2][1] == 'O')
        return 'O';
    if (user[0][2] == 'O' && user[1][2] == 'O' && user[2][2] == 'O')
        return 'O';

    if (user[0][0] == 'O' && user[1][1] == 'O' && user[2][2] == 'O')
        return 'O';
    if (user[0][2] == 'O' && user[1][1] == 'O' && user[2][0] == 'O')
        return 'O';
    return '/';
}
// this is main function
int main()
{
    cout << " Let's start the game " << endl;

    interface();
    while (1)
    {
        input();
        interface();
        toggle();
        if (winner() == 'X')
        {
            cout << " X wins!" << endl;
            break;
        }
        else if (winner() == 'O')
        {
            cout << " O wins! " << endl;
            break;
        }
    }
    return 0;
}
