#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << "*";
    for(int i = 0; i < n-2; i++) cout << "-";
    cout << "*" << endl;

    for(int i = 2; i < n; i++){
        cout << "|";
        for(int j = 0; j < n-2; j++) cout << " ";
        cout << "|" << endl;
    }

    cout << "*";
    for(int i = 0; i < n-2; i++) cout << "-";
    cout << "*" << endl;

    return 0;
}