#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i < k; i++) {
            for (int j = i; j < k; j++) {
                if (i * i + j * j == k * k) {
                    count++;
                }
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
