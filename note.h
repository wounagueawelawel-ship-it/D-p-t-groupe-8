#ifndef NOTE_H
#define NOTE_H

#include <stdio.h>
#define MAX 100

typedef struct {
	int elements[100];
	int taille;
} Liste;

Liste creer();
Liste ajouterEnQueue(Liste l, int x);
Liste ajouterEnTete(Liste l, int x);
Liste inserer(Liste l, int i, int x);
int rechercher (Liste l, int x);
void afficher(Liste l);
double moyenne(Liste l);
int maximum(Liste l);

#endif
