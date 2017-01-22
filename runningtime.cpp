#include<iostream>

using namespace std;

int main()
{

	int size, i, j, temp, shift=0;
	cin>>size;
	int *arr = new int[size];
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}

	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
			shift++;
		}
		arr[j+1]=temp;
		for(int n=0; n<size; n++){
            cout<<arr[n]<<" ";
		}
	}

return 0;
}
