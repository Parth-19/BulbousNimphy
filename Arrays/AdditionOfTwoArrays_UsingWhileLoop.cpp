#include<iostream>
using namespace std;

int main()
{
	int size, i, arr1[10], arr2[10], add[10];
	
	cout << "\nPlease Enter the Array Size =  ";
	cin >> size;
	
	cout << "\nPlease Enter the First Array Items =  ";
	i = 0; 
	while(i < size)
	{
		cin >> arr1[i];
		i++;
	}	
	cout << "\nPlease Enter the Second Array Items =  ";
	i = 0; 
	while(i < size)
	{
		cin >> arr2[i];
		i++;
	}
	cout << "\nThe Final Result of adding 2 One Dimensional Arrays = ";
	i = 0; 
	while(i < size)
	{
		add[i] = arr1[i] + arr2[i];
		cout << add[i] << " ";
		i++;
	}

 	return 0;
}
