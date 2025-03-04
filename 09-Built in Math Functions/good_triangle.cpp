#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    double b = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    double c = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
    double area, perimeter;
    perimeter = a + b + c;
    double s = perimeter/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    if(a == b == c){
        cout << "Equilateral Triangle" << endl;
    }else if(a == b || b == c || c == a){
        cout << "Isosceles Triangle" << endl;
    }else{
        cout << "Scalene Triangle" << endl;
    }
    cout << setprecision(3) << fixed;
    cout << area << " " << perimeter << endl;
    return 0;
}