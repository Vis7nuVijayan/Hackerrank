#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void Print(vector<int> v)
{
	cout << v.size() << endl;

	for(int i : v)
		cout << i <<" ";

	cout << endl;
}

void singleDelete(vector<int> &v)
{
	int index;
	cin >> index;

	v.erase(v.begin()+index-1);
}

void rangeDelete(vector<int> &v)
{
	int start_index, end_index;
	cin >> start_index >> end_index;

	v.erase(v.begin()+start_index-1, v.begin()+end_index-1);
}

void doOperations(vector<int> &v)
{
	singleDelete(v);
	rangeDelete(v);
}

vector<int> getInput()
{
	vector<int> v;
	int size, temp;
	cin >> size;

	for(int i=0;i<size;++i)
	{
		cin >> temp;
		v.push_back(temp);
	}

	return v;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	vector<int> v = getInput();

	doOperations(v);

	Print(v);

	return 0;
}
