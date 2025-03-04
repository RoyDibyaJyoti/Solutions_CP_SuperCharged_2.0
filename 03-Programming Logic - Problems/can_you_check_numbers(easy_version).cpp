#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a == b) cout << "Equal" << endl;
    else if (a > b) cout << "First" << endl;
    else cout << "Second" << endl;
    return 0;
}