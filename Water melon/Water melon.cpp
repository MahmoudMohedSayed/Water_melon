#include <iostream>
using namespace std;

int main()
{            //water melon
	int x, a;
	cout << "enter weighs of water melon\n";
	cin >> x;

	if (x % 2 == false)
	{
		for (int i = 0; i < x; i++)
		{
			a = x - i;
			if ((i - a) < 0 && i % 2 == 0)
			{
				cout << a << endl << i << endl;
			}
		}
	}
	else
	{
		cout << "eror";
	}

	return 0;
}