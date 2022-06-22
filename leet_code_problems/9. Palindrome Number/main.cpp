#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        int div = 1;
        while (x / div > 10)
        {

            div *= 10;
        }

        while (x != 0)
        {
            int left = x / div;
            int right = x % 10;
            if (left != right)
                return false;
            x %= div;
            x /= 10;
            div /= 100;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();

    int num  ;
    cin>>num;
    bool ans = s.isPalindrome(num);
    cout << num << " : " << ans << endl;
    return 0;
}
