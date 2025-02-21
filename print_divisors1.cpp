#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumOfDivisors(int n) {
        int sum = 0;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                sum += i; 
                if (i != n / i) {
                    sum += n / i; 
                }
            }
        }

        return sum;
    }
};

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int N;
        cin >> N;  
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;  

        cout << "~\n";
    }
    return 0;
}

