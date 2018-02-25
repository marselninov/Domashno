#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, divider, maxDivider;
    bool prime=true;
    cout<<"n=";
    cin>>n;
    divider=2;
    maxDivider=sqrt(n);
    for(divider;divider<=maxDivider;divider++)
    {
        if((n%divider)==0)
        {
            prime=false;
            break;
        }
    }
    if(prime)
    {
        cout<<n<<"is prime"<<endl;
    }
    else
    {
        cout<<n<<"is not prime"<<endl;
    }
    return 0;
}
