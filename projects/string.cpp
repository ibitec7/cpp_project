#include <iostream>
#include <string>

using namespace std;

int countChar(string str, char targetChar) {
    int count = 0;
    for (char c : str) {
        if (c == targetChar) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    char targetCharacter;

    cout << "Enter a string: ";
    cin >> input;

    cout << "Enter the character to count: ";
    cin >> targetCharacter;

    int charCount = countChar(input, targetCharacter);

    cout << "The character '" << targetCharacter << "' appears " << charCount << " times in the string." << endl;

}
