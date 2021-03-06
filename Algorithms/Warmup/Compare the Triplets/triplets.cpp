/*
 * Compare the Triplets
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 8:44:28 PM
 *
 */

using namespace std;

#include <iostream>

struct triplet
{
	int t[3];
};

void Compare(struct triplet T1, struct triplet T2)
{
	int A=0, B=0;

	for(int i=0;i<3;++i)
	{
		if(T1.t[i] > T2.t[i])
			++A;

		else if(T1.t[i] < T2.t[i])
			++B;
	}

	cout << A << " " << B;
}

void getScore(struct triplet* T)
{
	for(int i=0;i<3;++i)
		cin >> T->t[i];
}

int main()
{
	struct triplet A, B;
	getScore(&A);
	getScore(&B);

	Compare(A,B);

	return 0;
}
