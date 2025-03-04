#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int xorsum = x;
    for(int i = 0; i < n; i++){
        xorsum ^= arr[i];
    }
    cout << (xorsum == 0 ? "Relax" : "Thief") << endl;
    return 0;
}