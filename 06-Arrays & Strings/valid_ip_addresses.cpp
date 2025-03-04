#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isValidPart(const string &s) {
    if (s.size() > 3) {
        return false;
    }
    if (s.front() == '0' && s.size() > 1) {
        return false;
    }

    int val = stoi(s);
    return val >= 0 && val <= 255;
}

int main(){
    string s;
    cin >> s;
    stringstream ss(s);
    string part;
    int count = 0;
    while(getline(ss, part, '.')) {
        if (isValidPart(part)) {
            count++;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << (count == 4 ? "YES" : "NO") << endl;
    return 0;
}