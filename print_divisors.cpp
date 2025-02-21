 #include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int sumOfDivisors(int n) {
	int sum=0;
        int funcsum=0;
        for(int i=1;i<=n;i++){
           for(int j=1;j<=i;j++){
               if(i%j==0){
                   funcsum+=j;
               }
               sum+=funcsum;
               funcsum=0;
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

        cout << "~"
             << "\n";
    }
    return 0;
}

