#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main()
{
	int A[6][6];
	int sumEven=0;
	int sumOdd=0;
	int n=;
	
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			A[i][j]=rand()%100;
		}
	}
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
		if(i%2==0)
		{
			sumEven+=A[i][j];
		}
	}
	}
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
		if(i%2==1)
		{
			sumOdd+=A[i][j];
		}
	}
	n++;
	}
	
	if(sumOdd>sumEven)
	{
		cout<<"Odd numbers are greater than even"<<endl;
	}
	else if(sumEven>sumOdd)
	{
		cout<<"Even numvers are greater"<<endl;
	}
	else
	{
		cout<<"Even and Odd are equal"<<endl;
	}
	
	return 0;
}
