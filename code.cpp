#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>A(n);
    for(i=0;i<A.size();i++)
    {
        cin>>A[i];
    }
    int a,b,c;
    cin>>a>>b>>c;
    A.erase(A.begin()+(a-1));
    A.erase(A.begin()+(b-1),A.begin()+(c-1));
    cout<<A.size()<<endl;
    for(i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
}
