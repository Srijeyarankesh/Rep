#include<iostream>
using namespace std;
int a[100000];
int maxarray[100000];
void findmax(int n)
{
	int i=1;
	int large=maxarray[0];
	while(i<n)
	{
		if(large<maxarray[i])
			large=maxarray[i];
		i++;
	}
	cout<<"The largest area of rectangle:"<<large<<endl;
}
void largesum(int n)
{
	int i=0;
	for(;i<n;i++)
	{
		int count=0;
		int j=i-1;
		int k=i+1;
		while(j>=0 && a[j]>=a[i])
		{
			count++;
			j--;
		}
		while(k<n && a[k]>=a[i])
		{
			count++;
			k++;
		}
		count++;
		maxarray[i]=count*a[i];
	}
        findmax(n);
}

int main()
{
	int n=0;
	cout<<"Enter the no.of elements:"<<endl;
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	int i=0;
	for(;i<n;i++)
		cin>>a[i];
	largesum(n);
	return 0;
}
