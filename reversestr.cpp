#include <iostream>
#include<string>
using namespace std;




int main() {
	//code
	int arr[10] = {1,3,5,2,6,8,9,7,4};
	int temp,j,i;

	cout<<"The Given array is : ";
	for(int i=0; i<10; i++)
	{
		cout<<arr[i];
	}

	for(int i=0; i<10; j++)
	{
		for (int j=0; j<=10-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]= arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout<<"after Sorting";
	for(int j=0; j<10; j++)
	{
		cout<<arr[j];
	}
	return 0;
}