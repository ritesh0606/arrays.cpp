#include<iostream>
using namespace std;
int main()
{
	int i=0;
	int arr[5];
	int*p;
	cout<<"Enter any five numbers";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	p=arr;
	cout<<"You have entered :";
	for(i=0;i<5;i++)
	{
		cout<<*p<<"\n"<<endl;
		p++;
	}
	return 0;
}
