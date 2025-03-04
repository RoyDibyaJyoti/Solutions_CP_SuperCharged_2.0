#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int ans = 0;
    for(int i = 0; i < n; i++) ans += (arr[i]^x);
    cout << ans << endl;
    return 0;
}