char c = 'A';
int n = 7;
int a = -2;
unsigned b = 1;
long p = 10;
float x = 1.25f;
double z = 5.5;

1) n + c + p
2) 2 * x + c
3) (char) n + c
4) (float) z + n / 2
5) a + b


1) n converti en int, Valeur du charactère 'A' = 97 converti de char à int
Résultat du calcul 7 + 97 + 10 = 114 en long

2) constante 2 en int converti en float et le 'A' = 97 en char promu en float
Résultat final : 2.5 + 65.0 = retourne 67.5 en float

3) n = 7 int converti en char par cast
Résultat char + char = 'H' en char

4) z en double converti en float, ensuite division entière n/2 qui fait un int qui vaut 3
3 est converti en float pour faire l'addition avec z
Résultat final : 5.5 + 3.0 = 8.5 en float

5) Opérande signée est converti en non signé : int, unsigned int -> unsigned int
Résultat -1 converti en unsigned...