#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,ha,hb,hc,ma,mb,mc,la,lb,lc,S,p;
    cout<< "a,b,c:";
    cin>>a>>b>>c;
    if(a<b+c && b<a+c && c<b+a)
    {
        p=(a+b+c)/2;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        ha=(2*S)/a;
        hb=(2*S)/b;
        hc=(2*S)/c;
        ma=0.5*sqrt(2*(b*b)+2*(b*b)-(a*a));
        mb=0.5*sqrt(2*(b*b)+2*(b*b)-(b*b));
        mc=0.5*sqrt(2*(b*b)+2*(b*b)-(c*c));
        la=2* sqrt (b*c*p*(p-a)/b+c);
        lb=2* sqrt (b*c*p*(p-b)/b+c);
        lc=2* sqrt (b*c*p*(p-c)/b+c);
        cout<<"ha,hb,hc,ma,mb,mc,la,lb,lc:";
        cin>>ha>>hb>>hc>>ma>>mb>>mc>>la>>lb>>lc;
         }
         else{
                cout<< "Triangle do not exist";
         }
    return 0;
}
