#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first=0, second=1,k=1;
        while(second < nums.size()){
            if(nums[second] != nums[second-1]){
                nums[first+1] = nums[second];
                first++;
                k++;
            }
            second++;
            
        }
        return k;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = s.removeDuplicates(nums);
    cout << "Length of array after removing duplicates: " << k << endl;
    cout << "Modified array: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}