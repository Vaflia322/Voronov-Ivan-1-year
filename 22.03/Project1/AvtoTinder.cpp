#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct People {
public:
	string name;
	int count_interests;
	string* interests;
	People(string na, int cou, string* interesi) {
		name = na;
		count_interests = cou;
		interests = new string [cou];
		for (int i = 0; i < cou; i++) {
			interests[i] = interesi[i];
		}
	}
	People() {}
};

struct Sovmestimost {
public:
	string name1;
	string name2;
	int ob_interesi_count;
	Sovmestimost(string nam1, string nam2, int inter) {
		name1 = nam1;
		name2 = nam2;
		ob_interesi_count = inter;
	}
	Sovmestimost(){}
};

int main() {
	ifstream in("in.txt");
	string line;
	getline(in, line);
	int count_people = stoi(line);
	People* people = new People[count_people];
	for (int i = 0; i < count_people; i++) {
		getline(in, line);
		string Name = line;
		getline(in, line);
		int n = stoi(line);
		string* inter = new string[n];

		for (int k = 0; k < n; k++) {
			getline(in, line);
			inter[k] = line;
		}
		people[i] = People(Name, n, inter);
		delete[] inter;
	}

	const int lena = count_people * (count_people - 1) / 2;
	vector <Sovmestimost> sovmestimosti;
	for (int i = 0; i < count_people; i++) {
		for (int k = i + 1; k < count_people; k++) {
			int count = 0;
			for (int l = 0; l < people[i].count_interests;l++) {
				for (int j = 0; j < people[k].count_interests;j++) {
					if (people[i].interests[l] == people[k].interests[j]) {
						count++;
					}
				}
			}
			Sovmestimost temp = Sovmestimost(people[i].name, people[k].name, count);
			sovmestimosti.push_back(temp);
		}
	}

	
	int max_interests = sovmestimosti[0].ob_interesi_count;
	for (int i = 0; i < lena; i++) {
		if (sovmestimosti[i].ob_interesi_count > max_interests) {
			max_interests = sovmestimosti[i].ob_interesi_count;
		}
	}
	for (int i = 0; i < lena; i++) {
		if (sovmestimosti[i].ob_interesi_count == max_interests) {
			cout << sovmestimosti[i].name1 << " and " << sovmestimosti[i].name2 << " have " << sovmestimosti[i].ob_interesi_count << " common interests" << endl;
		}
	}
	delete[] people;
	return 0;
}