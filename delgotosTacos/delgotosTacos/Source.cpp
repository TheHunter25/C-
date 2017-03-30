// Delgados tacos
//Hunter Gilbert
//March 30, 2017
#include <iostream>
#include <string>

int main()
{
	double tacoPrice = 0.99;
	double burritoPrice = 1.99;
	double drinkPrice = 1.50;
	double burgerPrice = 2.50;
	double friePrice = 1.75;
	double pizzaPrice = 2.75;
	double cheeseCurdPrice = 1.75;
	double MexicanRicePrice = 1.25;
	double enchaladaPrice = 5.75;
	double chimichangaPrice = 4.45;
	
		const double taxRate = 1.075;

	double tacoOrdered;
	double burritoOrdered;
	double drinkOrdered;
	double total;
	double totalWithTax;
	double tacoTotal, burritoTotal, DrinkTotal, burgerOrdered, frieordered, pizzaOrdered, CheeseCurdOrdered, mexicanRiceOrdered, enchaladaOrdered,chimichangaOrdered;
	double burgerTotal, frieTotal, pizzaTotal, CheesecurdTotal, MexicanRiceTotal, enchaladaTotal, chimichangaTotal;

	std::cout << "Welcome to delgados Tacos, where we make the dos in Delgados." << std::endl;
	
	std::cout << "*********************************************" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*   ****                                    *" << std::endl;
	std::cout << "*   *  *                                    *" << std::endl;
	std::cout << "*   ****                                    *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*********************************************" << std::endl;
	std::cout << "How many taco's do your want ?" ;
	std::cin >> tacoOrdered;
	
	std::cout << "how many burritos do you want?";
	std::cin >> burritoOrdered;

	std::cout << "How many Drink's do you want?";
	std::cin >> drinkOrdered;

	std::cout << "how many burgers do you want?";
	std::cin >> burgerOrdered;

	std::cout << "How many fries do you want?";
	std::cin >> frieordered;

	std::cout << "How many pizza's do you want?";
	std::cin >> pizzaOrdered;

	std::cout << "How many Cheese curds do you want?";
	std::cin >> CheeseCurdOrdered;

	std::cout << "How many mexican Rice servings do you want?";
	std::cin >> mexicanRiceOrdered;

	std::cout << "How many enchalada's do you want?";
	std::cin >> enchaladaOrdered;

	std::cout << "how many chimichanga's do you want?";
	std::cin >> chimichangaOrdered;

	burgerTotal = burgerOrdered * burgerPrice;
	
	frieTotal = frieordered * friePrice;
	
	pizzaTotal = pizzaOrdered * pizzaPrice;
	
	CheesecurdTotal = CheeseCurdOrdered *  cheeseCurdPrice;
	
	MexicanRiceTotal = mexicanRiceOrdered * MexicanRicePrice;
	
	enchaladaTotal = enchaladaOrdered * enchaladaPrice;
	
	chimichangaTotal = chimichangaOrdered * chimichangaPrice;

	tacoTotal = tacoOrdered * tacoPrice;
	
	burritoTotal = burritoOrdered * burritoPrice;
	
	DrinkTotal = drinkOrdered * drinkPrice;

	total = tacoTotal + burritoTotal + DrinkTotal + burgerTotal + frieTotal + pizzaTotal + CheesecurdTotal + MexicanRiceTotal + enchaladaTotal + chimichangaTotal;
	std::cout << "Your total for all items entered is $" << total << std::endl;
}