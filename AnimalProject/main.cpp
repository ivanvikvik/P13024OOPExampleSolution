#include "AnimalStudio.h"
#include "Cat.h"
#include "Dog.h"
#include "Crocodile.h"

int main() {
	AnimalStudio studio;
	
	Animal** animals;
	int size = 5;
	/*animals = new Animal * [size] {&dog1, & cat1, & animal, & dog2, & dog3,
		& cat2, & cat3, & crocodile};*/

	animals = new Animal * [size] {new Dog("Sharly"), new Cat("Adel"),
		new Crocodile("Aligator")};


	studio.justDoIt(animals, size);

	return 0;
}