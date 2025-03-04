#include <iostream>
#include <vector>

using namespace std;

bool magicSquare(vector<vector<int> > matrix){
    int n = matrix.size();
    vector<int> rowSum(n, 0), colSum(n, 0);
    int diagSum1 = 0, diagSum2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
            if(i == j) diagSum1 += matrix[i][j];
            if(i + j == n - 1) diagSum2 += matrix[i][j];
        }
    }
    int sum = rowSum[0];
    for(int i = 1; i < n; i++) if(rowSum[i] != sum || colSum[i] != sum) return false;
    return diagSum1 == sum && diagSum2 == sum;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > matrix(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> matrix[i][j];
    cout << (magicSquare(matrix) ? "YES" : "NO") << endl;
    return 0;
}