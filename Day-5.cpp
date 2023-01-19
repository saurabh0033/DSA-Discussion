//to find minimum operation to make array strictly in increasing order;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int m=nums.size();
        int i=1,j=0;
	    int ans=0;
	    while(i<m){
	        if(nums[i]<=nums[j]){
	            int n=nums[j]+1;
	            ans+=n-nums[i];
	            nums[i]=n;
	        }
	        i++;
	        j++;
	    }
        return ans;
    }
};
