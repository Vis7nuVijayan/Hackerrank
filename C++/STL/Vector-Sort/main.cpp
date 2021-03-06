#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void Print(vector<int> v)
{
    for(int i : v)
        cout << i << " ";

    cout << endl;
}

vector<int> getInput(int n)
{
    vector<int> v;
    int item;
    for(int i=0;i<n;++i)
    {
        cin >> item;
        v.push_back(item);
    }

    return v;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    vector<int> v = getInput(n);

    sort(v.begin(),v.end());

    Print(v);
    return 0;
}
