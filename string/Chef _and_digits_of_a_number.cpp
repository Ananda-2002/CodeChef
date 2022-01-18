/*
codechef question : Chef and digits of a number (Problem Code: LONGSEQ)
question link : https://www.codechef.com/problems/LONGSEQ
Salutation language : c++
Time complexity : O[n]
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int zero = 0, one = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else if (s[i] == '1')
            {
                one++;
            }
        }
        if (one == 1)
        {
            cout << "Yes" << endl;
        }
        else if (zero == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
