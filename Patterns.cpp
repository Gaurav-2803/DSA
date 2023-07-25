#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    //     /* 1.
    //     ***
    //     ***
    //     *** */
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    //     /* 2.
    //     111
    //     222
    //     333 */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= 3; j++)
    //         {
    //             cout << i;
    //         }
    //         cout << "\n";
    //     }

    //     /* 3.
    //     123
    //     123
    //     123 */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= 3; j++)
    //         {
    //             cout << j;
    //         }
    //         cout << "\n";
    //     }

    //     /* 4.
    //     321
    //     321
    //     321 */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 3; j >= 1; j--)
    //         {
    //             cout << j;
    //         }
    //         cout << "\n";
    //     }

    //     /* 5.
    //     123
    //     456
    //     789 */
    //     int k = 1;
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= 3; j++)
    //         {
    //             cout << k;
    //             k++;
    //         }
    //         cout << "\n";
    //     }

    //     /* 6.
    //      *
    //      **
    //      ***
    //      */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "*";
    //         }
    //         cout << "\n";
    //     }

    //     /* 7.
    //      1
    //      22
    //      333
    //      */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << i;
    //         }
    //         cout << "\n";
    //     }

    //     /* 8.
    //    1
    //    23
    //    456
    //    */
    //     k = 1;
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << k;
    //             k++;
    //         }
    //         cout << "\n";
    //     }

    //     /* 9.
    //    1
    //    21
    //    321
    //    */
    //     k = 1;
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << k - j + 1;
    //         }
    //         k++;
    //         cout << "\n";
    //     }

    //     /* 10.
    //    AAA
    //    BBB
    //    CCC
    //    */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         char ch = 'A' + i - 1;
    //         for (int j = 1; j <= 3; j++)
    //         {
    //             cout << ch;
    //         }
    //         cout << "\n";
    //     }

    //     /* 11.
    //    ABC
    //    DEF
    //    GHI
    //    */
    //     char ch = 'A';
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= 3; j++)
    //         {
    //             cout << ch;
    //             ch += 1;
    //         }
    //         cout << "\n";
    //     }

    //     /* 12.
    //    ABC
    //    BCD
    //    CDE
    //    */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         char ch = 'A';
    //         ch = ch + i - 1;
    //         for (int j = 1; j <= 3; j++)
    //         {
    //             cout << ch;
    //             ch += 1;
    //         }
    //         cout << "\n";
    //     }

    //     /* 13.
    //    A
    //    BB
    //    CCC
    //    */
    //     ch = 'A';
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << ch;
    //         }
    //         cout << "\n";
    //         ch += 1;
    //     }

    //     /* 14.
    //    A
    //    BC
    //    DEF
    //    */
    //     ch = 'A';
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << ch;
    //             ch += 1;
    //         }
    //         cout << "\n";
    //     }

    //     /* 15.
    //    A
    //    BC
    //    CDE
    //    */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         ch = 'A';
    //         ch = ch + i - 1;
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << ch;
    //             ch += 1;
    //         }
    //         cout << "\n";
    //     }

    //     /* 16.
    //    C
    //    CB
    //    CBA
    //    */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         ch = 'A' + 3 - i;
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << ch;
    //             ch += 1;
    //         }
    //         cout << "\n";
    //     }

    //     /* 17.
    //    ABC
    //    BCD
    //    CDE
    //    */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         ch = 'A' + i - 1;
    //         for (int j = 1; j <= 3; j++)
    //         {
    //             cout << ch;
    //             ch += 1;
    //         }
    //         cout << "\n";
    //     }

    //     /* 18.
    //     __*
    //     _**
    //     ***
    //      */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j <= 3 - i; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "*";
    //         }
    //         cout << "\n";
    //     }

    //     /* 19.
    //     ***
    //     **
    //     *
    //     */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 3; j >= i; j--)
    //         {
    //             cout << "*";
    //         }
    //         cout << "\n";
    //     }

    //     /* 20.
    //     ***
    //     _**
    //     __*
    //     */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = 1; j < i; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 3; j >= i; j--)
    //         {
    //             cout << "*";
    //         }
    //         cout << "\n";
    //     }

    //     /* 21.
    //     ___*
    //     __***
    //     _*****
    //     */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = i; j <= 3; j++)
    //         {
    //             cout << "_";
    //         }
    //         for (int j = 1; j <= i * 2 - 1; j++)
    //         {
    //             cout << "*";
    //         }
    //         cout << "\n";
    //     }

    //     /* 22.
    //     ___1
    //     __121
    //     _12321
    //     __*
    //     */
    //     for (int i = 1; i <= 3; i++)
    //     {
    //         for (int j = i; j <= 3; j++)
    //         {
    //             cout << "_";
    //         }
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << j;
    //         }
    //         for (int k = i; k > 1; k--)
    //         {
    //             cout << k - 1;
    //         }
    //         cout << "\n";
    //     }

    /* 22.
    ___1
    __212
    _32123
    *
    */
    // int l = 1;
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = i; j <= 3; j++)
    //     {
    //         cout << "_";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << l - j + 1;
    //     }
    //     l++;
    //     int m = 2;
    //     for (int k = 1; k < i; k++)
    //     {
    //         cout << m;
    //         m++;
    //     }
    //     cout << "\n";
    // }

    // /* 23.
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1
    // */
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     if (i != 1)
    //     {
    //         for (int k = 1; k < i; k++)
    //         {
    //             cout << "**";
    //         }
    //     }
    //     for (int j = 5 - i + 1; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << "\n";
    // }
    return 0;
}