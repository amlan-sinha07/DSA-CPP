#include <iostream>
#include <vector>
using namespace std;
class Solution3380 {
public:
    int maxRectangleArea(vector<vector<int>>& points) {
        auto isValidRectangle = [&](int minX, int minY, int maxX,int maxY)->bool{
            int cornerCount=0;
            for (const auto& point:points){
                int currentX= point[0];
                int currentY= point[1];
                if (currentX < minX || currentY < minY || currentX >maxX || currentY > maxY){
                    continue;
                }
                if ((currentX == maxX || currentX == minX) && (currentY == minY || currentY == maxY)){
                    cornerCount += 1;
                    continue;
                }
                return false;
            }
            return cornerCount == 4;
        };
        int maxArea = -1;
        for (int i=0; i<points.size(); i++){
            int x1=points[i][0];
            int y1=points[i][1];
            for (int j=0; j<i; j++){
                int x2=points[j][0];
                int y2=points[j][1];

                int rightBound=max(x1,x2);
                int leftBound=min(x1,x2);

                int topBound=max(y1,y2);
                int bottomBound=min(y1,y2);

                if (isValidRectangle(leftBound,bottomBound,rightBound,topBound)){
                    int area= (rightBound-leftBound)* (topBound-bottomBound);
                    maxArea= max(maxArea,area);
                }
            }
        }
        return maxArea;
    }
};
class Solution2374 {
public:
    int edgeScore(vector<int>& edges) {
        int n = edges.size();
        vector<long long>edgeScore(n);
        int maxScoreNode = 0 ;
        for(int currentNode=0; currentNode<n ; currentNode++){
            int targetNode= edges[currentNode] ;
            edgeScore[targetNode] += currentNode;
            if (edgeScore[maxScoreNode] < edgeScore[targetNode] || (edgeScore[maxScoreNode] ==edgeScore[targetNode] && maxScoreNode > targetNode)){
                maxScoreNode = targetNode ;
            }
        }
        return maxScoreNode ;
    }
};
