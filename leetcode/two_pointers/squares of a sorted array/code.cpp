#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {


        int size = nums.size();
        
        vector<int> res(size);
        int negative_idx,positive_idx;
        for(int i=0;i<size;i++){
            if(nums[i]>=0){
                negative_idx = i-1;
                break;
            }
            negative_idx = i;
        }
        
        
        positive_idx = negative_idx+1;
        
        for(int i=0;i<size;i++){
            nums[i] = nums[i]*nums[i];
        }
        // reverse the negative part
        int i=0, j=negative_idx;
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        // merge to sorted array logic
        i= 0, j=positive_idx;
        
        int k=0;
        while(i<=negative_idx && j<size){
            if(nums[i] <= nums[j]){
                res[k] = nums[i];
                k++;i++;
            }
            else{
                res[k] = nums[j];
                k++;j++;
            }
        }

        while(i<=negative_idx){
            res[k] = nums[i];
            k++;i++;
        }
        while(j<size){
            res[k] = nums[j];
            k++;j++;
        }

        return res;

    }
};

int main() {
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    vector<int> result = s.sortedSquares(nums);

    cout << "Sorted squares: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}