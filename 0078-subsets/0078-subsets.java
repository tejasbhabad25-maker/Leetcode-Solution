class Solution {

    void func(int[] arr,List<Integer>temp,int i,List<List<Integer>>ans){

        if(i==arr.length){
            ans.add(new ArrayList<>(temp));
            return;
        }
        temp.add(arr[i]);
        func(arr,temp,i+1,ans);

        temp.remove(temp.size() - 1);
        func(arr,temp,i+1,ans);
    }

    public List<List<Integer>> subsets(int[] arr) {
        
        List<List<Integer>>ans=new ArrayList<>();
        List<Integer> temp = new ArrayList<>();

        func(arr,temp,0,ans);

        return ans;
    }
}