#include <iostream>

using namespace std;

void swapWithReferences(int &x, int &y);
void swapWithPointer(int *x, int *y); 
int main()
{
	int x = 20;
	int y = 30;

	cout <<"X: " << x << " ";
	cout <<"Y: " << y << "\n";
	swapWithReferences(x,y);
	cout <<"X: " << x << " ";
	cout <<"Y: " << y << "\n";
	swapWithPointer(&x,&y);
	cout <<"X: " << x << " ";
	cout <<"Y: " << y << "\n";
	system("PAUSE");
}
void swapWithReferences(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void swapWithPointer(int *x, int *y)
{
	int *temp = x;
	*x = *y;
	*y = *temp;
}
