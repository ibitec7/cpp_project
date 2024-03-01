#include <iostream>
using namespace std;

void printBoard(int board[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isValidMove(int board[9][9], int row, int col, int value) {

    for (int i = 0; i < 9; i++) {
        if (board[row][i] == value || board[i][col] == value) {
            return false;
        }
    }

    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (board[i][j] == value) {
                return false;
            }
        }
    }

    return true;
}


int main() {
    int board[9][9] = {
            {5, 3, 0, 0, 7, 0, 0, 0, 0},
            {6, 0, 0, 1, 9, 5, 0, 0, 0},
            {0, 9, 8, 0, 0, 0, 0, 6, 0},
            {8, 0, 0, 0, 6, 0, 0, 0, 3},
            {4, 0, 0, 8, 0, 3, 0, 0, 1},
            {7, 0, 0, 0, 2, 0, 0, 0, 6},
            {0, 6, 0, 0, 0, 0, 2, 8, 0},
            {0, 0, 0, 4, 1, 9, 0, 0, 5},
            {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "WELCOME TO THE SUDOKU GAME!" << endl;
    cout << "Enter row, column, and value to play (e.g., 1 2 3) or -1 to quit." << endl;

    int row, col, value;
    while (true) {
        printBoard(board);
        cout << endl << "Enter your move (Row,Conlumn): ";
        cin >> row;
        if (row == -1) {
            cout << "Quitting the game." << endl;
            break;
        }
        cin >> col >> value;

        if (row >= 1 && row <= 9 && col >= 1 && col <= 9 && value >= 1 && value <= 9) {
            if (board[row - 1][col - 1] == 0 && isValidMove(board, row - 1, col - 1, value)) {
                board[row - 1][col - 1] = value;
            } else {
                cout << "Invalid move. Please try again." << endl;
            }
        } else {
            cout << "Invalid input. Please enter valid row, column, and value (1-9)." << endl;
        }
    }

    return 0;
}
