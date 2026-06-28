#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int segment = 1, ans=1;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            segment++;
        }
        else{
            segment=1;
        }
        ans = max(ans, segment);
    }
    cout<<ans<<endl;
    return 0;
}