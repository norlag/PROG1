/*

On suppose disposer de deux entiers x et y.
Ecrire (de plusieurs manières différentes) la condition permettant de tester :
a) que nos deux entiers valent 0
b) qu'au moins l'un de nos deux entiers vaut 0
c) qu'un seul de nos deux entiers vaut 0

*/

int x, y;

// A)

if(x == 0 && y == 0);
if(!x && !y); // X/ AND Y/
if(!(x || y)); // not (X OR Y)

// B)

if(!x || !y);
if(!(x && y));

/// C)

if((!x && y) || (x && !y));
if(!(!(!x && y) && !(x && !y)));