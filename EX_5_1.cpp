1) int valeurs[10]; // JUSTE
 
2) const unsigned TAILLE = 10; 
int valeurs[TAILLE]; // JUSTE
 
3) unsigned taille = 10; 
int valeurs[taille]; // Evaluable à la compilation, valide
 
4) int valeurs[]; // Invalide, pas de taille indiquée
 
5) int carres[5] = {0, 1, 4, 9, 16}; // Valide 
 
6) int carres[] = {0, 1, 4, 9, 16}; // Valide
 
7) int carres[5] = {0, 1, 4, 9}; // Valide
 
8) int carres[5] = {0, 1, 4, 9, 16, 25}; // Invalide, 6 valeurs
 
9) string noms[10]; // Valide