#define _CRT_SECURE_NO_WARNINGS
#include "Mihael_Spanovic_zavrsni_head.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



void izbornikk()
{
    int i = 0;


    do
    {
        printf("\n 1.Kupnja komponenti.\n");
        printf(" 2.Kupnja racunala.\n");
        printf(" 3.Random pc for price.\n");
        printf(" 4.Povrataka u izbornik.\n");
        printf(" 5.Izlaz iz programa.\n");
           

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
        {
            kupnjakomp();
            break;
        }
        case 2:
        {
            kupnjaracunala();
            break;
        }
        case 3:
        {
            randompc();
            break;
        }
        case 4:
        {
            return;
            break;
        }
        case 5:
        {
            exit(EXIT_SUCCESS);
            break;
        }
        default:
        {
            printf("\aPonovite unos");
        }
        }
    } while (1);
}

/// ALOKACIJA MEMORIJE
PROCESOR* memoryallocProcesor(PROCESOR* array,int n)
{
    array = NULL;
    array = (PROCESOR*)calloc(n, sizeof(PROCESOR));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    { 
    return array;
    }
}
MATICNA* memoryalloMaticna(MATICNA* array, int n)
{
    array = NULL;
    array = (MATICNA*)calloc(n, sizeof(MATICNA));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}
RAM* memoryalloRAM(RAM* array, int n)
{
    array = NULL;
    array = (RAM*)calloc(n, sizeof(RAM));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}
GPU* memoryalloGPU(GPU* array, int n)
{
    array = NULL;
    array = (GPU*)calloc(n, sizeof(GPU));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}
HARD* memoryalloHARD(HARD* array, int n)
{
    array = NULL;
    array = (HARD*)calloc(n, sizeof(HARD));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}
NAPAJANJE* memoryalloPSU(NAPAJANJE* array , int n)
{
    array = NULL;
    array = (NAPAJANJE*)calloc(n, sizeof(NAPAJANJE));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}
KUCISTE* memoryalloKUCISTE(KUCISTE* array, int n)
{
    array = NULL;
    array = (KUCISTE*)calloc(n, sizeof(KUCISTE));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}
RACUNALO* memoryalloRACUNALA(RACUNALO* array, int n)
{
    array = NULL;
    array = (RACUNALO*)calloc(n, sizeof(RACUNALO));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}



///SORT
void zamjenaproc(PROCESOR* veci, PROCESOR* manji) {



    PROCESOR temp = *manji;
    *manji = *veci;
    *veci = temp;


}
void selectionSortProc(PROCESOR* sort, const int broj) {
    int min = 0;
    int x = 0;
    system("cls");
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaproc((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaproc((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }

}
void zamjenaMat(MATICNA* veci, MATICNA* manji)
{
    MATICNA temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortMaticne(MATICNA* sort, const int broj)
{
    system("cls");
    int min = 0;
    int x = 0;
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaMat((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaMat((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }
}
void zamjenaRAM(RAM* veci,RAM* manji)
{
    RAM temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortRAM(RAM* sort, const int broj)
{
    int min = 0;
    int x = 0;
    system("cls");
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaRAM((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaRAM((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }
}
void zamjenaGpu(GPU* veci, GPU* manji)
{
    GPU temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortGpu(GPU* sort, const int broj)
{
    int min = 0;
    int x = 0;
    system("cls");
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaGpu((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaGpu((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }
}
void zamjenaHARD(HARD* veci, HARD* manji)
{
    HARD temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortHARD(HARD* sort, const int broj)
{
    int min = 0;
    int x = 0;
    system("cls");
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaHARD((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaHARD((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }
}
void zamjenaPSU(NAPAJANJE* veci, NAPAJANJE* manji)
{
    NAPAJANJE temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortPSU(NAPAJANJE* sort, const int broj)
{
    int min = 0;
    int x = 0;
    system("cls");
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaPSU((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaPSU((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }
}
void zamjenaKUCISTE(KUCISTE* veci, KUCISTE* manji)
{
   KUCISTE temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortKUCISTE(KUCISTE* sort, const int broj)
{
    int min = 0;
    int x = 0;
    system("cls");
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaKUCISTE((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaKUCISTE((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }
}
void zamjenaRACUNALO(RACUNALO* veci, RACUNALO* manji)
{
    RACUNALO temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortRACUNALO(RACUNALO* sviPacijenti, const int broj) { //fix later

	int min = 0;

	for (int i = 0; i < broj - 1; i++)
	{
		min = i;

		for (int j = i + 1; j < broj; j++)
		{
			if ((sviPacijenti + j)->ukupnacijena < (sviPacijenti + min)->ukupnacijena) {
				min = j;
			}
			if(min != i){

				zamjenaRACUNALO((sviPacijenti + i), (sviPacijenti + min));
			}
		}
		
	}
}


RACUNALO kupnjakomp()
{
    system("cls");
    printf("\nDOBRODOSLI U IZBORNIK ZA KUPNJU RACUNALNIH KOMPONETNI!\n");

    int brojac = 0;
    do
    {
        int i = 0;
        printf(" \n 1.Procesori.\n");
        printf(" 2.Maticne.\n");
        printf(" 3.Radna memorija.\n");
        printf(" 4.Graficke kartice\n");
        printf(" 5.Pohrana\n");
        printf(" 6.Napajanje.\n");
        printf(" 7.Kucista.\n");
        printf(" 8.Povratak u izbornik\n");

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
        {
            int j = 0;
            printf("1.AMD procesori\n");
            printf("2.INTEL procesori\n");
            printf("Odaberite opciju:\n");
            scanf("%d", &j);
            switch (j)
            {
            case 1:
            {
                int broj = 0;
                int x = 0;
                FILE* view = NULL;
                view = fopen("ProcesoriAMD", "rb");
                if (view == NULL)
                {
                    perror("Otvaranje dokumenta");
                    return;
                }
                fseek(view, 0, SEEK_END);
                broj = ftell(view) / sizeof(PROCESOR);
                PROCESOR* procesoriAMD = NULL;
                procesoriAMD = memoryallocProcesor(procesoriAMD, broj);
                rewind(view);
                fread(procesoriAMD, sizeof(PROCESOR), broj, view);

                selectionSortProc(procesoriAMD, broj);

                for (i = 0; i < broj; i++)
                {
                    printf("\n%d %s %s %s %s %0.2f", (procesoriAMD + i)->id, (procesoriAMD + i)->ime, (procesoriAMD + i)->brojjezgri, (procesoriAMD + i)->brojtredova, (procesoriAMD + i)->clock, (procesoriAMD + i)->cijena);
                }
                printf("\nUpisite id procesora kojeg zelite kupiti:");
                fflush(stdin);
                int odabir = 0;
                scanf("%d", &odabir);
                for (i = 0; i < broj; i++)
                {
                    if ((procesoriAMD + i)->id == odabir)
                    {
                        printf("Uspjesno ste kupili procesor:%s za %0.2fKn", (procesoriAMD + i)->ime, (procesoriAMD + i)->cijena);
                        FILE* fp = NULL;
                        fp = fopen("Racuni.txt", "a+");
                        if (fp == NULL)
                        {
                            printf("Greška u izdavanju racuna!");
                            for (;;) {
                                izbornik(); break;
                            }
                        }
                        srand((unsigned)time(NULL));
                        int gornjag = 1000;
                        int donjag = 1;
                        int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                        fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                        fprintf(fp, "%d %s %s %s %s %0.2f\n", (procesoriAMD + i)->id, (procesoriAMD + i)->ime, (procesoriAMD + i)->brojjezgri, (procesoriAMD + i)->brojtredova, (procesoriAMD + i)->clock, (procesoriAMD + i)->cijena);
                        fclose(fp);
                        break;
                    }
                    else
                    {
                        printf("Procesor s tim id-om nije pronadjen!");
                        for (;;) {
                            izbornik(); break;
                        }
                        break;
                    }
                }
                fclose(view);
                free(procesoriAMD);
                break;

            }
            case 2:
            {
                int broj = 0;
                int x = 0;
                FILE* view = NULL;
                view = fopen("ProcesoriINTEL", "rb");
                if (view == NULL)
                {
                    perror("Otvaranje dokumenta");
                    return;
                }
                fseek(view, 0, SEEK_END);
                broj = ftell(view) / sizeof(PROCESOR);
                PROCESOR* procesoriINTEL = NULL;
                procesoriINTEL = memoryallocProcesor(procesoriINTEL, broj);
                rewind(view);
                fread(procesoriINTEL, sizeof(PROCESOR), broj, view);

                selectionSortProc(procesoriINTEL, broj);

                for (i = 0; i < broj; i++)
                {
                    printf("\n%d %s %s %s %s %0.2f", (procesoriINTEL + i)->id, (procesoriINTEL + i)->ime, (procesoriINTEL + i)->brojjezgri, (procesoriINTEL + i)->brojtredova, (procesoriINTEL + i)->clock, (procesoriINTEL + i)->cijena);
                }
                printf("\nUpisite id procesora kojeg zelite kupiti:");
                fflush(stdin);
                int odabir = 0;
                scanf("%d", &odabir);
                for (i = 0; i < broj; i++)
                {
                    if ((procesoriINTEL + i)->id == odabir)
                    {
                        printf("Uspjesno ste kupili procesor:%s za %0.2fKn", (procesoriINTEL + i)->ime, (procesoriINTEL + i)->cijena);
                        FILE* fp = NULL;
                        fp = fopen("Racuni.txt", "a+");
                        if (fp == NULL)
                        {
                            printf("Greška u izdavanju racuna!");
                            for (;;) {
                                izbornik(); break;
                            }
                        }
                        srand((unsigned)time(NULL));
                        int gornjag = 1000;
                        int donjag = 1;
                        int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                        fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                        fprintf(fp, "%d %s %s %s %s %0.2f\n", (procesoriINTEL + i)->id, (procesoriINTEL + i)->ime, (procesoriINTEL + i)->brojjezgri, (procesoriINTEL + i)->brojtredova, (procesoriINTEL + i)->clock, (procesoriINTEL + i)->cijena);
                        fclose(fp);
                        break;
                    }
                    else
                    {
                        printf("Procesor s tim id-om nije pronadjen!");
                        for (;;) {
                            izbornik(); break;
                        }
                        break;
                    }
                }
                free(procesoriINTEL);
                fclose(view);
                break;
            }

            default:
            {
                printf("\aPonovite unos");
            }
            }
            break;
        }
        case 2:
        {
            int j = 0;
            printf("1.AMD maticne\n");
            printf("2.INTEL maticne\n");
            printf("Odaberite opciju:\n");
            scanf("%d", &j);
            switch (j)
            {
            case 1:
            {
                int broj = 0;
                int x = 0;
                FILE* view = NULL;
                view = fopen("MaticneAMD", "rb");
                if (view == NULL)
                {
                    perror("Otvaranje dokumenta");
                    return;
                }
                fseek(view, 0, SEEK_END);
                broj = ftell(view) / sizeof(MATICNA);
                MATICNA* maticneAMD = NULL;
                maticneAMD = memoryalloMaticna(maticneAMD, broj);
                rewind(view);
                fread(maticneAMD, sizeof(MATICNA), broj, view);

                selectionSortMaticne(maticneAMD, broj);

                for (i = 0; i < broj; i++)
                {
                    printf("\n%d %s %s %0.2f", (maticneAMD + i)->id, (maticneAMD + i)->ime, (maticneAMD + i)->chipset, (maticneAMD + i)->cijena);
                }
                printf("\nUpisite id maticne koju zelite kupiti:");
                fflush(stdin);
                int odabir = 0;
                scanf("%d", &odabir);
                for (i = 0; i < broj; i++)
                {
                    if ((maticneAMD + i)->id == odabir)
                    {
                        printf("Uspjesno ste kupili maticnu:%s za %0.2fKn", (maticneAMD + i)->ime, (maticneAMD + i)->cijena);
                        FILE* fp = NULL;
                        fp = fopen("Racuni.txt", "a+");
                        if (fp == NULL)
                        {
                            printf("Greška u izdavanju racuna!");
                            for (;;) {
                                izbornik(); break;
                            }
                        }
                        srand((unsigned)time(NULL));
                        int gornjag = 1000;
                        int donjag = 1;
                        int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                        fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                        fprintf(fp, "%d %s %s %0.2f\n", (maticneAMD + i)->id, (maticneAMD + i)->ime, (maticneAMD + i)->chipset, (maticneAMD + i)->cijena);
                        fclose(fp);
                        break;
                    }
                    else
                    {
                        printf("Maticna s tim id-om nije pronadjen!");
                        for (;;) {
                            izbornik(); break;
                        }
                        break;
                    }
                }
                fclose(view);
                free(maticneAMD);
                break;

            }
            case 2:
            {
                int broj = 0;
                int x = 0;
                FILE* view = NULL;
                view = fopen("MaticneINTEL", "rb");
                if (view == NULL)
                {
                    perror("Otvaranje dokumenta");
                    return;
                }
                fseek(view, 0, SEEK_END);
                broj = ftell(view) / sizeof(MATICNA);
                MATICNA* maticneINTEL = NULL;
                maticneINTEL = memoryalloMaticna(maticneINTEL, broj);
                rewind(view);
                fread(maticneINTEL, sizeof(MATICNA), broj, view);

                selectionSortMaticne(maticneINTEL, broj);

                for (i = 0; i < broj; i++)
                {
                    printf("\n%d %s %s %0.2f", (maticneINTEL + i)->id, (maticneINTEL + i)->ime, (maticneINTEL + i)->chipset, (maticneINTEL + i)->cijena);
                }
                printf("\nUpisite id maticne koju zelite kupiti:");
                fflush(stdin);
                int odabir = 0;
                scanf("%d", &odabir);
                for (i = 0; i < broj; i++)
                {
                    if ((maticneINTEL + i)->id == odabir)
                    {
                        printf("Uspjesno ste kupili maticnu:%s za %0.2fKn", (maticneINTEL + i)->ime, (maticneINTEL + i)->cijena);
                        FILE* fp = NULL;
                        fp = fopen("Racuni.txt", "a+");
                        if (fp == NULL)
                        {
                            printf("Greška u izdavanju racuna!");
                            for (;;) {
                                izbornik(); break;
                            }
                        }
                        srand((unsigned)time(NULL));
                        int gornjag = 1000;
                        int donjag = 1;
                        int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                        fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                        fprintf(fp, "%d %s %s %0.2f\n", (maticneINTEL + i)->id, (maticneINTEL + i)->ime, (maticneINTEL + i)->chipset, (maticneINTEL + i)->cijena);
                        fclose(fp);
                        break;
                    }
                    else
                    {
                        printf("Maticna s tim id-om nije pronadjen!");
                        for (;;) {
                            izbornik(); break;
                        }
                        break;
                    }
                }
                fclose(view);
                free(maticneINTEL);
                break;
            }

            default:
            {
                printf("\aPonovite unos");
            }
            }
            break;
        }
        case 3:
        {

            int broj = 0;
            int x = 0;
            FILE* view = NULL;
            view = fopen("RAM", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                return;
            }
            fseek(view, 0, SEEK_END);
            broj = ftell(view) / sizeof(RAM);
            RAM* radnamem = NULL;
            radnamem = memoryalloRAM(radnamem, broj);
            rewind(view);
            fread(radnamem, sizeof(RAM), broj, view);

            selectionSortRAM(radnamem, broj);

            for (i = 0; i < broj; i++)
            {
                printf("\n%d %s %s %s %0.2f", (radnamem + i)->id, (radnamem + i)->ime, (radnamem + i)->size, (radnamem + i)->brzina, (radnamem + i)->cijena);
            }
            printf("\nUpisite id radne memorije koju zelite kupiti:");
            fflush(stdin);
            int odabir = 0;
            scanf("%d", &odabir);
            for (i = 0; i < broj; i++)
            {
                if ((radnamem + i)->id == odabir)
                {
                    printf("Uspjesno ste kupili ram:%s za %0.2fKn", (radnamem + i)->ime, (radnamem + i)->cijena);
                    FILE* fp = NULL;
                    fp = fopen("Racuni.txt", "a+");
                    if (fp == NULL)
                    {
                        printf("Greška u izdavanju racuna!");
                        for (;;) {
                            izbornik(); break;
                        }
                    }
                    srand((unsigned)time(NULL));
                    int gornjag = 1000;
                    int donjag = 1;
                    int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                    fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                    fprintf(fp, "%d %s %s %s %0.2f\n", (radnamem + i)->id, (radnamem + i)->ime, (radnamem + i)->size, (radnamem + i)->brzina, (radnamem + i)->cijena);
                    fclose(fp);
                    break;
                }
                else
                {
                    printf("RAM s tim id-om nije pronadjen!");
                    for (;;) {
                        izbornik(); break;
                    }
                    break;
                }
            }
            fclose(view);
            free(radnamem);
            break;


        }
        case 4:
        {
            int broj = 0;
            int x = 0;
            FILE* view = NULL;
            view = fopen("Graficke", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                return;
            }
            fseek(view, 0, SEEK_END);
            broj = ftell(view) / sizeof(GPU);
            GPU* graficka = NULL;
            graficka = memoryalloGPU(graficka, broj);
            rewind(view);
            fread(graficka, sizeof(GPU), broj, view);

            selectionSortGpu(graficka, broj);

            for (i = 0; i < broj; i++)
            {
                printf("\n%d %s %s %0.2f", (graficka + i)->id, (graficka + i)->ime, (graficka + i)->ram, (graficka + i)->cijena);
            }
            printf("\nUpisite graficke kartice koju zelite kupiti:");
            fflush(stdin);
            int odabir = 0;
            scanf("%d", &odabir);
            for (i = 0; i < broj; i++)
            {
                if ((graficka + i)->id == odabir)
                {
                    printf("Uspjesno ste kupili graficku karticu:%s za %0.2fKn", (graficka + i)->ime, (graficka + i)->cijena);
                    FILE* fp = NULL;
                    fp = fopen("Racuni.txt", "a+");
                    if (fp == NULL)
                    {
                        printf("Greška u izdavanju racuna!");
                        for (;;) {
                            izbornik(); break;
                        }
                    }
                    srand((unsigned)time(NULL));
                    int gornjag = 1000;
                    int donjag = 1;
                    int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                    fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                    fprintf(fp, "%d %s %s %0.2f\n", (graficka + i)->id, (graficka + i)->ime, (graficka + i)->ram, (graficka + i)->cijena);
                    fclose(fp);
                    break;
                }
                else
                {
                    printf("Graficka kartica s tim id-om nije pronadjen!");
                    for (;;) {
                        izbornik(); break;
                    }
                    break;
                }
            }
            fclose(view);
            free(graficka);
            break;
        }
        case 5:
        {
            int broj = 0;
            int x = 0;
            FILE* view = NULL;
            view = fopen("Pohrana", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                return;
            }
            fseek(view, 0, SEEK_END);
            broj = ftell(view) / sizeof(HARD);
            HARD* pohrana = NULL;
            pohrana = memoryalloHARD(pohrana, broj);
            rewind(view);
            fread(pohrana, sizeof(HARD), broj, view);

            selectionSortHARD(pohrana, broj);

            for (i = 0; i < broj; i++)
            {
                printf("\n%d %s %s %0.2f", (pohrana + i)->id, (pohrana + i)->ime, (pohrana + i)->size, (pohrana + i)->cijena);
            }
            printf("\nUpisite id komponente koju zelite kupiti:");
            fflush(stdin);
            int odabir = 0;
            scanf("%d", &odabir);
            for (i = 0; i < broj; i++)
            {
                if ((pohrana + i)->id == odabir)
                {
                    printf("Uspjesno ste kupili :%s za %0.2fKn", (pohrana + i)->ime, (pohrana + i)->cijena);
                    FILE* fp = NULL;
                    fp = fopen("Racuni.txt", "a+");
                    if (fp == NULL)
                    {
                        printf("Greška u izdavanju racuna!");
                        for (;;) {
                            izbornik(); break;
                        }
                    }
                    srand((unsigned)time(NULL));
                    int gornjag = 1000;
                    int donjag = 1;
                    int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                    fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                    fprintf(fp, "%d d% s% s % 0.2f\n", (pohrana + i)->id, (pohrana + i)->ime, (pohrana + i)->size, (pohrana + i)->cijena);
                    fclose(fp);
                    break;
                }
                else
                {
                    printf("Komponenta za pohranu s tim id-om nije pronadjen!");
                    for (;;) {
                        izbornik(); break;
                    }
                    break;
                }
            }
            fclose(view);
            free(pohrana);
            break;
        }
        case 6:
        {
            int broj = 0;
            int x = 0;
            FILE* view = NULL;
            view = fopen("Napajanja", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                return;
            }
            fseek(view, 0, SEEK_END);
            broj = ftell(view) / sizeof(NAPAJANJE);
            NAPAJANJE* psu = NULL;
            psu = memoryalloPSU(psu, broj);
            rewind(view);
            fread(psu, sizeof(NAPAJANJE), broj, view);

            selectionSortPSU(psu, broj);

            for (i = 0; i < broj; i++)
            {
                printf("\n%d %s %s %0.2f", (psu + i)->id, (psu + i)->ime, (psu + i)->output, (psu + i)->cijena);
            }
            printf("\nUpisite ime napajanja kojega zelite kupiti:");
            fflush(stdin);
            int odabir = 0;
            scanf("%d", &odabir);
            for (i = 0; i < broj; i++)
            {
                if ((psu + i)->id == odabir)
                {
                    printf("Uspjesno ste kupili napajanje:%s za %0.2fKn", (psu + i)->ime, (psu + i)->cijena);
                    FILE* fp = NULL;
                    fp = fopen("Racuni.txt", "a+");
                    if (fp == NULL)
                    {
                        printf("Greška u izdavanju racuna!");
                        for (;;) {
                            izbornik(); break;
                        }
                    }
                    srand((unsigned)time(NULL));
                    int gornjag = 1000;
                    int donjag = 1;
                    int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                    fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                    fprintf(fp, "%d %s %s %0.2f\n", (psu + i)->id, (psu + i)->ime, (psu + i)->output, (psu + i)->cijena);
                    fclose(fp);
                    break;
                }
                else
                {
                    printf("Napajanje s tim id-om nije pronadjen!");
                    for (;;) {
                        izbornik(); break;
                    }
                    break;
                }
            }
            fclose(view);
            free(psu);
            break;
        }
        case 7:
        {
            int broj = 0;
            int x = 0;
            FILE* view = NULL;
            view = fopen("Kucista", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                return;
            }
            fseek(view, 0, SEEK_END);
            broj = ftell(view) / sizeof(KUCISTE);
            KUCISTE* kuciste = NULL;
            kuciste = memoryalloKUCISTE(kuciste, broj);
            rewind(view);
            fread(kuciste, sizeof(KUCISTE), broj, view);

            selectionSortKUCISTE(kuciste, broj);

            for (i = 0; i < broj; i++)
            {
                printf("\n%d %s %0.2f", (kuciste + i)->id, (kuciste + i)->ime, (kuciste + i)->cijena);
            }
            printf("\nUpisite ime kucista kojega zelite kupiti:");
            fflush(stdin);
            int odabir = 0;
            scanf("%d", &odabir);
            for (i = 0; i < broj; i++)
            {
                if ((kuciste + i)->id == odabir)
                {
                    printf("Uspjesno ste kupili kuciste:%s za %0.2fKn", (kuciste + i)->ime, (kuciste + i)->cijena);
                    FILE* fp = NULL;
                    fp = fopen("Racuni.txt", "a+");
                    if (fp == NULL)
                    {
                        printf("Greška u izdavanju racuna!");
                        for (;;) {
                            izbornik(); break;
                        }
                    }
                    srand((unsigned)time(NULL));
                    int gornjag = 1000;
                    int donjag = 1;
                    int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                    fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                    fprintf(fp, "%d %s %0.2f\n", (kuciste + i)->id, (kuciste + i)->ime,(kuciste + i)->cijena);
                    fclose(fp);
                    break;
                }
                else
                {
                    printf("Kuciste s tim id-om nije pronadjeno!");
                    for (;;) {
                        izbornik(); break;
                    }
                    break;
                }
            }
            fclose(view);
            free(kuciste);
            break;
        }
        case 8:
        {
            return;
            break;
        }
        default:
        {
            printf("\aPonovite unos");
        }
        }
    } while (1);
}
RACUNALO kupnjaracunala()
{
    system("cls");
    int broj = 0;
    int x = 0;
    int check = 0;
    printf("\nDOBRODOSLI U IZBORNIK ZA KUPNJU RACUNALA!\n");
    FILE* view = NULL;
    view = fopen("Racunala.bin", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        return;
    }
    fseek(view, 0, SEEK_END);
    broj = ftell(view) / sizeof(RACUNALO);
    RACUNALO* racunala = NULL;
    racunala = memoryalloRACUNALA(racunala, broj);
    rewind(view);
    fread(racunala, sizeof(RACUNALO), broj, view);
    for (int i = 0; i < broj; i++)
    {
        printf("RACUNALO %d.\n", i+1); 
        printf("Procesor:%s\nMaticna:%s\nRadna memorija:%s %s\nGraficka:%s\nPohrana:%s %s\nNapajanje:%s %s\nKuciste:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (racunala + i)->procesor.ime, (racunala + i)->maticna.ime, (racunala + i)->ram.ime, (racunala + i)->ram.size,
        (racunala + i)->graficka.ime, (racunala+i)->harddisk.ime, (racunala + i)->harddisk.size,(racunala + i)->psu.ime, (racunala + i)->psu.output, (racunala + i)->kuciste.ime,(racunala+i)->ukupnacijena);

    }
    printf("Upisite broj racunala kojeg zelite kupiti:");
    scanf("%d", &x);
    for (int i = 0; i < broj; i++)
    {
        if (x == i + 1)
        { 
            printf("RACUNALO %d.\n", i + 1);
            printf("Procesor:%s\nMaticna:%s\nRadna memorija:%s %s\nGraficka:%s\nPohrana:%s %s\nNapajanje:%s %s\nKuciste:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (racunala + i)->procesor.ime, (racunala + i)->maticna.ime, (racunala + i)->ram.ime, (racunala + i)->ram.size,
                (racunala + i)->graficka.ime, (racunala + i)->harddisk.ime, (racunala + i)->harddisk.size, (racunala + i)->psu.ime, (racunala + i)->psu.output, (racunala + i)->kuciste.ime, (racunala + i)->ukupnacijena);
            printf("\nMolimo potvrdite zeljenu kupnju.");
            check=securecheck();
            if (check == 1)
            {
                printf("\nUspjesno ste kupili racunalo:RACUNALO %d. za %0.2fKn\n", i + 1, (racunala + i)->ukupnacijena);
                FILE* fp = NULL;
                fp = fopen("Racuni.txt", "a+");
                if (fp == NULL)
                {
                    printf("\nGreška u izdavanju racuna!");
                    for (;;) {
                        izbornik(); break;
                    }
                }
                srand((unsigned)time(NULL));
                int gornjag = 1000;
                int donjag = 1;
                int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                fprintf(fp, "Procesor:%s\nMaticna:%s\nRadna memorija:%s %s\nGraficka:%s\nPohrana:%s %s\nNapajanje:%s %s\nKuciste:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (racunala + i)->procesor.ime, (racunala + i)->maticna.ime, (racunala + i)->ram.ime, (racunala + i)->ram.size,
                    (racunala + i)->graficka.ime, (racunala + i)->harddisk.ime, (racunala + i)->harddisk.size, (racunala + i)->psu.ime, (racunala + i)->psu.output, (racunala + i)->kuciste.ime, (racunala + i)->ukupnacijena);
                fclose(fp);

            }
            else if (check == 2)
            {
                printf("\nKupnja nije izvrsena!");
                int odluka = 0;
                printf("\n1.Vratite se na pocetni izbornik");
                printf("\n2.Ponovite izbor\n");
                scanf("%d", &odluka);
                if (odluka == 1)
                {
                    return;
                }
                else if (odluka == 2)
                {
                    kupnjaracunala();
                }
                else
                {
                    return;
                }
            }
        }
    }
    fclose(view);
    free(racunala);
}

int securecheck()
{
    char da[] = "da";
    char odluka[3];
    printf("Da li ste sigurni da zelite izvrsiti kupnju?\n");
    printf("Unesite da/ne\n");
    scanf("%s", &odluka);

    if (strcmp(da, odluka) == 0)
    {
        return 1;
        
    }
    else
    {
        return 2;
    }
 }

RACUNALO randompc()
{
    system("cls");
    float money = 0;
    int x = 0;
    int brojac=0;
    printf("DOBRODOSLI U IZBORNIK ZA SLAGANJE RACUNALA!\n");
    printf("ZA POCETAK ODABERITE ZELJENI CJENOVNI RANG:\n");
    printf("Za koliko novaca zelite uzeti racunalo?\n");
    scanf("%f", &money);
    FILE* view = NULL;
    view = fopen("Racunala.bin", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        return;
    }
    fseek(view, 0, SEEK_END);
    int broj = ftell(view) / sizeof(RACUNALO);
    RACUNALO* racunala = NULL;
    racunala = memoryalloRACUNALA(racunala, broj);
    rewind(view);
    fread(racunala, sizeof(RACUNALO), broj, view);
    selectionSortRACUNALO(racunala, broj);
    float target=najbliziElement(racunala, broj, money);
    for (int i = 0; i < broj; i++)
    {
        if ((racunala + i)->ukupnacijena == target)
        {
        printf("RACUNALO %d.\n", i + 1);
        printf("Procesor:%s\nMaticna:%s\nRadna memorija:%s %s\nGraficka:%s\nPohrana:%s %s\nNapajanje:%s %s\nKuciste:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (racunala + i)->procesor.ime, (racunala + i)->maticna.ime, (racunala + i)->ram.ime, (racunala + i)->ram.size,
            (racunala + i)->graficka.ime, (racunala + i)->harddisk.ime, (racunala + i)->harddisk.size, (racunala + i)->psu.ime, (racunala + i)->psu.output, (racunala + i)->kuciste.ime, (racunala + i)->ukupnacijena);
        int check = securecheck();
        if (check == 1)
        {
            printf("\nUspjesno ste kupili racunalo:RACUNALO %d. za %0.2fKn\n", i + 1, (racunala + i)->ukupnacijena);
            FILE* fp = NULL;
            fp = fopen("Racuni.txt", "a+");
            if (fp == NULL)
            {
                printf("\nGreška u izdavanju racuna!");
                for (;;) {
                    izbornik(); break;
                }
            }
            srand((unsigned)time(NULL));
            int gornjag = 1000;
            int donjag = 1;
            int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
            fprintf(fp, "Broj racuna:%d\n", broj_racuna);
            fprintf(fp, "Procesor:%s\nMaticna:%s\nRadna memorija:%s %s\nGraficka:%s\nPohrana:%s %s\nNapajanje:%s %s\nKuciste:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (racunala + i)->procesor.ime, (racunala + i)->maticna.ime, (racunala + i)->ram.ime, (racunala + i)->ram.size,
                (racunala + i)->graficka.ime, (racunala + i)->harddisk.ime, (racunala + i)->harddisk.size, (racunala + i)->psu.ime, (racunala + i)->psu.output, (racunala + i)->kuciste.ime, (racunala + i)->ukupnacijena);
            fclose(fp);

        }
        else if (check == 2)
        {
            printf("\nKupnja nije izvrsena!");
            int odluka = 0;
            printf("\n1.Vratite se na pocetni izbornik");
            printf("\n2.Ponovite izbor\n");
            scanf("%d", &odluka);
            if (odluka == 1)
            {
                return;
            }
            else if (odluka == 2)
            {
                kupnjaracunala();
            }
            else
            {
                return;
            }
        }
        }
    }
    free(racunala);
    fclose(view);
}

float najblizi(float  x, int y, int target) {
    if (target - x >= y - target)
        return y;
    else
        return x;
}
float najbliziElement(RACUNALO* arr, int n, float target) {
    if (target <= (arr + 0)->ukupnacijena)
        return (arr + 0)->ukupnacijena;
    if (target >= (arr + n - 1)->ukupnacijena)
        return (arr + n - 1)->ukupnacijena;
    int left = 0, right = n, mid = 0;
    while (left < right) {
        mid = (left + right) / 2;
        if ((arr + mid)->ukupnacijena == target)
            return (arr + mid)->ukupnacijena;
        if (target < (arr + mid)->ukupnacijena) {
            if (mid > 0 && target > (arr + mid - 1)->ukupnacijena)
                return najblizi((arr + mid - 1)->ukupnacijena, (arr + mid)->ukupnacijena, target);
            right = mid;
        }
        else {
            if (mid < n - 1 && target < (arr + mid + 1)->ukupnacijena)
                return najblizi((arr + mid)->ukupnacijena, (arr + mid + 1)->ukupnacijena, target);
            left = mid + 1;
        }
    }
    return (arr + mid)->ukupnacijena;
}