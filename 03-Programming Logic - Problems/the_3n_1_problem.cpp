#include <iostream>
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    while(n!=1){
        if(n&1) n = 3*n+1;
        else n /= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}