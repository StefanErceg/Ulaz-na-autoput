#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void potvrda(int brUredjaja)
{
    ++brPotvrde;
    time_t trenutno_vrijeme;
    char* vrijeme;
    trenutno_vrijeme = time(NULL);
    vrijeme = ctime(&trenutno_vrijeme);

    FILE *fp;
    if((fp=fopen("potvrda.txt", "w")) !=NULL)
    {
        fprintf(fp, "\n                         -ROUTE 66-            ");
        fprintf(fp, "\n\n   POTVRDA O ULASKU NA AUTOPUT\n");
        fprintf(fp,"\n Datum   : ");
        fprintf(fp,"%s ", vrijeme);
        fprintf(fp,"\n Uredjaj : ");
        fprintf(fp,"%d ", brUredjaja);
        fprintf(fp,"\n ------------------------------------------------------------\n");
        fprintf(fp,"\n                    POTVRDA br. %d ", brPotvrde);
        fprintf(fp,"\n ------------------------------------------------------------\n");
        fprintf(fp,"\n              HVALA, SRECAN PUT!        \n\n");
        fclose(fp);
    }
}
