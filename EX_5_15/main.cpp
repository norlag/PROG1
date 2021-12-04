#include <vector>
#include <iostream>
#include <cstdlib>


bool tousImpairs(const std::vector<int> &vector);

int main()
{
	std::vector<int> monVecteur {1, 2, 3};
	std::vector<int> monVecteur2 {2, 2, 6};

	std::cout << tousImpairs(monVecteur) << std::endl;
	std::cout << tousImpairs(monVecteur2) << std::endl;
	std::cout << tousImpairs({1, 3}) << std::endl;

	return EXIT_SUCCESS;
}

bool tousImpairs(const std::vector<int> &vector)
{
	if(!vector.empty())
	{
		for(const int &n : vector)
		{
			if(n % 2 == 0)
				return false;
		}
	}

	return true;
}
