#include <iostream>
using namespace std;

int main(){
    int a, b, ans = 0;
    char c;
    cin >> a >> b >> c;
    switch (c){
        case '+':
            ans = a + b;
            break;
        
        case '-':
            ans = a - b;
            break;
        
        case '*':
            ans = a * b;
            break;

        case '/':
            if(b != 0) ans = a / b;
            else cout << "Error division by ZERO." << endl;
            break;
        
        default:
            break;
    }
    cout << ans << endl;
    return 0;
}