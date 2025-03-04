#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, d;
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    cout << setprecision(2) << fixed;
    if(d < 0){
        cout << "Imaginary" << endl;
    }else if(d == 0){
        cout << "Real and Equal" << endl;
        cout << (-b)/(2*a) << endl;
    }else{
        cout << "Real and Unequal" << endl;
        cout << min((-b + sqrt(d))/(2*a), (-b - sqrt(d))/(2*a)) << endl;
        cout << max((-b + sqrt(d))/(2*a), (-b - sqrt(d))/(2*a)) << endl;
    }
    return 0;
}