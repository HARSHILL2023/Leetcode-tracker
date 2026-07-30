// Last updated: 7/30/2026, 10:06:52 AM
class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(n>=i){
                n=n-i;
                count++;
            }
            else{
                return count;
            }

        }
        return count;
    }
};