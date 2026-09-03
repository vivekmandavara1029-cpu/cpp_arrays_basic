#include<iostream>
using namespace std;
int main (){
	int n,i,sum=0;
	float avg;
	cout<<"enter the value of size of array = ";
	cin>>n;
	//cout<<" n is represented the size of array";
	int arr[n];
   //cout<<" this loop is for enter the values of element in array";
	for(i=0;i<n;i++){
	cout<<"enter the "<<i+1<<" value of array = ";
	cin>>arr[i];}
	//cout<<"this loop is for find the sum of the element of array";
	for(i=0;i<n;i++){
	sum=sum+arr[i];}
	//cout<<"find the average of array";
	avg=sum/n;
	cout<<"the sum of element of array is "<<sum<<endl;
	cout<<"the sum of the average of element of array is "<<avg;
	return 0;}
