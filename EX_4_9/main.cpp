#include <iostream>

using namespace std;

double retrait(double& solde_actuel, const double& montant_retrait);

int main() {
	double solde = 500, retrait_effectif;
	cout << "Solde initial : " << solde << endl;
	retrait_effectif = retrait(solde, 300);
	cout << "Retrait effectue : " << retrait_effectif << ", Nouveau solde : " << solde << endl;
	retrait_effectif = retrait(solde, 300);
	cout << "Retrait effectue : " << retrait_effectif << ", Nouveau solde : " << solde << endl;
	return 0;
}

double retrait(double& solde_actuel, const double& montant_retrait)
{
	double retrait_effectif;

	if (solde_actuel - montant_retrait < 0)
		retrait_effectif = solde_actuel;
	else
		retrait_effectif = montant_retrait;

	solde_actuel -= retrait_effectif;

	return retrait_effectif;
}