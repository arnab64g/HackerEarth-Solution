#include<iostream>
using namespace std;
int main()
{
    int t, a, b, u, v, n, cost;
    cin >> t;
    while (t--){
        cin >> a >> b;
        cin >> n;
        int t1 = 0, t2 = 0;
        while (n--)
        {
            cin >> u >> v;
            t1 += u;
            t2 += v;
        }
        if(t1 > t2 && a > b)
            cost = t1*b + t2*a;
        else if(t1 > t2 && a < b)
            cost = t1*a + t2*b;
        else if(t1 < t2 && a < b)
            cost = t1*b + t2*a;
        else if(t1 < t2 && a > b)
            cost = t1*a + t2*b;
        else cost = t1*a+t2*b;
        cout << cost << endl;
        
    }
    
    return 0;
}