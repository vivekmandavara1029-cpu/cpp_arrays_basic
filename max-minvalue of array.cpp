#include<iostream>
using namespace std;
int main (){
	int n,i,max,min;
	cout<<"enter the value of size of array = ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
	cout<<"enter the "<<i+1<<" value of array = ";
	cin>>arr[i];}
	//cout<<"check all the element of array with 0 index value";
	//cout<<"max and min equal to the 0 index value";
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++){
	if(arr[i]>max){//cout<<"check the all element of array with max";
	max=arr[i];}
	if(arr[i]<min){//cout<<"same as for min";
	min=arr[i];}}
	cout<<"the largest value of array is "<<max<<endl;
cout<<"the smaller value of array is "<<min;
	return 0;
	
}
