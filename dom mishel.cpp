#include <iostream>

using namespace std;

int main()
{
int c,f;
    cout << "C:";
    cin >> c;
//    cout << c << endl;
    
    f = c*9/5 +32;
    cout << "F=" << f << endl;
    
int age;
cout << "Age:";
cin >> age;
// cout << age << endl;

if (age<18) {
cout << "You are young kido" << endl;
}
else cout << "Welcome to the grown up club YAY!" << endl;

int a1,b1,c1,big;

cout << "a,b,c:" << endl;
cin >> a1 >> b1 >> c1;
// cout << a1 << b1 << c1 << endl;
if (a1>b1) {
big=a1;
}
else big=b1;
if (big<c1) {
big=c1;
}
cout << "Max=" << big << endl;


return 0;
}
