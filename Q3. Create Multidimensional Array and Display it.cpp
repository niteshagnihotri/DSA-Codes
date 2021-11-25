#include<iostream>
using namespace std;

int main()
{

	int x[3][2] =
	{
		{ 10,20 },

		{ 20,30 },

		{ 30,40 }
	};

    cout << "Array Elements are : \n\n";
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout<<"\t"<<x[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}
