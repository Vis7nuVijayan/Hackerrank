/*
 * Diagonal Difference
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 9:00:29 PM
 *
 */

using namespace std;

#include <iostream>
#include <cmath>

void Initialize(int* matrix, int n)
{
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin >> *(matrix+i*n+j);
}

int getDiagonalDifference(int* matrix, int n)
{
	int left_sum=0, right_sum=0;

	for(int i=0;i<n;++i)
	{
		left_sum += *(matrix+i*n+i);
		right_sum += *(matrix+i*n+n-i-1);
	}

	return abs(left_sum-right_sum);
}

int main()
{
	int N;
	cin >> N;

	int matrix[N][N];

	Initialize(matrix[0], N);

	cout << getDiagonalDifference(matrix[0], N);

	return 0;
}
