class Solution {
public:

    long long power(long long x, long long n) {
        long long result = 1;
        long long mod=1000000007;

        while (n > 0) {
            if (n % 2)
                result = (result * x) % mod;

            x = (x * x) % mod;
            n /= 2;
        }

        return result;
    }

    int countGoodNumbers(long long n) {
        /*

        n=1  => 5
        n=2  => 5 X 4
        n=3  => 5 X 4 X 5
        n=4  => 5 X 4 X 5

        even pos => (n+1)/2
        odd pos  => n/2

        ans=5^even * 4^odd

        also we can't use pow as it returns float we need to use power from the question pow(x,n)
        */
        long long mod=1e9+7;
        long long even=(n+1)/2;
        long long odd=n/2;
        long long ans=(power(5,even)*power(4,odd))%mod;

        return (int)ans;
    }
};