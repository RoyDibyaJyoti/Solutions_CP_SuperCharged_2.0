#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int max=0, maxidx=0;
    for(int i = 0; i < n-1; i++)
        if(arr[i] > max){
            max = arr[i];
            maxidx = i;
        }
    
    cout << maxidx+1 << endl;
    return 0;
}