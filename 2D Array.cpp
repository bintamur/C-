#include<bits/stdc++.h>
using namespace std;
int main()
{
int r,c,i,j;
cin>>r>>c;
int arr[r][c];s

for( i=0;i<r;i++)
{
    for( j=0;j<c;j++)
    {
        cin>>arr[i][j]
    }
}
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
return 0;
}





#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> a;
    vector<string>b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
     cout<<a<<b<<endl;
     char temp=a[0];
     a[0]=b[0];
     b[0]=temp;
     cout<<a<<" "<<b<<endl;


return 0;
}
