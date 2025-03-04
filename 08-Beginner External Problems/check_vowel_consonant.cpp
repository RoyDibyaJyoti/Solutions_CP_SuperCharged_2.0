#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    cout << (string("aeiou").find(tolower(c)) != -1 ? "Vowel" : "Consonant") << endl;
    return 0;
}
