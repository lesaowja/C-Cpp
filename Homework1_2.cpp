#include <iostream>
#include <string>
using namespace std;

struct STUDENT {
	string name;
	int  age;
};

struct STUDENTS {
	STUDENT student[2];
};

int main() {
	STUDENTS students;
	STUDENT man1;
	STUDENT man2;
	man1.age = 16;
	man1.name = "Lesa";
	man2.age = 18;
	man2.name = "Owja";
	students.student[0] = man1;
	students.student[1] = man2;
	for (int i = 0; i < 2; i++)
	{
		cout << students.student[i].name << endl;
		cout << students.student[i].age << endl;
	}
	return 0;
}