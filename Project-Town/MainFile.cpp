#include<iostream>
#include <time.h>
#include"averageApartmentHouse.h"
#include"averageFoodShop.h"
#include"changeLevelHappiness.h"

extern int quantityAverageApartmentHouse;
extern int quantityAverageFoodShop;
extern int levelHappiness;



const int winPopulationTown = 100;

using namespace std;


int main() {
	cout << "Welome in Project Town" << endl;
	cout << "Print population: ";
	int populationTown;
	cin >> populationTown;
	averageApartmentHouse mainAverageApartmentHouse;  
	mainAverageApartmentHouse.iAverageApartmentHouse(populationTown);
	averageFoodShop mainAverageFoodShop;
	mainAverageFoodShop.iAverageFoodShop(populationTown);
	cout << "Start quantity Average Apartment House: " << quantityAverageApartmentHouse << endl;
	cout << "Start qantity Avarage Food Shop: " << quantityAverageFoodShop << endl;
	cout << "Start simulation Town?(any key)" << endl; 
	system("pause");
	

	int constChangePopulationTown = 0;
	int changePopulationTown; 

	int monthTown = 0;
	int yearTown = 0;
	int maxQuantityAverageApartmentHouse = quantityAverageApartmentHouse;
	int maxQuantityAverageFoodShop = quantityAverageFoodShop;

	changeLevelHappiness mainChangeLevelHappiness;

	srand(time(NULL));

	while (populationTown < winPopulationTown  && populationTown > 0) {


		mainChangeLevelHappiness.iChangeLevelHappiness();
		cout << "Level Happiness this month: " << levelHappiness << endl;

		changePopulationTown = constChangePopulationTown + levelHappiness;
		cout << "Change Population Town this month: " << changePopulationTown << endl; 

		//if (populationTown - abs(changePopulationTown) > 0) {}

		populationTown = populationTown + changePopulationTown;

		/*
		else {
		populationTown = 0;
		}*/
		cout << "Population Town this month: " << populationTown << endl; 
		mainAverageApartmentHouse.iAverageApartmentHouse(populationTown);
		cout << "Average Apartment House this month: " << quantityAverageApartmentHouse << endl;

		mainAverageFoodShop.iAverageFoodShop(populationTown);
		cout << "Average Food Shop this month: " << quantityAverageFoodShop << endl;

		if (maxQuantityAverageApartmentHouse < quantityAverageApartmentHouse) {
			maxQuantityAverageApartmentHouse = quantityAverageApartmentHouse;
		}

		if (maxQuantityAverageFoodShop < quantityAverageFoodShop) {
			maxQuantityAverageFoodShop = quantityAverageFoodShop;
		}

		monthTown++;
		if (monthTown > 0 && monthTown % 12 == 0) {
			cout << "Happy New Year!)" << endl;
			yearTown++;
		}
	}
	cout << "Game over" << endl;
	if (populationTown >= winPopulationTown) {
		cout << "Town win" << endl;
	}
	else {
		populationTown = 0;
		cout << "Town died" << endl;
	}
	system("pause");
	cout << "Population Town: " << populationTown << endl;
	cout << "Average Apartment House : " << quantityAverageApartmentHouse << endl;
	cout << "Maximum Average Apartment House: " << maxQuantityAverageApartmentHouse << endl;
	cout << "Average Food Shop: " << quantityAverageFoodShop << endl;
	cout << "Maximum Average Food Shop: " << maxQuantityAverageFoodShop << endl;
	cout << yearTown << " Years " << monthTown - 12 * yearTown << " Month in Town" << endl;

	cout << endl;
	cout << "Now it's all(#_#)" << endl;
	system("pause");

	return 0;
}