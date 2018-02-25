#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cout<< "x,y:";
    cin>>x>>y;
    if(x<=3 && x>=5 && y<=-2 && y>=2)
    {
        cout<< "OUT";
    }
    else{
        cout<< "IN";
    }
    return 0;
}
