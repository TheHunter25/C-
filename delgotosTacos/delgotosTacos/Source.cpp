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

	const double taxRate = 1.075;

	double tacoOrdered;
	double burritoOrdered;
	double drinkOrdered;
	double total;
	double totalWithTax;
	double tacoTotal, burritoTotal, DrinkTotal;

	std::cout << "Welcome to delgados Tacos, where we make the dos in Delgados." << std::endl;
	
	std::cout << "*********************************************" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "*                                           *" << std::endl;
	std::cout << "How many taco's do your want ?" ;
	std::cin >> tacoOrdered;
	
	std::cout << "how many burritos do you want?";
	std::cin >> burritoOrdered;

	std::cout << "How many Drink's do you want?";
	std::cin >> drinkOrdered;

	tacoTotal = tacoOrdered * tacoPrice;
	
	burritoTotal = burritoOrdered * burritoPrice;
	
	DrinkTotal = drinkOrdered * drinkPrice;

	total = tacoTotal + burritoTotal + DrinkTotal;
	std::cout << "Your totl for all items entered is $" << total << std::endl;
}