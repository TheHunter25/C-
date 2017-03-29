// Lost Fortune
//A personalized adventure

#include <iostream>
#include <string>

int main()
{
	const int GOLD_PIECES = 900;
	int adventure, killed, survivors, years;
	std::string leader, boat;

	//get the information
	std::cout << "welcome to Lost Fortune" << std::endl;
	std::cout << "Please enter the following for your personalized adventure" << std::endl;

	std::cout << "enter the number of Adventurers in your party: ";
	std::cin >> adventure;

	std::cout << "enter a number , smaller than the first ";
	std::cin >> killed;

	survivors = adventure - killed;
	years = adventure + killed;

	std::cout << "Enter your last name:";
	std::cin >> leader;

	std::cout << "Enter a noun: ";
	std::cin >> boat;

	//The story so far.
	std::cout << "/nA brave group of " << adventure << "set out on a quest" << std::endl;
	std::cout << "--in of the lost treasure of the ancient Dwarves." << std::endl;
	std::cout << "The group was led by the legendary paladain." << leader << std::endl;

	std::cout << "/nAlong the way, a band of mauauding ogres ambushed the party. " << std::endl;
	std::cout << "All fought bravely under the command of " << leader << std::endl;
	std::cout << ", and the ogres were defeated, but at a cost." << std::endl;
	std::cout << "Of the adventure, " << killed << "were vanquished, " << std::endl;

	std::cout << "leaving just " << survivors << "in the group. /n" << std::endl;
	std::cout << "/nThe party was about to give up all hope." << std::endl;
	std::cout << "But while laying the deceased to rest, " << std::endl;
	std::cout << "they stumbled upon the burried fortune. " << std::endl;
	std::cout << "So the adventurers split " << GOLD_PIECES << "gold pieces." << std::endl;
	std::cout << leader << "held on to the extra " << (GOLD_PIECES % survivors) << std::endl;
	std::cout << "pieces to keep things fair of course. /n";
	std::cout << "the leader" << leader << "left on the great boat " << boat << std::endl;
	std::cout << "And was not seen for " << years << "years." << std::endl;


}