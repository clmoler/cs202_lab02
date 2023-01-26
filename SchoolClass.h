class SchoolClass
{
public:
        SchoolClass(string name, vector<int> time, int days, int credits, string subject, string building);

	bool partOfMajor(Student person)
        bool partOfMinor(Student person)
        int timeUntil(Date currentTime)
	
	string getName();
	vector<int> getTime();
	int getDays();
	int getCredits();
	string getSubject();
	string getBuilding();
private:
        string _name;
        vector<int> _time;
        int _days; // Monday = 1, Tuesday = 2, Wednesday = 4, Thursday = 8, Friday = 16. Or choose alternate implementation thats easier to wrap your head around.
        int _credits;
        string _subject;
        string _building;
}
