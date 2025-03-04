#include <iostream>
using namespace std;

int main(){
    long long n, tax = 0;
    cin >> n;
    if(n <= 50000) tax += (n/10);
    else if (n <= 100000) tax += (5000 + ((n-50000)/5));
    else tax += 15000 + ((n-100000)*3/10);

    cout << tax << endl;
    return 0;
}