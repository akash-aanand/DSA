auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int trap(vector<int>& height) {

        const int n=static_cast<int>(height.size());
       if (n == 0) return 0;

      int drop=0;
      int leftMax=0;
      int leftp=0;
      int rightMax= 0;
      int rightp=n-1;
     while(leftp<rightp)
     {
        if(height[leftp]<=height[rightp])
        {
            if(leftMax>height[leftp])
            {
                drop+=(leftMax-height[leftp]);
            }
            else
            {
                leftMax=height[leftp];
            }
                leftp++;
        }

        else
        {
            if(rightMax>height[rightp])
            {
                drop+=(rightMax-height[rightp]);
            }
            else
            {
                //(leftMax<=leftp)
                rightMax=height[rightp];
            }
            rightp--;
        }
     }
     
     return drop;
    }
};