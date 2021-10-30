// Soit la boucle for suivante :

for (; i < 10; ++i) {cout << i << endl;}

/* Récrire la boucle for ci-dessus, en utilisant : */
/* a) une boucle while */
while(i < 10)
{
    cout << i << endl;
    ++i;
}

/* b) une boucle do… while */
if(i < 10)
{
    do
    {
        cout << i << endl;
        ++i;
    } while(i < 10);
}

// Soit la boucle while suivante :

while (i-- > 10) {cout << i << endl;}

/* Récrire la boucle while ci-dessus, en utilisant :
/* a) une boucle for */
for(;i-- > 10;)
{
    cout << i << endl;
}

/* b) une boucle do… while */
if(i-- > 10)
{
    do
    {
        cout << i << endl;
    } while(i-- > 10);
}
