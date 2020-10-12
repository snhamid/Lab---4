#include <iostream>
using namespace std;

int main()
{
	int *x;
	int **y;
	int length;
	int row;
	int col;
	int i;
	int j;
	
	
	//User input for arrays
	cout<<"Enter the length of the array: \n";
	cin>>length;
	cout<<"Enter the number of rows: \n";
	cin>>row;
	cout<<"Enter the number of columns: \n";
	cin>>col;
	
	x = new int[length];
	
	//Filling 1D array
	for(i = 0;i<length;i++)
	{
		x[i] = 10;
	}
	
	
	y = new int *[row];
	for(i = 0; i<row;i++)
	{
		y[i] = new int[col];
	}
	
	//Filling 2d array
	for(i = 0; i<row;i++)
	{
		for(j = 0;j<col;j++)
		{
			y[i][j] = 10;
		}
	}
	
	//Printing arrays
	for(i = 0;i<length;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<"\n\n";
	
	for(i = 0; i<row;i++)
	{	
		for(j = 0;j<col;j++)
		{
			cout<<y[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//Deallocating arrays
	delete[] x;
	for(i = 0; i<col;i++)
	{
		delete[] y[i];
	}
	delete[] y;
	
	
}

