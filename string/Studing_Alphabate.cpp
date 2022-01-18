/*
codechef question: Studying Alphabet (Problem Code: ALPHABET)
queston link : https://www.codechef.com/problems/ALPHABET
Salutation language : c++
Time complexity : O[n]
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // your code goes
    string s;
    cin >> s;
    int charArr[27] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int ascii = s[i] - 96;
        charArr[ascii] += 1;
    }
    int T;
    cin >> T;
    while (T--)
    {
        int flag = 0;
        string w;
        cin >> w;
        for (int i = 0; i < w.length(); i++)
        {
            int ascii = w[i] - 96;
            if (charArr[ascii] == 0)
            {
                flag = 1;
                break;
            }
        }
        cout << ((flag == 0) ? "Yes" : "No") << endl;
    }

    return 0;
}
