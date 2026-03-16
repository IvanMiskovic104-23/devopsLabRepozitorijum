#include <stdio.h>

int main() {
    char ime[20];
    char prezime[20];
    char indeks[10];
    int godina;

    printf("Unesite ime: ");
    scanf("%s", ime);

    printf("Unesite prezime: ");
    scanf("%s", prezime);

    printf("Unesite broj indeksa: ");
    scanf("%s", indeks);

    printf("Unesite godinu rodjenja: ");
    scanf("%d", &godina);

    printf("\n Informacije o studentu: \n");
    printf("Ime i prezime: %s %s\n", ime, prezime);
    printf("Broj indeksa: %s\n", indeks);
    printf("Godina rodjenja: %d\n", godina);

    if ((godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0)) {
        printf("Rodjen si u prestupnoj godini.\n");
    } else {
        printf("Nisi rodjen u prestupnoj godini.\n");
    }

    printf("Modifikacija");
    return 0;
}
