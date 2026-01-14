#ifndef HEADER_H
#define HEADER_H

typedef struct {
    int id_senzor;
    int numar_masuratori_senzor;
    double *temp_senzor;
    double *umiditate_senzor;
    double *presiune_atmosferica;
} RAPORT;

RAPORT* citire_date_senzor(int n);
void afisare_date(RAPORT *senzor, int n);
double* calculare_indici_de_confort(RAPORT *s, int n);
void afisare_confort(double* indice, int n);
void dealocare_memorie(RAPORT *s, int n);
void calculare_extreme(const double *conf, int n, double maxim, double minim, const RAPORT *s);

#endif /* HEADER_H */
