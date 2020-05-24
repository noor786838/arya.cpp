#include<iostream>
using namespace std;
int main()
{
	int *p,i;
	int arr[5];
	p=arr;{
	cout<<"enter elements"<<endl;
	for(i=0;i<5;i++)
	cin>>arr[i];
	p++;
	}
	cout<<endl<<"you entered";
	for(i=0;i<5;i++){
	cout<<*(p-1)<<endl;
	p++;
}
return 0;
}
