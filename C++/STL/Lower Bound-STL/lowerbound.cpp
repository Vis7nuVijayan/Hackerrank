#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


void Find(int a[], int N)
{
	int query;
	cin >> query;


	int val;
	while(query--)
	{
		cin >> val;
		int *f = lower_bound(a, a+N, val);

		if(*f == val)
			cout << "Yes ";

		else
			cout << "No ";

		cout << f-a+1 << endl;
	}
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int N;
	cin >> N;

	int a[N];
	for(int i=0;i<N;++i)
		cin >> a[i];

	Find(a, N);

    return 0;
}
