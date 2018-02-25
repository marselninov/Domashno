#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c , p, s, h, m, l;
	
	cout << "Input A, B, C:" << endl;
	cin >> a >> b >> c;
	
	p=(a+b+c)/2;
	cout << "P=" << p << endl;
	
	
	s=p*(p-a)*(p-b)*(p-c);
	s=sqrt(s);
	cout << "S=" << s << endl;
	
	
	h=(2*s)/a;
	cout << "Ha=" << h << endl;
	h=(2*s)/b;
	cout << "Hb=" << h << endl;
	h=(2*s)/c;
	cout << "Hc=" << h << endl;
	
	
	m=sqrt(2*pow(c,2)+2*pow(b,2)-pow(a,2))/2;
	cout << "Ma=" << m << endl;
	
	m=sqrt(2*pow(c,2)+2*pow(a,2)-pow(b,2))/2;
	cout << "Mb=" << m << endl;
	
	m=sqrt(2*pow(a,2)+2*pow(b,2)-pow(c,2))/2;
	cout << "Mc=" << m << endl;
	
	
	l=2*sqrt(b*c*p*(p-a))/(b+c);
	cout << "La=" << l << endl;
	
	l=2*sqrt(a*c*p*(p-b))/(a+c);
	cout << "Lb=" << l << endl;
	
	l=2*sqrt(b*a*p*(p-c))/(b+a);
	cout << "Lc=" << l << endl;
	
	
return 0;
}

