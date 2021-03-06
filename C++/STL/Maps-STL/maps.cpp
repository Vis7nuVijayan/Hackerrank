#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;


void mapPrint(map<string,int> &m)
{
	string x;
	cin >> x;

	if(m.find(x) == m.end())
		cout << 0 << endl;

	else
		cout << m[x] << endl;
}

void mapErase(map<string,int> &m)
{
	string x;
	cin >> x;

	m.erase(x);
}

void mapInsert(map<string,int> &m)
{
	string x;
	int y;
	cin >> x >> y;

	m[x] = m[x]+y;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	map<string,int> m;
	int query;
	cin >> query;

	while(query--)
	{
		int choice;
		cin >> choice;

		switch(choice)
		{
			case 1 :	mapInsert(m);
						break;

			case 2 :	mapErase(m);
						break;

			case 3 :	mapPrint(m);
						break;
		}
	}
    return 0;
}
