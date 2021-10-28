class Solution {
    public boolean isPalindrome(int x) {
        if( x < 0){
            return false;
        }
        int ans = 0;
        int num = x;
        while(x != 0){
            int r  = x % 10;
            ans = ans * 10 + r;
            x = x / 10;
        }
        if(ans == num){
            return true;
        }
        return false;
        //System.out.println(ans);
    }
}



//Author:https://github.com/Devesh-vi
