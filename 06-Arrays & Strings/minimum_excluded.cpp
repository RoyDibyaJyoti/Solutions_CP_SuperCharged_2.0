#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> freq(1001, 0);
    int n, x;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        freq[A[i]]++;
    }
    for(int i = 1; i <= 1000; i++)
        if(freq[i] == 0){
            cout << i << endl;
            break;
        }
    return 0;
}