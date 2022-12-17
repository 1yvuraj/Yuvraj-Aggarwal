#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long  double p=1;

    if(n>100)
        for(int i=1;i<=n;i++)
        {
            p=p*i;
            // cout<<p<<" ";
        }
        
        cout<<p<<endl;
        
    else
        cout<<"N is smaller than 100";
}