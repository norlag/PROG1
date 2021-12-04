#include <iostream>
#include <cstdlib>
#include <vector>

std::vector<int> concatenation(const std::vector<int>& vec1, const std::vector<int>& vec2)
{
	std::vector<int> aVec;

	aVec.reserve(vec1.size() + vec2.size());

	for(std::vector<int>::const_iterator i = vec1.cbegin(); i != vec1.cend(); ++i)
	{
		aVec.push_back(*i);
	}
	
	for(std::vector<int>::const_iterator i = vec2.cbegin(); i != vec2.cend(); ++i)
	{
		aVec.push_back(*i);
	}

	return aVec;
}

void afficher(const std::vector<int>& v) { 
	std::cout << "["; 
   for (size_t i = 0; i < v.size(); ++i) { 
      if (i > 0) 
         std::cout << ", "; 
		std::cout << v.at(i); 
   } 
	std::cout << "]"; 
}

int main()
{
	afficher(concatenation({}, {}));
	afficher(concatenation({1, 2}, {1}));
	afficher(concatenation({1, 2}, {1, 3, 5}));

	return EXIT_SUCCESS;
}
