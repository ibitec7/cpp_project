#include <iostream>

using namespace std;

const int MAX_LEVELS = 10;

void displayTowers(int towers[3][MAX_LEVELS], int levels) {
    for (int i = 0; i < 3; ++i) {
        cout << "Tower " << i + 1 << ": ";
        for (int j = 0; j < levels; ++j) {
            if (towers[i][j] != 0) {
                cout << towers[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
}

void moveDisk(int towers[3][MAX_LEVELS], int source, int destination, int& sourceTop, int& destTop) {
    towers[destination][destTop++] = towers[source][--sourceTop];
    displayTowers(towers, MAX_LEVELS);
}

void towerOfHanoi(int levels, int towers[3][MAX_LEVELS], int source, int auxiliary, int destination,
                   int& sourceTop, int& auxTop, int& destTop) {
    if (levels == 1) {
        moveDisk(towers, source, destination, sourceTop, destTop);
        return;
    }

    towerOfHanoi(levels - 1, towers, source, destination, auxiliary, sourceTop, destTop, auxTop);
    moveDisk(towers, source, destination, sourceTop, destTop);
    towerOfHanoi(levels - 1, towers, auxiliary, source, destination, auxTop, sourceTop, destTop);
}

int main() {
    int levels;

    cout << "Enter the number of levels for Tower of Hanoi (max " << MAX_LEVELS << "): ";
    cin >> levels;

    if (levels <= 0 || levels > MAX_LEVELS) {
        cout << "Invalid number of levels. Exiting.\n";
        return 1;
    }

    int towers[3][MAX_LEVELS] = {0};
    int sourceTop = levels, auxTop = 0, destTop = 0;

    for (int i = 0; i < levels; ++i) {
        towers[0][i] = levels - i;
    }

    cout << "\nInitial Tower Configurations:\n";
    displayTowers(towers, levels);

    towerOfHanoi(levels, towers, 0, 1, 2, sourceTop, auxTop, destTop);

    cout << "\nTower of Hanoi solved!" << endl;

    return 0;
}
