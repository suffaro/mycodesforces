#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N = 40;
int t[N]; int n; string a,b;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        memset(t,0,sizeof(t));
        int j=b.size()-1;
        bool flag = 0;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]==b[i])
            {
                if(t[a[i]-'A']) break;
                j--;
                if(j<0) {flag = 1; break;}

            }
            else t[a[i] - 'A']++;
        }
        printf("%s\n", flag? "YES" : "NO");
    }
}