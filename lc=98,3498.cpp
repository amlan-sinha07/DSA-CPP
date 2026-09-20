#include <iostream>
#include <functional>

using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution3498 {
public:
    int reverseDegree(string s) {
        int size=s.length();
        long long answer=0;
        for (int position=1;position<=size; ++position){
            char currentChar = s[position-1];
            int reverseAlphabeticalValue= 26 - (currentChar - 'a');
            answer += position * reverseAlphabeticalValue;
        }
        return answer;
    }
};
class solution98{
public:
    bool isValidBST(TreeNode* root){
        TreeNode* previousNode=nullptr;
        function<bool(TreeNode*)>inOrderValidate=[&](TreeNode* currentNode)->bool{
            if(!currentNode){
                return true;
            }
            if(!inOrderValidate(currentNode->left)){
                return false;
            }
            if(previousNode && previousNode->val >= currentNode->val){
                return false;
            }
            previousNode= currentNode;
            return inOrderValidate(currentNode->right);
        };
        return inOrderValidate(root);
    }
};