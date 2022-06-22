#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // take inputs a and b and create them
    int a , b ;
    cin >> a >> b;
    int x = 1,y = 1,z =1;

    while ( y == 0) {

        if(x % a == 0 && x % b == 0){
            cout << x << endl;
        }
        else{
            x = x + 1;
        }


        



    }



    return 0;
}

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     // take n inputs of a, b
//     int a[n], b[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         cin >> b[i];
//     }

//     // find a number that divisable by both a and b
//     int x = 0, y = 0, z = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         // loop from 1 to 10^18
//         for (int l = 1; l <= 10000000000; l++)
//         {
            
//             if (l % a[i] == 0 && l % b[i] == 0)
//             {
//                 x = l;
//                 // find y so that it's divisible by a but not b and doesn't equal to x
//                 for (int j = 1; j <= 100000000000000000; j++)
//                 {
//                     if (j % a[j] == 0 && j % b[j] != 0 && j != x)
//                     {
//                         y = j;
//                         break;
//                     }
//                 }

//                 // find y so that it's divisible by a but not b and doesn't equal to x or y
//                 for (int j = 1; j <= 100000000000000000; j++)
//                 {
//                     if (j % a[i] == 0 && j % b[i] != 0 && j != x && j != y)
//                     {
//                         z = j;
//                         break;
//                     }
//                 }

//                 break;
//             }
//         }
//         cout << "YES"
//              << " " << x << " " << y << " " << z << endl;
//     }
 
//     return 0;
// }
