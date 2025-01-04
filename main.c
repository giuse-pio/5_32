#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    float voti[20];

    float VotomMax = 0, MediaVoti = 0, SommaVoti = 0;

    int NumMatVotoMax = 0, crediti = 0, SommaCrediti = 0;

    srand(time(NULL));

    printf("inserisci 20 voti :");

    for (int i = 0; i < 20; i++) {
        do {
            scanf("%f", &voti[i]);
        } while (voti[i] < 2 || voti[i] > 10);

        if (voti[i] > VotomMax) {
            VotomMax = voti[i];
        }

        if (voti[i] == VotomMax) {
            NumMatVotoMax++;
        }

        SommaVoti += voti[i];
        MediaVoti = SommaVoti / 20;

        if (voti[i] == 6) {
            crediti = (rand() % 2) + 7; // Genera casualmente i crediti tra 7 e 8
        }
        else if (voti[i] > 6 && voti[i] <= 7) {
            crediti = (rand() % 2) + 8; // Genera casualmente i crediti tra 8 e 9
        }
        else if (voti[i] > 7 && voti[i] <= 8) {
            crediti = (rand() % 2) + 9; // Genera casualmente i crediti tra 9 e 10
        }
        else if (voti[i] > 8 && voti[i] <= 9) {
            crediti = (rand() % 2) + 10; // Genera casualmente i crediti tra 10 e 11
        }
        else if (voti[i] > 9 && voti[i] <= 10) {
            crediti = (rand() % 2) + 11; // Genera casualmente i crediti tra 11 e 12
        }
        else {
            crediti = 0;
        }

        SommaCrediti += crediti;

    }
    printf("voto max = %.2f\n", VotomMax);
    printf("le materie con il voto piu' alto sono %d\n", NumMatVotoMax);
    printf("la media di 20 voti e' %.2f\n", MediaVoti);
    printf("i crediti totale sono %d\n", SommaCrediti);
}
