#include <iostream>
using namespace std;

void Switch (int*, int*);

int main()
{
	int a = 5;
	int b = 7;
	
	cout << "a="  << a << " " << "b = " << b<<"\n";
	
	Switch( &a, &b);
	
	cout << "a=" << a << " " << "b = " << b;
}

void Switch (int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}
