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
        printf(" 1.Kupnja komponenti.\n");
        printf(" 2.Kupnja racunala.\n");
        printf(" 3.Slaganje racunala po cijeni.\n");
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

            break;
        }
        case 3:
        {

            break;
        }
        case 4:
        {

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
void zamjenaproc(PROCESOR* veci, PROCESOR* manji) { 



   PROCESOR temp = *manji;
    *manji = *veci;
    *veci = temp;


}
void selectionSortProc(PROCESOR* sort, const int broj) { 
    int min = 0;
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
void selectionSortProcCijena(PROCESOR* sort, const int broj) {
    int min = 0;
    for (int i = 0; i < broj - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < broj; j++)
        {
            if ((sort + j)->cijena < (sort + min)->cijena) {
                min = j;
            }
        }
        zamjenaprocCijena((sort + i), (sort + min));
    }
}
void selectionSortMaticne(MATICNA* sort, const int broj)
{
    int min = 0;
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
void zamjenaMat(MATICNA* veci, MATICNA* manji)
{
    MATICNA temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortMatCijena(MATICNA* sort, const int broj)
{
    int min = 0;
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
RACUNALO kupnjakomp()
{
    system("cls");
    printf("\nDOBRODOSLI U IZBORNIK ZA KUPNJU RACUNALNIH KOMPONETNI!\n");
    printf("Nakon odabira komponenti odaberite opciju za izdavanje racuna kako bi zavrsili kupnju\n");

    int brojac = 0;
    do
    {
        int i = 0;
        printf(" \n1.Procesori.\n");
        printf(" 2.Maticne.\n");
        printf(" 3.Radna memorija.\n");
        printf(" 4.Graficke kartice\n");
        printf(" 5.Napajanje.\n");
        printf(" 6.Kucista.\n");
        printf(" 7.Izlaz iz programa\n");
        

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
        {
            int j=0;
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
                printf("\n1.Sortiranje po cijeni.");
                printf("\n2.Sortiranje po kataloskom broju.");
                printf("\n3.Povratak u izbornik.");
                scanf("%d", &x);
                if (x == 1)
                {
                    selectionSortProcCijena(procesoriAMD, broj);
                }
                else if (x == 2)
                {
                    selectionSortProc(procesoriAMD, broj);
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
                for (i = 0; i < broj; i++)
                {
                    printf("\n%d %s %s %s %s %f", (procesoriAMD + i)->id,(procesoriAMD+i)->ime, (procesoriAMD + i)->brojjezgri, (procesoriAMD + i)->brojtredova, (procesoriAMD + i)->clock, (procesoriAMD + i)->cijena);
                }
                printf("\nUpisite id procesora kojeg zelite kupiti:");
                fflush(stdin);
                int odabir = 0;
                scanf("%d",&odabir);
                for (i = 0; i < broj; i++)
                {
                    if((procesoriAMD + i)->id==odabir)
                    {
                        printf("Uspjesno ste kupili procesor:%s za %fKn", (procesoriAMD + i)->ime, (procesoriAMD + i)->cijena);
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
                        int broj_racuna=((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                        fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                        fprintf(fp, "%d %s %s %s %s %f\n", (procesoriAMD + i)->id, (procesoriAMD + i)->ime, (procesoriAMD + i)->brojjezgri, (procesoriAMD + i)->brojtredova, (procesoriAMD + i)->clock, (procesoriAMD + i)->cijena);
                        fclose(fp);
                        break;
                    }
                    else
                    {
                        printf("Procesor s time id-om nije pronadjen!");
                        for (;;) {
                            izbornik(); break;
                        }
                        break;
                    }
                }
                fclose(view);
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
                printf("\n1.Sortiranje po cijeni.");
                printf("\n2.Sortiranje po kataloskom broju.");
                printf("\n3.Povratak u izbornik.");
                scanf("%d", &x);
                if (x == 1)
                {
                    selectionSortProcCijena(procesoriINTEL, broj);
                }
                else if (x == 2)
                {
                    selectionSortProc(procesoriINTEL, broj);
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
                for (i = 0; i < broj; i++)
                {
                    printf("\n%d %s %s %s %s %f", (procesoriINTEL + i)->id, (procesoriINTEL + i)->ime, (procesoriINTEL + i)->brojjezgri, (procesoriINTEL + i)->brojtredova, (procesoriINTEL + i)->clock, (procesoriINTEL + i)->cijena);
                }
                printf("\nUpisite id procesora kojeg zelite kupiti:");
                fflush(stdin);
                int odabir = 0;
                scanf("%d", &odabir);
                for (i = 0; i < broj; i++)
                {
                    if ((procesoriINTEL + i)->id == odabir)
                    {
                        printf("Uspjesno ste kupili procesor:%s za %fKn", (procesoriINTEL + i)->ime, (procesoriINTEL + i)->cijena);
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
                        fprintf(fp, "%d %s %s %s %s %f\n", (procesoriINTEL + i)->id, (procesoriINTEL + i)->ime, (procesoriINTEL + i)->brojjezgri, (procesoriINTEL + i)->brojtredova, (procesoriINTEL + i)->clock, (procesoriINTEL + i)->cijena);
                        fclose(fp);
                        break;
                    }
                    else
                    {
                        printf("Procesor s time id-om nije pronadjen!");
                        for (;;) {
                            izbornik(); break;
                        }
                        break;
                    }
                }
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
                printf("\n1.Sortiranje po cijeni.");
                printf("\n2.Sortiranje po kataloskom broju.");
                printf("\n3.Povratak u izbornik.");
                scanf("%d", &x);
                if (x == 1)
                {
                    selectionSortProcCijena(procesoriAMD, broj);
                }
                else if (x == 2)
                {
                    selectionSortProc(procesoriAMD, broj);
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
                for (i = 0; i < broj; i++)
                {
                    printf("\n%d %s %s %s %s %f", (procesoriAMD + i)->id, (procesoriAMD + i)->ime, (procesoriAMD + i)->brojjezgri, (procesoriAMD + i)->brojtredova, (procesoriAMD + i)->clock, (procesoriAMD + i)->cijena);
                }
                printf("\nUpisite id procesora kojeg zelite kupiti:");
                fflush(stdin);
                int odabir = 0;
                scanf("%d", &odabir);
                for (i = 0; i < broj; i++)
                {
                    if ((procesoriAMD + i)->id == odabir)
                    {
                        printf("Uspjesno ste kupili procesor:%s za %fKn", (procesoriAMD + i)->ime, (procesoriAMD + i)->cijena);
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
                        fprintf(fp, "%d %s %s %s %s %f\n", (procesoriAMD + i)->id, (procesoriAMD + i)->ime, (procesoriAMD + i)->brojjezgri, (procesoriAMD + i)->brojtredova, (procesoriAMD + i)->clock, (procesoriAMD + i)->cijena);
                        fclose(fp);
                        break;
                    }
                    else
                    {
                        printf("Procesor s time id-om nije pronadjen!");
                        for (;;) {
                            izbornik(); break;
                        }
                        break;
                    }
                }
                fclose(view);
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
                printf("\n1.Sortiranje po cijeni.");
                printf("\n2.Sortiranje po kataloskom broju.");
                printf("\n3.Povratak u izbornik.");
                scanf("%d", &x);
                if (x == 1)
                {
                    selectionSortProcCijena(procesoriINTEL, broj);
                }
                else if (x == 2)
                {
                    selectionSortProc(procesoriINTEL, broj);
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
                for (i = 0; i < broj; i++)
                {
                    printf("\n%d %s %s %s %s %f", (procesoriINTEL + i)->id, (procesoriINTEL + i)->ime, (procesoriINTEL + i)->brojjezgri, (procesoriINTEL + i)->brojtredova, (procesoriINTEL + i)->clock, (procesoriINTEL + i)->cijena);
                }
                printf("\nUpisite id procesora kojeg zelite kupiti:");
                fflush(stdin);
                int odabir = 0;
                scanf("%d", &odabir);
                for (i = 0; i < broj; i++)
                {
                    if ((procesoriINTEL + i)->id == odabir)
                    {
                        printf("Uspjesno ste kupili procesor:%s za %fKn", (procesoriINTEL + i)->ime, (procesoriINTEL + i)->cijena);
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
                        fprintf(fp, "%d %s %s %s %s %f\n", (procesoriINTEL + i)->id, (procesoriINTEL + i)->ime, (procesoriINTEL + i)->brojjezgri, (procesoriINTEL + i)->brojtredova, (procesoriINTEL + i)->clock, (procesoriINTEL + i)->cijena);
                        fclose(fp);
                        break;
                    }
                    else
                    {
                        printf("Procesor s time id-om nije pronadjen!");
                        for (;;) {
                            izbornik(); break;
                        }
                        break;
                    }
                }
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
        case 3:
        {
            break;
        }
        case 4:
        {

            break;
        }
        case 5:
        {

            break;
        }
        case 6:
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