
#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
	#endif

    int n,a,b,c,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        if(a+b+c >=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}