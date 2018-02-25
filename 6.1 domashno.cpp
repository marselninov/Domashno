#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int sum=0;
    for (int d=2;d<=200;d+=2)
    {
        if(d%5==0)
        {
            continue;
        }
        sum=sum+d;
    }
    cout<<"Sum="<<sum;
    return 0;
}
