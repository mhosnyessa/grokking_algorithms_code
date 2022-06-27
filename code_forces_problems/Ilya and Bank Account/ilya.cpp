#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        n *= -1;
        if (n % 10 >= (n % 100) / 10)
        {
            cout << (n / 10) * -1;
            return 0;
        }
        else
        {
            int r = n % 10;
            n /= 100;
            n *= 10;
            n += r;
            cout<<n * -1;
            return 0;
        }
    }
    else
    {
        cout<<n;
    }

}