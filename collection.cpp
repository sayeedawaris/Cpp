#include<iostream>
using namespace std;
int main()
{
	int i,n,j,temp;
	float sum=0;
	cout<<"How many elements are in your collection: ";
	cin>>n;
	int a[n];
	cout<<"Enter numbers: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
/*	cout<<"your collection: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}*/
	cout<< endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]<=a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
/*	cout<<"Sorted array: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}*/
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<"largest: "<<a[0]<<endl;
	cout<<"smallest"<<a[n-1]<<endl;
	sum=sum/n;
	cout<<"Average: "<<sum<<endl;
}
