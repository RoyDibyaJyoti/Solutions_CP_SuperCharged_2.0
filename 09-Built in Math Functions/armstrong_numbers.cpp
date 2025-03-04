#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }
    if(sum == temp){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}