/*
 * Day 17 : More Exceptions
 *
 *		Author : Vishnu Vijayan
 *		  Date : 17-Jan-2017
 *		  Time : 11:06:44 AM
 *
 */

#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

class Calculator
{
	public:
		int power(int n, int p)
		{
			if(n < 0 || p < 0)
				throw runtime_error("n and p should be non-negative");

				return pow(n,p);
		}
};

int main()
{
    Calculator myCalculator=Calculator();

    int T,n,p;
    cin>>T;

    while(T-->0)
    {
    	if(scanf("%d %d",&n,&p)==2)
		{
    		try
			{
    			int ans=myCalculator.power(n,p);
    			cout<<ans<<endl;
			}

    		catch(exception& e)
			{
    			cout<<e.what()<<endl;
			}
		}
    }
}
