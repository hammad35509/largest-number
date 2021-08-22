#include<iostream>
using namespace std;
int main()
{
	int smallest=0, largest=0, num=0,i=1,n;
	cout << "Enter no. of terms" << endl;
	cin >> n;
	cout << "please enter integers" << endl;
	cin >> num;
	largest = num;
	smallest = num;
	while (n < 0)
	{
		cout << "Error! Enter positive number of term " << endl;
		cin >> n;
	}

	while (i < n)
	{
		cout << "please enter integers" << endl;
		cin >> num;
		i = i + 1;
		if (num > largest)
		{
			largest = num;
		}
		if (smallest > num )
		{
			smallest = num;
		}
		
	}
	cout << "the largest number is " << largest << endl;
	cout << "the smallest number is " << smallest << endl;
	return 0;
}