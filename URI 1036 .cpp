#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
 double a,b,c,n,R1,R2;
 cin>>a>>b>>c;
 n=(b*b)-4*a*c;
 if(n>0)
 {
     cout<<fixed<<setprecision(5);
     R1=(-b+sqrt(n))/2*a;
     cout<<"R1="<<R1<<endl;
     R2=(-b-sqrt(n))/2*a;
     cout<<"R2="<< R2<<endl;
 }
 else
 {
     cout<<"Impossivel calcular"<<endl;
 }

 getchar();

}
