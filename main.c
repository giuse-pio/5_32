#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;
    printf("inserisci il numero di voti:");
    do {
        scanf("%d", &n);
        if (n < 1 || n > 20) {
            printf("Il numero di voti deve essere compreso tra 1-20\n");
        }
    } while (n < 1 || n > 20);
    float voti[n];

    float VotomMax = 0, MediaVoti = 0, SommaVoti = 0;

    int NumMatVotoMax = 0, crediti = 0, SommaCrediti = 0;

    srand(time(NULL));

    printf("inserisci %d voti :", n);

    for (int i = 0; i < n; i++) {
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
        MediaVoti = SommaVoti / n;

        if (MediaVoti == 6) {
            crediti = (rand() % 2) + 7; // Genera casualmente i crediti tra 7 e 8
        } else if (MediaVoti > 6 && MediaVoti <= 7) {
            crediti = (rand() % 2) + 8; // Genera casualmente i crediti tra 8 e 9
        } else if (MediaVoti > 7 && MediaVoti <= 8) {
            crediti = (rand() % 2) + 9; // Genera casualmente i crediti tra 9 e 10
        } else if (MediaVoti > 8 && MediaVoti <= 9) {
            crediti = (rand() % 2) + 10; // Genera casualmente i crediti tra 10 e 11
        } else if (MediaVoti > 9 && MediaVoti <= 10) {
            crediti = (rand() % 2) + 11; // Genera casualmente i crediti tra 11 e 12
        } else {
            crediti = 0;
        }

        SommaCrediti += crediti;
    }
    printf("voto max = %.2f\n", VotomMax);
    printf("le materie con il voto piu' alto sono %d\n", NumMatVotoMax);
    printf("la media di %d voti e' %.2f\n", n, MediaVoti);
    printf("i crediti totale sono %d\n", SommaCrediti);


    for (int i = 1; i < n + 1; i++) {
        int Scambi = 0;

        for (int j = 0; j < n - i; j++) {
            if (voti[j] > voti[j + 1]) {
                float temp = 0;
                temp = voti[j];
                voti[j] = voti[j + 1];
                voti[j + 1] = temp;
                Scambi = 1;
            }
        }
        if (Scambi == 0)
            break;
    }

    for (int i = 0; i < n; i++) {
        printf("%.2f ", voti[i]);
    }
}
