#include <stdio.h>

int main() {

    int ngol1, ngol2, scelta;
    printf("la partita e' iniziata\n");
    ngol1 = 0;
    ngol2 = 0;

    do {
       printf("(%d - %d)\n",ngol1, ngol2);
        do {
            printf("inserire 1 se ha segnato SQ1, 2 se ha segnato SQ2. 0 per terminare la partita\n ");
            scanf("%d", &scelta);
        } while ((scelta < 0) || (scelta > 2));
        switch (scelta) {
            case 1:
                ngol1++;
                break;
            case 2:
                ngol2++;
                break;
        }
    } while (scelta != 0);
    printf("la partita e' terminata.\n");

    if (ngol1 == ngol2) {
        printf("le squadre hanno pareggiato");
    } else if (ngol1 < ngol2) {
        printf("Ha vinto la SQ2");
    } else {
        printf("ha vinto la SQ1");
    }
    printf("\n");
    printf("(%d - %d)", ngol1, ngol2);

    return 0;
}
