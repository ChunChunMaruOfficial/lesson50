#include "Main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;
};

int main() {
	Student alex;
	Student anna;

	alex.name = "Alex";
	alex.surname = "NWord";
	alex.age = 2;
	alex.avg_mark = 10;

	anna.name = "Anna";
	anna.surname = "Women(((";
	anna.age = -2;
	anna.avg_mark = 1;

	if (alex.avg_mark > anna.avg_mark) {
		cout << alex.name << alex.surname << "Is the best student" << endl;
	}
	else {
		cout << anna.name << anna.surname << "Is the best student" << endl;
	}
	return 0;
}
