class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>a;
        int i=0;
        int j=(numbers.size()-1);
        int sum=0;
        while(j>i){
            sum=numbers[i]+numbers[j];
            if(sum>target){
                j--;
            }
            else if(sum<target){
                i++;
            }
            else if(sum==target){
                a.push_back(i+1);
                a.push_back(j+1);
                break;
            }
        }
        return a;
    }
};