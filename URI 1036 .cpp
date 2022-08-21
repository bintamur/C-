#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
 double a,b,c,n,R1,R2;
 cin>>a>>b>>c;
 
 if(a==0 || (b*b-(4*a*c)<0))
 {
  cout<<"Impossivel calcular\n";
 }
 else
 {

 cout<<fixed<<setprecision(5);
     R1=(-b+(sqrt(b*b-(4*a*c))))/(2*a);
     cout<<"R1 = "<<R1<<endl;
     R2=(-b-(sqrt(b*b-(4*a*c))))/(2*a);
     cout<<"R2 = "<< R2<<endl;
 }

getchar();

}
