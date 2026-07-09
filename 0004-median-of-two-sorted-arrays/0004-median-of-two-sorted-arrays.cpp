class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        if (arr1.size() > arr2.size())
            return findMedianSortedArrays(arr2, arr1);

        int n1 = arr1.size();
        int n2 = arr2.size();

        int st = 0, end = n1;

        while(st<=end){

            int mid=st+(end-st)/2;

            int partitionX=mid;
            int partitionY=(n1+n2+1)/2-partitionX;

            int l1=partitionX==0?INT_MIN:arr1[partitionX-1];
            int l2=partitionY==0?INT_MIN:arr2[partitionY-1];

            int r1=partitionX==n1?INT_MAX:arr1[partitionX];
            int r2=partitionY==n2?INT_MAX:arr2[partitionY];

            if(l1<=r2 && l2<=r1){
                if((n1+n2)%2==0){
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
                else{
                    return max(l1,l2);
                }
            }
            else if(l1>r2){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return -1;
    }
};