#include "Teacher.h"

int main() {
	Student* list = nullptr;
	int size;

	cout << "Input numbers of students: ";
	cin >> size;

	list = new Student[size];

	cout << "Input data of students:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Student number " << i + 1 << ":\n";
		cout << "name: ";
		cin >> list[i].name;

		cout << "age: ";
		cin >> list[i].age;

		cout << "average mark: ";
		cin >> list[i].mark;

		cout << "is alive (y/n): ";
		char answer;
		cin >> answer;

		list[i].alive = islower(answer) == 'y';
	}

	Teacher teacher;

	Student result = teacher.getAllBestStudents(list, size);

	string msg = result.alive ? "Best student is " + result.name 
		: "No best students";

	cout << msg;

	return 0;
}