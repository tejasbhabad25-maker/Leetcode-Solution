class Solution {
public:
    vector<int> constructRectangle(int area) {

        vector<int> ans = {area, 1};
        int diff = area - 1;

        // we get len here to find w and mindiff
        // if area is prime then [area,1] if it is not then [l,w]

        if (area <= 2)
            return ans;

        int l = area;
        int w = 1;

        for (int i = 2; i <= sqrt(area); i++) {
            if (area % i == 0) {
                l = area / i;
                w = i;

                if ((l - w) < (ans[0] - ans[1])) {
                    ans = {l, w};
                }
            }
        }
        return ans;
    }
};