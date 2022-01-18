/*
codechef question : Chef and Two Strings (Problem Code: CHEFSTLT)
question link : https://www.codechef.com/problems/CHEFSTLT
Salutation language : c++
Time complexity : O[n]
*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        int mx = 0, mn = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '?' || s2[i] == '?')
            {
                mx++;
            }
            else if (s1[i] != s2[i])
            {
                mn++;
            }
        }
        cout << mn << " " << (mn + mx) << endl;
    }
    return 0;
}