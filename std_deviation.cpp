#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,n,j,temp,range;
	float sum=0,std_dev;
	cout<<"How many elements are in your collection: ";
	cin>>n;
	int a[n];
	cout<<"Enter numbers: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

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

	range=a[0]-a[n-1];
	
	cout<<"Range: "<<range<<endl;
	for(i=0;i<n;i++)
	{
		sum=sum+pow(a[i],2);
	}
	std_dev=sqrt(sum);
	cout<<"Standard deviation: "<<std_dev<<endl;
}
