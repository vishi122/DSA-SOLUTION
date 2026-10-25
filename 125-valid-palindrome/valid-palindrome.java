class Solution {
    public boolean isPalindrome(String s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(!Character.isLetterOrDigit(s.charAt(l))){
                l++;
            }
            else if(!Character.isLetterOrDigit(s.charAt(r))){
                r--;
            }
            else{
                char a= Character.toLowerCase(s.charAt(l));
                char b= Character.toLowerCase(s.charAt(r));
                if(a!=b){
                    return false;
                }
                l++;
                r--;
            }
        }
        return true;
    }
}