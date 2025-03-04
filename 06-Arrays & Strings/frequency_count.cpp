#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> freq(101, 0);
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for(int i = 0; i < 101; i++) if(freq[i]) cout << i << " " << freq[i] << endl;
    return 0;
}