#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	FILE *dat;
	int x,uredjaj, pom_uredjaj;

	printf("Kreiranje naloga - 1\n");
	printf("Prijava - 2\n");

	do {
		printf("Izaberite opciju:"); scanf("%d", &x);
		if (x < 1 || x>3) printf("Pogresan unos.");
	   } while (x < 1 || x>2);
	   printf("x=%d\n",x);

char korisnicko_ime[11], lozinka[11], k_ime[11], loz[11];
printf("Korisnicko ime:");   scanf("%s", &korisnicko_ime);
printf("Lozinka:");          scanf("%s", &lozinka);
do { printf("Uredjaj: ");    scanf("%d", &uredjaj); } while (uredjaj<1 || uredjaj >6);
if(x==1)
{
int a=0;
   if((dat=fopen("rijecnik1.txt", "r")) != NULL)
   {
      while(fscanf(dat, "%s %s %d", &k_ime, &loz, &pom_uredjaj)!=EOF)
      {
         if(strcmp(k_ime, korisnicko_ime)==0 && strcmp(loz, lozinka)==0)
         {
            printf("%s %s\n", k_ime, loz);  a=1;
         }
      }
   }
   fclose(dat);


   if(a==0)
   {
      printf("Nije pronadjeno podudaranje, uspjesno ste kreirali nalog!!!\n");
      if((dat=fopen("rijecnik1.txt", "a"))!=NULL)
      fprintf(dat, "%s %s %d\n", korisnicko_ime, lozinka, uredjaj);
      fclose(dat);
   }
   if(a==1)
   {
        printf("Pronadjeno je podudaranje, postoji nalog sa istim podacima!!!\n");
        uredjaj=pom_uredjaj;
    }
}

if(x==2)
{
int a=0;
   if((dat=fopen("rijecnik1.txt", "r")) != NULL)
   {
      while(fscanf(dat, "%s %s %d", &k_ime, &loz, &uredjaj)!=EOF)
      {
         if(strcmp(k_ime, korisnicko_ime)==0 && strcmp(loz, lozinka)==0)
         {
            printf("%s %s\n", k_ime, loz);  a=1;
         }
      }
   }
   fclose(dat);


   if(a==0) printf("Nije pronadjeno podudaranje, pokusajte ponovo!!!\n");
   if(a==1) printf("Pronadjeno je podudaranje, prijavljeni ste!!!\n");
}
korisnicki_meni_ulaz(uredjaj);
system("pause");

}
