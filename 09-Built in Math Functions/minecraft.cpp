#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int result = min({a, b, (a+b)/3});
    cout << result << endl;
    return 0;
}