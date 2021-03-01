//Problem link : https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/

class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
       sort(horizontalCuts.begin(), horizontalCuts.end());
       sort(verticalCuts.begin(), verticalCuts.end());
        
       int mxh = -1, mxv = -1;
       int prevh = 0, prevv = 0; 
       for(int i = 0; i < horizontalCuts.size(); i++)
       {
           mxh = max(mxh, horizontalCuts[i] - prevh);
           prevh = horizontalCuts[i];
       }
       
       mxh = max(mxh, h - prevh);
        
       for(int i = 0; i < verticalCuts.size(); i++)
       {
           mxv = max(mxv, verticalCuts[i] - prevv);
           prevv = verticalCuts[i];
       }
        
       mxv = max(mxv, w - prevv);
        
       // mxv++, mxh++;
        
       long long res, mod = 1000000007;
        
       res = (((mxv * 1ll) % mod) * ((mxh * 1ll) % mod)) % mod;
       
       return res;
    }
};
