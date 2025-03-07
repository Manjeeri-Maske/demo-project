#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string str) {
    string original = str;
    reverse(str.begin(), str.end()); // Reverse the string
    return original == str; // Check if reversed string matches original
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome!" << endl;
    } else {
        cout << "The string is NOT a palindrome!" << endl;
    }

    return 0;
}

//test
