#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
void board(char arr[])
{
    system("cls");
    cout << "====================" << endl;
    cout << "    Tic-Tac-Toe" << endl;
    cout << "====================" << endl;
    cout << "Player 1: X, Player 2: O" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << endl;
    cout << "     |     |     " << endl;
    cout << "______"
         << "______"
         << "______" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << endl;
    cout << "     |     |     " << endl;
    cout << "______"
         << "______"
         << "______" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << endl;
    cout << "     |     |     " << endl;
    cout << "______"
         << "______"
         << "______" << endl;
}
int checkwin(char arr[])
{
    if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        return 1;
    }
    else if (arr[3] == arr[4] && arr[4] == arr[5])
    {
        return 1;
    }
    else if (arr[6] == arr[7] && arr[7] == arr[8])
    {
        return 1;
    }
    else if (arr[0] == arr[3] && arr[3] == arr[6])
    {
        return 1;
    }
    else if (arr[1] == arr[4] && arr[4] == arr[7])
    {
        return 1;
    }
    else if (arr[2] == arr[5] && arr[5] == arr[8])
    {
        return 1;
    }
    else if (arr[0] == arr[4] && arr[4] == arr[8])
    {
        return 1;
    }
    else if (arr[2] == arr[4] && arr[4] == arr[6])
    {
        return 1;
    }
    else if (arr[0] != '1' && arr[1] != '2' && arr[2] != '3' && arr[3] != '4' && arr[4] != '5' && arr[5] != '6' && arr[6] != '7' && arr[7] != '8' && arr[8] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
void mark(char arr[])
{
    int player = 1;
    int num;
    int i;

    char mark;
    do
    {
        board(arr);

        if (player % 2 == 0)
        {
            player = 2;
        }
        else
        {
            player = 1;
        }
        cout << "Player " << player << ", Enter a number: ";
        cin >> num;
        if (player == 1)
        {
            mark = 'X';
        }
        else
        {
            mark = 'O';
        }
        if (num == 1 && arr[0] == '1')
        {
            arr[0] = mark;
        }
        else if (num == 2 && arr[1] == '2')
        {
            arr[1] = mark;
        }
        else if (num == 3 && arr[2] == '3')
        {
            arr[2] = mark;
        }
        else if (num == 4 && arr[3] == '4')
        {
            arr[3] = mark;
        }
        else if (num == 5 && arr[4] == '5')
        {
            arr[4] = mark;
        }
        else if (num == 6 && arr[5] == '6')
        {
            arr[5] = mark;
        }
        else if (num == 7 && arr[6] == '7')
        {
            arr[6] = mark;
        }
        else if (num == 8 && arr[7] == '8')
        {
            arr[7] = mark;
        }
        else if (num == 9 && arr[8] == '9')
        {
            arr[8] = mark;
        }
        else
        {
            cout << "Please enter correct number to mark." << endl;
            player--;
            cin.ignore();
            cin.get();
        }
        player++;
        i = checkwin(arr);
    } while (i == -1);

    board(arr);

    if (i == 1)
    {
        system("Color 02");
        cout << "Player " << --player << " wins.";
    }
    else
    {
        system("Color 04");
        cout << "Match Draw.";
        cin.ignore();
        cin.get();
    }
}
int main()
{
    char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    mark(arr);
    return 0;
}