class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //using min heap
    //    priority_queue<int,vector<int>,greater<int>>pq;
    //    for(int i:nums){
    //     pq.push(i);
    //     if(pq.size()>k){
    //         pq.pop();
    //     }
     
    //    }
    //       return pq.top();
    // }
    //using ntution
    sort(nums.begin(),nums.end(),greater<int>());
    int ans;
    ans=nums[k-1];
    return ans;
    }
};