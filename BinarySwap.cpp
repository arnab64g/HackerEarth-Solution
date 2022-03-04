#include<iostream>
using namespace std;
int main()
{
    string s1, s2;
    int len, s1c = 0, s2c = 0, displ = 0;
    cin >> s1;
    cin >> s2;
    len = s1.length();
    for (int i = 0; i < len; i++)
    {
        if(s1[i] == '1')
            s1c++;
        if(s2[i] == '1')
            s2c++;
        if(s1[i] != s2[i])
            displ++;
    }
    if(s1c == s2c)
        cout << displ/2 << endl;
    else cout << -1 << endl;
    return 0;
}