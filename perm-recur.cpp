#include <iostream>

using namespace std;

template <class T>
// swap a and b
inline void permSwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <class T>
// generate all permutation of list[k : m]
static void perm(T list[], int k, int m)
{
	int i = 0;
	static int count = 0;
	
	if (k == m)
	{
		count++;
		cout << "No." << count << " : ";
		

		// print one permutation
		for (i = 0; i <= m; i++)
		{
			cout << list[i];
		}
		cout << endl;
	}
	else
	{
		for (i = k; i <= m; i++)
		{
			permSwap(list[k], list[i]);
			perm(list, k + 1, m);
			permSwap(list[k], list[i]);	
		}
	}
}

int main()
{
	char list[] = {'a', 'b', 'c', 'd'};
	int n = 0;

	n = sizeof(list)/sizeof(list[0]);
	perm(list, 0, n - 1);

	return 0;
}
