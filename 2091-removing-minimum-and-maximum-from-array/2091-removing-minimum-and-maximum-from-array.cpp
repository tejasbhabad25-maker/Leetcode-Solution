class Solution {
public:

    int front(vector<int> &arr,int max_idx,int min_idx){
        int n=arr.size();

        // if we need to remove from the front only then we need to check who is more distant from
        // front or which idx is max among max_idx and min_idx
        int t=max(max_idx,min_idx);

        return (t+1);
    }

    int back(vector<int> &arr,int max_idx,int min_idx){
        int n=arr.size();

        // if we need to remove from the back only then we need to check who is more distant from
        // back or which idx is min among max_idx and min_idx
        int t=min(max_idx,min_idx);

        return (n-t);
    }

    int both(vector<int> &arr,int max_idx,int min_idx){

        int n=arr.size();
        // here we have 4 options:
        //  remove both front or back => already done

        // remove max_idx from front and min_idx from back
        // remove min_idx from front and max_idx from back
        // return min of the ans we got from both of them

        // case1
        int case1=(max_idx+1)+(n-min_idx);
        int case2=(min_idx+1)+(n-max_idx);

        return min(case1,case2);
    }

    int minimumDeletions(vector<int>& arr) {

        int n=arr.size();
        if(n==1 || n==2){
            return n;
        }

        int max_el = INT_MIN, max_idx = -1;
        int min_el = INT_MAX, min_idx = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > max_el) {
                max_el = arr[i];
                max_idx = i;
            }

            if (arr[i] < min_el) {
                min_el = arr[i];
                min_idx = i;
            }
        }

        int a=front(arr,max_idx,min_idx);
        int b=back(arr,max_idx,min_idx);
        int c=both(arr,max_idx,min_idx);

        return min({a,b,c});
    }
};