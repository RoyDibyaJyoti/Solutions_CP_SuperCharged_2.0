#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while(getline(ss, word, ',')){
        cout << word << endl;
    }
    return 0;
}