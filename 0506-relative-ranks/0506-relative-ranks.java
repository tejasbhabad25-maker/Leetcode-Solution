class Solution {
    public String[] findRelativeRanks(int[] arr) {
        
        int n=arr.length;
        int[][] temp = new int[n][2];

        for(int i = 0; i < n; i++){
            temp[i][0] = arr[i];
            temp[i][1] = i;
        }
        // Increasing
        // Arrays.sort(temp, (a, b) -> Integer.compare(a[0], b[0]));

        // Decreasing
        // Arrays.sort(temp, (a, b) -> Integer.compare(b[0], a[0]));

        // this sort on first column for second column use 1 

        Arrays.sort(temp,(a,b)->Integer.compare(b[0],a[0]));
        String[] ans=new String[n];

        for(int i=0;i<n;i++){
            if(i==0){
                ans[temp[i][1]]="Gold Medal";
            }
            else if(i==1){
                ans[temp[i][1]]="Silver Medal";
            }
            else if(i==2){
                ans[temp[i][1]]="Bronze Medal";
            }
            else{
                ans[temp[i][1]]=String.valueOf(i+1);
                // convert int -> string
            }
        }
        return ans;
    }
}