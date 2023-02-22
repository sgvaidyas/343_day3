#include<iostream>
#define maximum(a,b) (a>b)?(a):(b)
using namespace std;


void input(int a[],int n);
void output(int a[],int n);

int main()
{
	int n1,n2,n3;
	cout<<"\n Enter the num of elements of array1 = ";
	cin>>n1;	
	int *a= new int[n1];
	
	cout<<"\n Enter the num of elements of array2 = ";
	cin>>n2;
	int *b= new int[n2];
	
	cout<<"\n Enter the num of elements of array3 = ";
	cin>>n3;
	int *c= new int[n3];
	
	cout<<"\n Array 1  = \n";
	input(a,n1);
	cout<<"\n Array 2  = \n";
	input(b,n2);
	cout<<"\n Array 3  = \n";
	input(c,n3);
	
	cout<<"\n Array 1  = \n";
	output(a,n1);
	cout<<"\n Array 2  = \n";
	output(b,n2);
	cout<<"\n Array 3  = \n";
	output(c,n3);
	
	int *d = new int[n1+n2+n3];
	
	int m = maximum(maximum(n1,n2),n3);
	
	cout<<"\n max size of array = "<<m<<endl;
	
	for(int i=0,cnt=0;i<m;i++)
	{
		if(i<n1)
		{
			d[cnt++]= a[i];
		}
		if(i<n2)
		{
			d[cnt++]= b[i];
		}
		if(i<n3)
		{			
			d[cnt++]= c[i];
		}		
	}
	
	output(d,n1+n2+n3);
	
}
void input(int a[],int n)
{
	cout<<"\n Enter the elements = \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void output(int a[],int n)
{
	cout<<"\n The elements = \t";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}

