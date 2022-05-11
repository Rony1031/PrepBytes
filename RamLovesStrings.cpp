#include <bits/stdc++.h>
using namespace std;

int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    for (int i = 0; i <= N - M; i++)
    {

        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M)
        {
            res++;
            j = 0;
        }
    }
    return res;
}

int main()
{
    string txt;
    cin >> txt;
    string pat;
    cin >> pat;
    cout << countFreq(txt, pat) << endl;
    return 0;
}
