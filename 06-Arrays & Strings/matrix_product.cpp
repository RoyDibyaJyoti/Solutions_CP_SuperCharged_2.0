#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > matrixProduct(vector<vector<int> > A, vector<vector<int> > B){
    int n = A.size();
    vector<vector<int> > C(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
    
    return C;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > A(n, vector<int>(n, 0)), B(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> A[i][j];
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> B[i][j];
    vector<vector<int> > C = matrixProduct(A, B);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}