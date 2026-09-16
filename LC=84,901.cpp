#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxArea=0;
        for (int i=0;i<=heights.size();i++){
            int currentHeight;
            if(i==heights.size()){
                currentHeight=0;
            }
            else{
                currentHeight=heights[i];
            }
            while (!st.empty() && heights[st.top()]>=currentHeight){
                int top=st.top();
                st.pop();
                int height=heights[top];
                int width;

                if(st.empty()){
                    width=i;
                } else {
                    width=i-st.top()-1;
                }
                maxArea=max(maxArea,height*width);
            }
            st.push(i);
        }
        return maxArea;
    }
};
class StockSpanner {
private:
    stack<pair<int,int>>st;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;
        while (!st.empty() && st.top().first <= price ){
            span += st.top().second;
            st.pop();
        }
        st.push({price,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */