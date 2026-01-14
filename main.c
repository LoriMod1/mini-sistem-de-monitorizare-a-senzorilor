#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    int n;
    RAPORT* senzor;
    double* indice_de_confort;
    double min, max;

    printf("Cati senzori se afla?\n");
    scanf("%d", &n);

    senzor = citire_date_senzor(n);

    printf("Introduceti valorile min si max:\n");
    scanf("%lf %lf", &min, &max);

    afisare_date(senzor, n);

    indice_de_confort = calculare_indici_de_confort(senzor, n);

    afisare_confort(indice_de_confort, n);

    calculare_extreme(indice_de_confort, n, max, min, senzor);

    dealocare_memorie(senzor, n);
    free(indice_de_confort);

    return 0;
}
