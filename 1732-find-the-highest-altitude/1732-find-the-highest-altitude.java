class Solution {
    public int largestAltitude(int[] gain) {
        int h=0,max=0;
        for(int g:gain){
            h+=g;
            max=Math.max(max,h);
        }
        return max;
    }
}