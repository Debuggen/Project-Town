#include<iostream>
#include "averageFoodShop.h"

extern int quantityAverageFoodShop;


void averageFoodShop::iAverageFoodShop(int populationAverageFoodShop) {
	quantityAverageFoodShop = ceil(populationAverageFoodShop / 45.0); 
}