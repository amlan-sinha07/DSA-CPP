#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>st;
        int third=INT_MIN;

        for (int i=nums.size()-1; i>=0 ;i--){
            if (nums[i]<third){
                return true;
            }
            while (!st.empty() && nums[i] > st.top()){
                third=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        long totalsum=0;

        int MOD=1e9+7;
        stack<int>st;

        for(int i=0;i<=n;++i){
            int currentval=(i==n)?0:arr[i];

            while(!st.empty() && arr[st.top()]>=currentval){
                int mid=st.top();

                st.pop();
                int leftindex=st.empty()?-1:st.top();

                int rightindex=i;
                long long count=(1LL*(mid-leftindex)*(rightindex-mid))%MOD;

                totalsum=(totalsum+count*arr[mid])%MOD;

            }
            st.push(i);
        }
        return totalsum;
    }
};