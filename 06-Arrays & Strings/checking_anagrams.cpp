#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    cout << (s == t ? "yes" : "no") << endl;
    return 0;
}