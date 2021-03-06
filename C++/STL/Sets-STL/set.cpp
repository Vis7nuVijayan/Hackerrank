#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;


void findSet(set<int> *s)
{
	int val;
	cin >> val;

	set<int>::iterator index = s->find(val);

	if(index != s->end())
		cout <<"Yes";

	else
		cout << "No";

	cout << endl;
}

void deleteSet(set<int> *s)
{
	int val;
	cin >> val;

	s->erase(val);
}

void addSet(set<int> *s)
{
	int val;
	cin >> val;

	s->insert(val);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int query;
	cin >> query;

	set<int> s;

	int x;
	while(query--)
	{
		cin >> x;

		switch(x)
		{
			case 1	:	addSet(&s);
						break;

			case 2	:	deleteSet(&s);
						break;

			case 3	:	findSet(&s);
		}
	}

	return 0;
}
