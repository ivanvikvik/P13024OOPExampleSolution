#include "Initializer.h"

const string Initializer::NAMES[]{ "Anna", "Alex", "Vlad" , "Matvey" ,
	"Ivan" , "Timur", "Timofey", "Nikita", "Vladimir",
	"Bogdan", "Rodion", "Alexey", "Daniil",
	"Victor", "Kate", "Alice", "Maks" };

void Initializer::init(Group group) {
	if (list == nullptr && count > 0) {
		list = new Student[count];
	}

	for (int i = 0; i < count; i++)
	{
		list[i].setName(NAMES[rand() % 17]);
		list[i].setAge(rand() % (MAX_AGE - MIN_AGE + 1) + minAge);
		for (int j = 0; j < list[i].getCountMark(); j++)
		{
			//list[i].getMarks()[j] = rand() % (maxMark - minMark + 1) + minMark;
			//*(list[i].getMarks() + j) = rand() % (maxMark - minMark + 1) + minMark;
			list[i].setMark(j, rand() % (maxMark - minMark + 1) + minMark);
		}
	}
}