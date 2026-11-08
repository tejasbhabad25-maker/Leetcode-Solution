class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int S=flowerbed.size();
        int i = 0;
        int ct=0;

        while (i < S) {

            if (flowerbed[i]==0 && (i == 0 || flowerbed[i - 1] == 0) &&
                (i == S - 1 || flowerbed[i + 1] == 0)) {

                ct++;
                i += 2;
            }
            else {
                i++;
            }
        }
        return ct>=n;
    }
};