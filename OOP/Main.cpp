#include <iostream>
#include <vector>
#include "Animal.h"
#include "Bird.h"
#include "Reptile.h"

using namespace std;

int Main()
{
	Animal an;
	an.Speak();
	cout << sizeof(Animal) << endl;

	Bird robin(12.0f);
	robin.Speak();
	cout << sizeof(Bird) << endl;

	std::vector<Animal*> animals;
	animals.push_back(new Bird());
	animals.push_back(new Bird());
	animals.push_back(new Reptile());

	for (Animal* animal : animals)
	{
		animal->Speak();
	}
	animals.clear();
}