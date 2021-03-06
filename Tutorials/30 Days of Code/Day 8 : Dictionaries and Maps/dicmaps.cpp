/*
 * Day 8 : Dictionaries and Maps
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-Jan-2017
 *		  Time : 12:00:45 AM
 *
 */

using namespace std;

#include <iostream>
#include <map>


map<string,long> Populate(int n)
{
	map<string,long> hm;

	string s;
	long l;
	for(int i=0;i<n;++i)
	{
		cin >> s >> l;
		hm.insert(make_pair(s,l));
	}

	return hm;
}

int main()
{
	int n;
	cin >> n;

	map<string,long> phonebook = Populate(n);

	string s;
	while(cin >> s)
	{
		if(phonebook.find(s) == phonebook.end())
			cout << "Not found";

		else
			cout << s << "=" << phonebook[s];

		cout << endl;
	}

	return 0;
}
