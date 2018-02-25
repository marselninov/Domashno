#include <iostream>

using namespace std;

int main()
{
    int a=1;
    int n;
    cout<<"Vavedi n:";
    cin>> n;
    if(n<0)
    {
        n=n+(-n*2);
    }
    do
    {
        cout<<a<<endl;
        a++;
    }while(a<=n);
    return 0;
}
