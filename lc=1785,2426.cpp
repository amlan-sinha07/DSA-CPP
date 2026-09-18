//leetcode 2426
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class solution2426 {
public:
    long long mergeSort(vector<long long>& arr,int left,int right, int diff){
        if (left>=right){
            return 0;
        }
        int mid=left+(right-left)/2;
        long long count=0;
        count+=mergeSort(arr,left,mid,diff);
        count+=mergeSort(arr,mid+1,right,diff);

        //countcross half pair
        int j=mid+1;
        for(int i=left;i<=mid;i++){
            while(int j=right && arr[i]>=arr[j]+diff){
                j++ ;
            }
            count += right-j+1;
        }
        //normal merge
        vector<long long>temp;
        int i=left;
        j=mid+1;

        while(i<=mid && j<=right){
            if(arr[i]<arr[j]){
                temp.push_back(arr[i++]);
            }
            else{
                temp.push_back(arr[j++]);
            }
            while(i<=mid){
                temp.push_back(arr[i++]);
            }
            while(j<=right){
                temp.push_back(arr[j++]);                
            }
            for(int k=0;k<temp.size();k++){
                arr[left+k]=temp[k];
            }
            return count;
        }
    }
public:
    long long numberOfPairs(vector<int>& nums1,vector<int>& nums2,int diff){
        int n=nums1.size();
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=(long long)nums1[i]-nums2[i];
        }
        return mergeSort(arr,0,n-1,diff);
    }
};
//leetcode 1785
class solution1785{
public:
    int minElements(vector<int>& nums,int limit,int goal){
        long long sum=0;
        for(int x:nums){
            sum += x;
        }
        long long diff=llabs((long long)goal-sum);
        return (diff+limit-1)/limit;
    }
};