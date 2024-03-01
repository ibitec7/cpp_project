#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

string preprocessString(const string& str) {
    string processedStr = str;

    processedStr.erase(remove_if(processedStr.begin(), processedStr.end(), ::isspace), processedStr.end());

    transform(processedStr.begin(), processedStr.end(), processedStr.begin(), ::tolower);

    return processedStr;
}

bool areAnagrams(const string& str1, const string& str2) {

    string processedStr1 = preprocessString(str1);
    string processedStr2 = preprocessString(str2);


    if (processedStr1.length() != processedStr2.length()) {
        return false;
    }

    sort(processedStr1.begin(), processedStr1.end());
    sort(processedStr2.begin(), processedStr2.end());

    return processedStr1 == processedStr2;
}

int main() {
    string word1 = "Bad Credit";
    string word2 = "Debit Card";

    if (areAnagrams(word1, word2)) {
        cout << word1 << " and " << word2 << " are anagrams." << endl;
    } else {
        cout << word1 << " and " << word2 << " are not anagrams." << endl;
    }

    return 0;
}
