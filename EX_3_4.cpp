1) 

if (prixActuel >= 100) {
 nouveauPrix = prixActuel - 20;
 cout << "Nouveau prix = " << nouveauPrix << endl;
} else {
 nouveauPrix = prixActuel - 10;
 cout << "Nouveau prix = " << nouveauPrix << endl;
}

CORRECTIF :

nouveauPrix = prixActuel - 10;

if (prixActuel >= 100) {
 nouveauPrix -= 10;
}

cout << "Nouveau prix = " << nouveauPrix << endl;

2)

if (prixActuel < 100) {
 nouveauPrix = prixActuel - 10;
} else if (prixActuel = 100) {
 nouveauPrix = prixActuel;
} else {
 nouveauPrix = prixActuel + 10;
}

CORRECTIF :

nouveauPrix = prixActuel;

if (prixActuel < 100) {
 nouveauPrix -= 10;
} else if (prixActuel > 100) {
 nouveauPrix += 10;
}

3)

if (prixActuel < 100) {
 nouveauPrix = prixActuel - 10;
} else if (prixActuel >= 100 && prixActuel <= 150) {
 nouveauPrix = prixActuel - 15;
} else {
 nouveauPrix = prixActuel - 20;
}

CORRECTIF :

nouveauPrix = prixActuel - 10;

if (prixActuel >= 100 && prixActuel <= 150) {
 nouveauPrix -= 5;
} else if (prixActuel > 150) {
 nouveauPrix -= 10;
}

4)

if (prixActuel < 100) {
 nouveauPrix = prixActuel - 10;
} else if (prixActuel >= 100) {
 nouveauPrix = prixActuel - 20;
}

CORRECTIF :

nouveauPrix = prixActuel - 10;

if (prixActuel >= 100) {
 nouveauPrix -= 10;
}

5)

if (prixActuel >= 100) {
 droitAuRabais = true;
} else {
 droitAuRabais = false;
}

CORRECTIF :

droitAuRabais = prixActuel >= 100;

6)

if (prixActuel >= 100) {
 pourcentRabais = 5;
} else if (prixActuel > 500) {
 pourcentRabais = 10;
} else if (prixActuel > 1000) {
 pourcentRabais = 15;
} else {
 pourcentRabais = 0;
}

CORRECTIF : 

if (prixActuel > 1000) {
 pourcentRabais = 15;
} else if (prixActuel > 500) {
 pourcentRabais = 10;
} else if (prixActuel >= 100) {
 pourcentRabais = 5;
} else {
 pourcentRabais = 0;
}