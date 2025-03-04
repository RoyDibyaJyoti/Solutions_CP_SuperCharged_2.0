#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int> freq(26, 0);
    string s;
    cin >> s;
    for(auto c : s) freq[c - 'a']++;
    for(int i = 0; i < 26; i ++) if(freq[i]) cout << char(i + 'a') << freq[i];
    cout << endl;
    return 0;
}