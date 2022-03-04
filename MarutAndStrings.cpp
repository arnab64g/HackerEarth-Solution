#include<iostream>
using namespace std;
int main()
{
    int t, l, lw, up, tc, mo;
    cin >> t;
    if (t < 1 || t > 10){
        cout<<"Invalid Test";
        return 0;
    }
    while (t--)
    {
        string s;
        cin >> s;
        l = s.length();
        lw = 0;
        up = 0;
        tc = 0;
        if(l < 1 || l > 100){
            cout<<"Invalid Input\n";
            continue;
        }
        for (int i = 0; i < l; i++){
            if(isalpha(s[i])){
                tc++;
                if(islower(s[i]))
                    lw++;
                else if(isupper(s[i]))
                    up++;
            }
        }
        if(tc == 0)
            cout << "Invalid Input" << endl;
        else{
            mo = (lw < up) ? lw : up;
            cout << mo << endl;
        }
    }
    return 0;
}
