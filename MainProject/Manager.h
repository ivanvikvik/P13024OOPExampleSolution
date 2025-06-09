#include "Group.h"
#include "Worker.h"

// Function class
class Manager : public Worker
{
public:
	Manager() {
		cout << "Manager default constructor" << endl;

	}

	~Manager() {
		cout << "Manager destructor" << endl;
	}
	static Group getBestStudents(Group group);
	static Group getWorstStudents(Group group);
};

