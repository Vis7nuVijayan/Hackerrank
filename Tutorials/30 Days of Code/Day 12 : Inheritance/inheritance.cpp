/*
 * Day 12 : Inheritance
 *
 *		Author : Vishnu Vijayan
 *		  Date : 12-Jan-2017
 *		  Time : 4:30:33 PM
 *
 */

#include <iostream>
#include <vector>

using namespace std;


class Person
{
	protected:
		string firstName;
		string lastName;
		int id;

	public:
		Person(string firstName, string lastName, int identification)
		{
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}

		void printPerson()
		{
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person
{
	private:
		vector<int> testScores;

	public:
  		// Write your constructor
		Student(string fname, string lname, int id, vector<int> scores) : Person(fname, lname, id)
		{
			this->testScores = scores;
		}

  		// Write char calculate()
		int getSum()
		{
			int sum = 0;
			for(int i : this->testScores)
				sum += i;

			return sum;
		}

		char calculate()
		{
			int sum = getSum();
			int total = this->testScores.size();

			int avg = sum/total;

			if(avg >= 90)
				return 'O';

			if(avg >= 80)
				return 'E';

			if(avg >= 70)
				return 'A';

			if(avg >= 55)
				return 'P';

			if(avg >= 40)
				return 'D';

			return 'T';
		}
};

int main()
{
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;

	vector<int> scores;
	for(int i = 0; i < numScores; i++)
	{
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}

	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();

	cout << "Grade: " << s->calculate() << "\n";

	return 0;
}
