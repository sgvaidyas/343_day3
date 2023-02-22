#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"\n Enter the num of elements = ";
	cin>>n;
	
	int a[n];
	
	cout<<"\n enter the ele = ";
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"\n The ele = ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
		
	
}
