#include <iostream>
#include <vector>

using namespace std;

class Spell
{
    private:
        string scrollName;

    public:
        Spell(): scrollName("") { }

        Spell(string name): scrollName(name) { }

        virtual ~Spell() { }

        string revealScrollName()
        {
            return scrollName;
        }
};

class Fireball : public Spell
{
    private:
		int power;

    public:
        Fireball(int power): power(power) { }

        void revealFirepower()
        {
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell
{
    private:
		int power;

    public:
        Frostbite(int power): power(power) { }

        void revealFrostpower()
        {
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell
{
    private:
		int power;

    public:
        Thunderstorm(int power): power(power) { }

        void revealThunderpower()
        {
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell
{
    private:
		int power;

    public:
        Waterbolt(int power): power(power) { }

        void revealWaterpower()
        {
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal
{
    public:
        static string journal;

        static string read()
        {
            return journal;
        }
};

string SpellJournal::journal = "";


void Initialize(int l1, int l2, int* LCS)
{
	for(int i=0;i<=l1;++i)
		for(int j=0;j<=l2;++j)
			*((LCS+i*(l2+1))+j) = 0;
}

void Print(int l1, int l2, int* LCS)
{
	for(int i=0;i<=l1;++i)
	{
		for(int j=0;j<=l2;++j)
			cout << *((LCS+i*(l2+1))+j) << " ";

		cout << endl;
	}
}

int getLCScount(string s1, string s2)
{
	int l1 = s1.size();
	int l2 = s2.size();

	int LCS[l1+1][l2+1];

	int *LCSptr = &LCS[0][0];

	//Print(l1,l2,LCSptr);
	//cout << "------------------" << endl;
	Initialize(l1, l2, LCSptr);
	//Print(l1,l2,LCSptr);
	//cout << "------------------" << endl;

	for(int i=1;i<=l1;++i)
	{
		for(int j=1;j<=l2;++j)
		{
			if(s1[i-1] != s2[j-1])
				LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);

			else
				LCS[i][j] = LCS[i-1][j-1] + 1;
		}
	}

	//Print(l1,l2,LCSptr);
	//cout << "------------------" << endl;
	return LCS[l1][l2];
}

void counterspell(Spell *spell)
{
	if(dynamic_cast<Fireball *>(spell) != NULL)
		dynamic_cast<Fireball *>(spell)->revealFirepower();

	else if(dynamic_cast<Frostbite *>(spell) != NULL)
		dynamic_cast<Frostbite *>(spell)->revealFrostpower();

	else if(dynamic_cast<Thunderstorm *>(spell) != NULL)
		dynamic_cast<Thunderstorm *>(spell)->revealThunderpower();

	else if(dynamic_cast<Waterbolt *>(spell) != NULL)
		dynamic_cast<Waterbolt *>(spell)->revealWaterpower();

	else
		cout << getLCScount(spell->revealScrollName(), SpellJournal::read()) << endl;
}

class Wizard
{
    public:
        Spell *cast()
        {
            Spell *spell;
            string s;
            cin >> s;

            int power;
            cin >> power;

            if(s == "fire")
            {
                spell = new Fireball(power);
            }

            else if(s == "frost")
            {
                spell = new Frostbite(power);
            }

            else if(s == "water")
            {
                spell = new Waterbolt(power);
            }

            else if(s == "thunder")
            {
                spell = new Thunderstorm(power);
            }

            else
            {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }

            return spell;
        }
};

int main()
{
    int T;
    cin >> T;
    Wizard Arawn;

    while(T--)
    {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }

    return 0;
}
