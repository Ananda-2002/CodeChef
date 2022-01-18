/*
codechef question : Chef and the Wildcard Matching (Problem Code: TWOSTR)
question link : https://www.codechef.com/problems/TWOSTR
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
        int flag = 0;
        string x;
        cin >> x;
        string y;
        cin >> y;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == '?' || y[i] == '?')
            {
                continue;
            }
            else if (x[i] != y[i])
            {
                flag = 1;
                break;
            }
        }

        cout << ((flag == 0) ? "Yes" : "No") << endl;
    }
    return 0;
}