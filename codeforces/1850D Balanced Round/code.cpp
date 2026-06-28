#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        // actual code logic begins
        int count = 1;
        int longest = 1;
        sort(a.begin(), a.end());
        for(int i=1;i<n;i++){
            if(abs(a[i]-a[i-1]) <=k){
                count++;
            }
            else{
                count = 1;
            }
            longest = max(count, longest);
        }
        cout<<n-longest<<endl;
        
    }

    return 0;
}

