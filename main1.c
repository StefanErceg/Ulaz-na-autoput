#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void korisnicki_meni_ulaz()
{
    int broj;
    int uredjaj; //argument koji prima funkcija za izdavanje potvrde o ulasku na autoput

    do
    {
       printf("\n----------------------------------------------------------------------------------------------------------\n");
       printf("Izaberite opciju:\n1 - Izdavanje potvrde o ulasku na autoput\n2 - Pomoc\n3 - Odjava sa sistema\n0 - Kraj\n\n");
       printf("----------------------------------------------------------------------------------------------------------\n");
       scanf("%d", &broj);

       if(broj==1) //ako je korisnik izabrao opciju za izdavanje potvrde o ulasku na autoput
       {
           potvrda(uredjaj);
           printf("\nZahtjev je uspjesno obavljen!\n");
       }

    else if(broj==2) //ako je korisnik izabrao opciju za pomoc
    {
        printf("\nNakon sto je prijava na sistem prosla uspjesno, korisniku se prikazuje meni sa opcijama za rad na ulazu na autoput, koji ukljucuje: izdavanje potvrde o ulasku na autoput, pomoc pri koristenju sistema i odjavu sa sistema.\nSvaka od prethodno navedenih opcija numerisana je brojevima 1, 2, 3 i 0, respektivno. U skladu sa potrebom, korisnik unosi jedan od ponudjenih brojeva, koji simbolizuje zeljenu radnju. Mogucnost odabira traje dok se ne unese 0 za kraj.\nPri ulasku na autoput, korisnik je duzan izdati potvrdu o ulasku, te u skladu s tim treba izabrati opciju 1.\n");
    }

    else if(broj==3) //ako je korisnik izabrao opciju za odjavu sa sistema
    {
        system("cls");
    }

    else if(broj!=0)
        printf("Greska pri odabiru opcije, pokusajte ponovo!\n");
    }
    while(broj!=0);

    printf("Kraj!\n");
    printf("----------------------------------------------------------------------------------------------------------\n");
}
