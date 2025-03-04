#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> indices(s.size());
    for(int i = 0; i < s.size(); i++){
        cin >> indices[i];
    }
    string result(s.size(), ' ');
    for(int i = 0; i < s.size(); i++){
        result[indices[i] - 1] = s[i];
    }
    cout << result << endl;
    return 0;
}