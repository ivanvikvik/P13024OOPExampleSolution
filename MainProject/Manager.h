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
	//	Group getBestStudents(Group group);
	//	Group getWorstStudents(Group group);
};

