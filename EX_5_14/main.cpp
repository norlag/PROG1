#include <iostream>
#include <cstdlib>

using namespace std;

bool contient(int first_tab[], size_t first_tab_size, int second_tab[], size_t second_tab_size);
bool egalite(int first_tab[], size_t first_tab_size, int second_tab[], size_t second_tab_size);

int main()
{
	int tab1[] = {3, 3, 1, 1, 2, 1};	
	int tab2[] = {1, 2, 3};

	cout << egalite(tab1, 6, tab2, 3) << endl;
	cout << egalite(tab2, 3, tab1, 6) << endl;

	return EXIT_SUCCESS;
}


bool egalite(int first_tab[], size_t first_tab_size, int second_tab[], size_t second_tab_size)
{
	int* smaller_tab;
	size_t smaller_tab_size;
	int* bigger_tab;
	size_t bigger_tab_size;

	if(first_tab_size > second_tab_size)
	{
		smaller_tab = second_tab;
		smaller_tab_size = second_tab_size;
		bigger_tab = first_tab;
		bigger_tab_size = first_tab_size;
	}
	else
	{
		smaller_tab = first_tab;
		smaller_tab_size = first_tab_size;
		bigger_tab = second_tab;
		bigger_tab_size = second_tab_size;
	}

	return ((first_tab_size == 0 && second_tab_size == 0) ||
		(contient(smaller_tab, smaller_tab_size, bigger_tab, bigger_tab_size) && 
		contient(bigger_tab, bigger_tab_size, smaller_tab, smaller_tab_size)));	
}

bool contient(int first_tab[], size_t first_tab_size, int second_tab[], size_t second_tab_size)
{
	bool found;

	for(size_t i = 0; i < first_tab_size; ++i)
	{
		found = false;
		for(size_t j = 0; j < second_tab_size; ++j)
		{
			if(first_tab[i] == second_tab[j])
			{
				cout << "Found " << first_tab[i] << endl;
				found = true;
				break;
			}
		}

		if(!found)
			return false;
	}
	return true;
}
