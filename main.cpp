#include "SchoolClass.h"

int main()
{
	SchoolClass cs202("Computer Science 202", [0, 945, 0, 945, 0], [0, 1, 0, 1, 0], 3, "Computer Science", "Duckering");
	std::cout << cs202.getName() << std::endl << cs202.getTime() << std::endl
		<< cs202.getDays() << std::endl << cs202.getCredits() << std::endl
		<< cs202.getBuilding() << std::endl;
	if(cs202.partOfMajor("Math"))
	{
		std::cout << "Part of Major (Math): True"
	}
	else
	{
		std::cout << "Part of Major (Math): False"
	}
	return 0;
}
