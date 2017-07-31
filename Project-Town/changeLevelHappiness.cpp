#include <iostream>

#include "changeLevelHappiness.h"
extern int levelHappiness;

using namespace std;

void changeLevelHappiness::iChangeLevelHappiness() {
	levelHappiness = -10 + rand() % 21;
}