#include<iostream>
#include"averageApartmentHouse.h"
extern int quantityAverageApartmentHouse;


void averageApartmentHouse::iAverageApartmentHouse(int populationAvarageApartmentHouse) {
	quantityAverageApartmentHouse = ceil(populationAvarageApartmentHouse / 15.0);
}
