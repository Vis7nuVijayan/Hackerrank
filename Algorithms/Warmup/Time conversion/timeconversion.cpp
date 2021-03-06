/*
 * Time conversion
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 10:39:21 PM
 *
 */

using namespace std;

#include <iostream>
#include <sstream>
#include <vector>

vector<string> splitString(string time)
{
	stringstream ss(time);
	string s;
	vector<string> str;

	while(getline(ss, s, ':'))
	{
		str.push_back(s);
	}

	return str;
}

void getMilitaryTime(vector<string> time)
{
	if(time[2][2] == 'A')
	{
		if(time[0].compare("12") == 0)
			time[0] = "00";
	}

	else
	{
		if(time[0].compare("12") != 0)
		{
			time[0][0] += '1'-'0';
			time[0][1] += '2'-'0';
		}
	}

	time[2].erase(time[2].size()-2, time[2].size()-1);

	cout << time[0] << ":";
	cout << time[1] << ":";
	cout << time[2];
}

int main()
{
	string time;
	cin >> time;

	vector<string> timesplit = splitString(time);

	getMilitaryTime(timesplit);

	return 0;
}
