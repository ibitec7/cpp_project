#include <iostream>
#include <cstdlib>
#include <ctime>
#include<array>

using namespace std;

int main() {
    srand(time(nullptr));

    array<char,100> letters;
    array<int,26>Count{0};

    for (int i = 0; i < 100; ++i) {
        char random_letter = 'a' + (rand() % 26);
        letters[i] = random_letter;
        Count[random_letter - 'a']++;
    }

    cout << "Generated letters: ";
    for (int i = 0; i < 100; ++i) {
        cout << letters[i];
    }
    cout << endl;

    for (char letter = 'a'; letter <= 'z'; ++letter) {
        cout << letter << ": " << Count[letter - 'a'] << endl;
    }
}
