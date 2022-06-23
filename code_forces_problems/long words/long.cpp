#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arrayStr[n];
    string response[n];
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        arrayStr[i] = word;

        int size = word.length();
        if (size > 10)
        {
            response[i] = word[0] + to_string(size - 2) + word[size - 1];
        }else{
            response[i] = word;

        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << response[j] << endl;
    }
}
