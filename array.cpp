#include<iostream>
using namespace std;
int main()
{
int array[100]={1,2,3,4,5},i=0,min=10,max=0,average=0,x,y;
y=i;

while(array[i]!=array[5])
{
	i++;

}
cout<<"The number of elements in our array is: "<<i<< endl;


for(x=0;x<i;x++)
{
	if(min>array[x])
		min=array[x];	
}
cout<<"min: "<<min<<endl;
for(x=0;x<i;x++)
{
	if(max < array[x])
	max = array[x];	
}

cout<<"The largest number in the array is: " << max<<endl;
for(x=0;x<i;x++)
{
	average=average+array[x];
}
average=average/x;
cout<<"The average value is :"<< average;


}
