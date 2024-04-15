#include <iostream>
#include<cmath>
#define int long long
#define fastt ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
//problem a
int32_t main()
{
    fastt;
    int t;
    cin>>t;
    while(t--/*कृष्णेन योजनाकृतम् , न तु मया*/)
    {
        int n,sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int inp;
            cin>>inp;
            sum+=abs(inp);
        }
        cout<<sum<<"\n";
    }
    return 0;
}
/* 
न हि ज्ञानेन सदृशं पवित्रमिह विद्यते
*/