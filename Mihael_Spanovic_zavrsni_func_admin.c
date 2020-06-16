#define _CRT_SECURE_NO_WARNINGS
#include "Mihael_Spanovic_zavrsni_head.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




void izbornik()
{
    int i = 0;


    do
    {
    printf(" 1. Admin login.\n");
    printf(" 2. Kupac.\n");
    printf(" 3. Iskljuci program\n");

    printf("Unesite broj koji odgovara izborniku:\n");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
    {
        adminLogin();
        break;
    }
    case 2:
    {
        izbornikk();
        break;
    }
    case 3:
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

void adminLogin()
{
    char password[15] = { "BigBossAdmin12" };
    char provjera[15];
    printf("Unesite password za login:\n");
    scanf("%s", &provjera);

    if (strcmp(password, provjera) == 0)
    {
        system("cls");
        adminMenu();
    }
    else
    {
        printf("POGRESNA LOZINKA!");     
        return;
    }

}
void adminMenu()
{
    do
    {
        int i = 0;
        printf(" 1. Unos komponenti.\n");
        printf(" 2. Brisanje komponenti.\n");
        printf(" 3. Ipis komponenti/racunala.\n");
        printf(" 4. Slaganje racunala.\n");

        printf("//////////////////////////\n");
        printf(" 5. Odjava\n");
        printf(" 6. Turn off\n");

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
        {
            for(;;)
            { 
            unosKomponenti();
            }
            break;
        }
        case 2:
        {
            for(;;)
            {
            brisanjeKomponenti();
            }
            break;
        }
        case 3:
        {
            for (;;)
            {
            ispisKomponenti();
            }
            break;
        }
        case 4:
        {
            for (;;)
            { 
            slaganjeRacunala();
            }
            break;
        }
        case 5:
        {
            for (;;)
            {
            izbornik();
            }
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
            izbornik();
        }
        }
    } while (1);

}

void unosKomponenti()
{

    do
    {
        int i;
        int j;
        FILE* fp = NULL;
        system("cls");
        printf(" 1. Procesor\n");
        printf(" 2. Maticna ploca\n");
        printf(" 3. RAM\n");
        printf(" 4. Graficka kartica\n");
        printf(" 5. Napajanje\n");
        printf(" 6. Kuciste\n");
        printf("//////////////////////////////////\n");
        printf(" 7.Admin menu\n");

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
        {
            printf("1.AMD\n");
            printf("2.INTEL\n");
            printf("Unesite odgovarajuci broj:\n");
            scanf("%d", &j);
            switch (j)
            {
            case 1:
            {
                fp = fopen("ProcesoriAMD", "ab+");
                if (fp == NULL)
                {
                    perror("Otvaranje dokumenta ProcesoriAMD");
                }
                else
                {
                    char temp;
                    printf("Unesite kataloski broj procesora:");
                    scanf("%d", &racunalo.procesor.id);
                    printf("Unesite ime procesora:");
                    scanf("%c", &temp);
                    scanf("%30[^\n]s", racunalo.procesor.ime);
                    printf("Clock speed:");
                    scanf("%s", racunalo.procesor.clock);
                    printf("Broj jezgri:");
                    scanf("%s", racunalo.procesor.brojjezgri);
                    printf("Broj niti:");
                    scanf("%s", racunalo.procesor.brojtredova);
                    printf("Cijena:");
                    scanf("%f", &racunalo.procesor.cijena);
                    fwrite(&racunalo.procesor,sizeof(racunalo.procesor),1,fp);
                    fclose(fp);
                    printf("USPJESAN UNOS");
                    return;
                }
                system("cls");
                break;
            }
            case 2:
            {
                fp = fopen("ProcesoriINTEL", "ab+");
                if (fp == NULL)
                {
                    perror("Otvaranje dokumenta ProcesoriINTEL");
                }
                else
                {
                    char temp;
                    printf("Unesite kataloski broj procesora:");
                    scanf("%d", &racunalo.procesor.id);
                    printf("Unesite ime procesora:");
                    scanf("%c", &temp);
                    scanf("%30[^\n]s", racunalo.procesor.ime);
                    printf("Clock speed:");
                    scanf("%s", racunalo.procesor.clock);
                    printf("Broj jezgri:");
                    scanf("%s", racunalo.procesor.brojjezgri);
                    printf("Broj niti:");
                    scanf("%s", racunalo.procesor.brojtredova);
                    printf("Cijena:");
                    scanf("%f", &racunalo.procesor.cijena);
                    fwrite(&racunalo.procesor, sizeof(racunalo.procesor), 1, fp);
                    fclose(fp);
                    printf("USPJESAN UNOS");
                    return;
                }
                system("cls");
                break;
            } 
            default:
            {
                printf("Krivi unos!Ponovite unos:");
                scanf("%d", &j);
                break;
            }
            }
        }
        case 2:
        {
            printf("1.AMD\n");
            printf("2.INTEL\n");
            printf("Unesite odgovarajuci broj:\n");
            scanf("%d", &j);
            switch (j)
            {
            case 1:
            {
                fp = fopen("MaticneAMD", "ab+");
                if (fp == NULL)
                {
                    perror("Otvaranje dokumenta MaticneAMD");
                }
                else
                {
                    char temp;
                    printf("Unesite kataloski broj maticne:");
                    scanf("%d", &racunalo.maticna.id);
                    printf("Unesite ime maticne:");
                    scanf("%c", &temp);
                    scanf("%30[^\n]s", racunalo.maticna.ime);
                    printf("Chipset:");
                    scanf("%s", racunalo.maticna.chipset);
                    printf("Cijena:");
                    scanf("%f", &racunalo.maticna.cijena);
                    fwrite(&racunalo.maticna, sizeof(racunalo.maticna), 1, fp);
                    fclose(fp);
                    printf("USPJESAN UNOS");
                    return;

                }
                system("cls");
                break;
            }
            case 2:
            {
                fp = fopen("MaticneINTEL", "ab+");
                if (fp == NULL)
                {
                    perror("Otvaranje dokumenta MaticneINTEL");
                }
                else
                {
                    char temp;
                    printf("Unesite kataloski broj maticne:");
                    scanf("%d", &racunalo.maticna.id);
                    printf("Unesite ime maticne:");
                    scanf("%c", &temp);
                    scanf("%30[^\n]s", racunalo.maticna.ime);
                    printf("Chipset:");
                    scanf("%s", racunalo.maticna.chipset);
                    printf("Cijena:");
                    scanf("%f", &racunalo.maticna.cijena);
                    fwrite(&racunalo.maticna, sizeof(racunalo.maticna), 1, fp);
                    fclose(fp);
                    printf("USPJESAN UNOS");
                    return;
                }
                system("cls");
                break;
            }
            default:
            {
                printf("Krivi unos!Ponovite unos:");
                scanf("%d", &j);
                break;
            }
            }
            break;
        }
        case 3:
        {
            fp = fopen("RAM", "ab+");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta RAM");
            }
            else
            {
                char temp;
                printf("Unesite kataloski broj radne memorije:");
                scanf("%d", &racunalo.ram.id);
                printf("Unesite ime radne memorije:");
                scanf("%c", &temp);
                scanf("%30[^\n]s", racunalo.ram.ime);
                printf("Velicina:");
                scanf("%s", racunalo.ram.size);
                printf("Brzina u Mhz:");
                scanf("%s", racunalo.ram.brzina);
                printf("Cijena:");
                scanf("%f", &racunalo.ram.cijena);
                fwrite(&racunalo.ram, sizeof(racunalo.ram), 1, fp);
                printf("USPJESAN UNOS");
                fclose(fp);
                
                return;
            }
            system("cls");
            break;
        }
        case 4:
        {
            fp = fopen("Graficke", "ab+");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta Graficke");
            }
            else
            {
                char temp;
                printf("Unesite kataloski broj graficke kartice:");
                scanf("%d", &racunalo.graficka.id);
                printf("Unesite ime graficke kartice:");
                scanf("%c", &temp);
                scanf("%30[^\n]s", racunalo.graficka.ime);
                printf("Kolicina radne memorije:");
                scanf("%s", racunalo.graficka.ram);
                printf("Cijena:");
                scanf("%f", &racunalo.graficka.cijena);
                fwrite(&racunalo.graficka, sizeof(racunalo.graficka), 1, fp);
                fclose(fp);
                printf("USPJESAN UNOS");
                
                return;
            }
            system("cls");
            break;
        }
        case 5:
        {
            fp = fopen("Napajanja", "ab+");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta Napajanja");
            }
            else
            {
                char temp;
                printf("Unesite kataloski broj napajanja:");
                scanf("%d", &racunalo.psu.id);
                printf("Unesite ime napajanja:");
                scanf("%c", &temp);
                scanf("%30[^\n]s", racunalo.psu.ime);
                printf("Snaga:");
                scanf("%s", racunalo.psu.output);
                printf("Cijena:");
                scanf("%f", &racunalo.psu.cijena);
                fwrite(&racunalo.psu, sizeof(racunalo.psu), 1, fp);
                fclose(fp);
                printf("USPJESAN UNOS");
                
                return;
            }
            system("cls");
            break;
        }
        case 6:
        {
            fp = fopen("Kucista", "ab+");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta Kucista");
            }
            else
            {
                char temp;
                printf("Unesite kataloski broj kucista:");
                scanf("%d", &racunalo.kuciste.id);
                printf("Unesite ime kucista:");
                scanf("%c", &temp);
                scanf("%30[^\n]s", racunalo.kuciste.ime);
                printf("Cijena:");
                scanf("%f", &racunalo.kuciste.cijena);
                fwrite(&racunalo.kuciste, sizeof(racunalo.kuciste), 1, fp);
                fclose(fp);
                
                return;
            }
            system("cls");
            break;
        }
        case 7:
        {
            system("cls");
            for(;;)
            {
            adminMenu();
            break;
            }
            break;
        }
        default:
        {
            printf("\aPonovite unos!\n");
            return;
        }
        }
    } while (1);


}

void brisanjeKomponenti()
{

    
    do
    {
        int i, j, check;
        printf(" 1. Procesor\n");
        printf(" 2. Maticna ploca\n");
        printf(" 3. RAM\n");
        printf(" 4. Graficka kartica\n");
        printf(" 5. Napajanje\n");
        printf(" 6. Kuciste\n");
        printf("//////////////////////////////////\n");
        printf(" 7.Admin menu");

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
        {
            printf("1.AMD\n");
            printf("2.INTEL\n");
            printf("Unesite odgovarajuci broj:\n");
            scanf("%d", &j);
            switch (j)
            {
            case 1:
            {
                FILE* fp;
                FILE* fp_tmp;
                int found = 0;

                fp = fopen("ProcesoriAMD", "rb");
                if (fp==NULL) {
                    printf("Neuspjelo otvaranje datoteke ProcesoriAMD!");
                    for(;;){adminMenu();break;}
                    return -1;

                }
                fp_tmp = fopen("Temp", "wb");
                if (fp_tmp==NULL) {
                    printf("Neuspjelo otvaranje datoteke Temp!");
                    for(;;){adminMenu();break;}
                    return -1;
                }
                char pretraga[30];
                char c;
                printf("Unesite ime procesora:");
                scanf("%c", &c);
                scanf("%30[^\n]s", pretraga);

                while (fread(&racunalo.procesor, sizeof(racunalo.procesor), 1, fp) != NULL) {
                    if (strcmp(pretraga, racunalo.procesor.ime) == 0) {
                        printf("Procesor %s pronadjen i uspjesno obrisan\n\n",pretraga);
                        found = 1;
                    }
                    else {
                        fwrite(&racunalo.procesor, sizeof(racunalo.procesor), 1, fp_tmp);
                    }
                }
                if (!found) {
                    printf("Procesor: %s nije pronadjen.\n\n", pretraga);
                    
                    for (;;) {
                        brisanjeKomponenti(); break;
                    }
                }

                fclose(fp);
                fclose(fp_tmp);

                remove("ProcesoriAMD");
                rename("Temp", "ProcesoriAMD");

                system("cls");
                return;
                break;
            }
            case 2:
            {
                FILE* fp;
                FILE* fp_tmp;
                int found = 0;

                fp = fopen("ProcesoriINTEL", "rb");
                if (fp == NULL) {
                    printf("Neuspjelo otvaranje datoteke ProcesoriINTEL!");
                    for(;;){adminMenu();break;}
                    return -1;

                }
                fp_tmp = fopen("Temp", "wb");
                if (fp_tmp == NULL) {
                    printf("Neuspjelo otvaranje datoteke Temp!");
                    for(;;){adminMenu();break;}
                    return -1;
                }
                char pretraga[30];
                char c;
                printf("Unesite ime procesora:");
                scanf("%c", &c);
                scanf("%30[^\n]s", pretraga);

                while (fread(&racunalo.procesor, sizeof(racunalo.procesor), 1, fp) != NULL) {
                    if (strcmp(pretraga, racunalo.procesor.ime) == 0) {
                        printf("Procesor %s pronadjen i uspjesno obrisan\n\n", pretraga);
                        found = 1;
                    }
                    else {
                        fwrite(&racunalo.procesor, sizeof(racunalo.procesor), 1, fp_tmp);
                    }
                }
                if (!found) {
                    printf("Procesor: %s nije pronadjen.\n\n", pretraga);
                    
                    for (;;) {
                        brisanjeKomponenti(); break;
                    }
                }

                fclose(fp);
                fclose(fp_tmp);

                remove("ProcesoriINTEL");
                rename("Temp", "ProcesoriINTEL");
                
                system("cls");
                return;
                break;
            }
            }
        }
        case 2:
        {
            printf("1.AMD\n");
            printf("2.INTEL\n");
            printf("Unesite odgovarajuci broj:\n");
            scanf("%d", &j);
            switch (j)
            {
            case 1:
            {
                FILE* fp;
                FILE* fp_tmp;
                int found = 0;

                fp = fopen("MaticneAMD", "rb");
                if (fp == NULL) {
                    printf("Neuspjelo otvaranje datoteke MaticneAMD!");
                    for(;;){adminMenu();break;}
                    return -1;

                }
                fp_tmp = fopen("Temp", "wb");
                if (fp_tmp == NULL) {
                    printf("Neuspjelo otvaranje datoteke Temp!");
                    for(;;){adminMenu();break;}
                    return -1;
                }
                char pretraga[30];
                char c;
                printf("Unesite ime maticne:");
                scanf("%c", &c);
                scanf("%30[^\n]s", pretraga);

                while (fread(&racunalo.maticna, sizeof(racunalo.maticna), 1, fp) != NULL) {
                    if (strcmp(pretraga, racunalo.maticna.ime) == 0) {
                        printf("Maticna %s pronadjena i uspjesno obrisana\n\n", pretraga);
                        found = 1;
                    }
                    else {
                        fwrite(&racunalo.maticna, sizeof(racunalo.maticna), 1, fp_tmp);
                    }
                }
                if (!found) {
                    printf("Maticna: %s nije pronadjena.\n\n", pretraga);
                    
                    for (;;)
                    {
                        brisanjeKomponenti();
                        break;
                    }
                }

                fclose(fp);
                fclose(fp_tmp);

                remove("MaticneAMD");
                rename("Temp", "MaticneAMD");
                

                system("cls");
                return;
                break;
            }
            case 2:
            {
                FILE* fp;
                FILE* fp_tmp;
                int found = 0;

                fp = fopen("MaticneINTEL", "rb");
                if (fp == NULL) {
                    printf("Neuspjelo otvaranje datoteke MaticneINTEL!");
                    for(;;){adminMenu();break;}
                    return -1;

                }
                fp_tmp = fopen("Temp", "wb");
                if (fp_tmp == NULL) {
                    printf("Neuspjelo otvaranje datoteke Temp!");
                    for(;;){adminMenu();break;}
                    return -1;
                }
                char pretraga[30];
                char c;
                printf("Unesite ime maticne:");
                scanf("%c", &c);
                scanf("%30[^\n]s", pretraga);

                while (fread(&racunalo.maticna, sizeof(racunalo.maticna), 1, fp) != NULL) {
                    if (strcmp(pretraga, racunalo.maticna.ime) == 0) {
                        printf("Maticna %s pronadjena i uspjesno obrisana\n\n", pretraga);
                        found = 1;
                    }
                    else {
                        fwrite(&racunalo.maticna, sizeof(racunalo.maticna), 1, fp_tmp);
                    }
                }
                if (!found) {
                    printf("Maticna: %s nije pronadjena.\n\n", pretraga);
                    
                    for (;;)
                    {
                        brisanjeKomponenti();
                        break;
                    }
                }

                fclose(fp);
                fclose(fp_tmp);

                remove("MaticneINTEL");
                rename("Temp", "MaticneINTEL");
                
                system("cls");
                return;
                break;
            }
            }
        
        }
        case 3:
        {
            FILE* fp;
            FILE* fp_tmp;
            int found = 0;

            fp = fopen("RAM", "rb");
            if (fp == NULL) {
                printf("Neuspjelo otvaranje datoteke RAM!");
                for(;;){adminMenu();break;}
                return -1;

            }
            fp_tmp = fopen("Temp", "wb");
            if (fp_tmp == NULL) {
                printf("Neuspjelo otvaranje datoteke Temp!");
                for(;;){adminMenu();break;}
                return -1;
            }
            char pretraga[30];
            char c;
            printf("Unesite ime radne memorije:");
            scanf("%c", &c);
            scanf("%30[^\n]s", pretraga);

            while (fread(&racunalo.ram, sizeof(racunalo.ram), 1, fp) != NULL) {
                if (strcmp(pretraga, racunalo.ram.ime) == 0) {
                    printf("Radna memorija:%s pronadjena i uspjesno obrisana\n\n", pretraga);
                    found = 1;
                }
                else {
                    fwrite(&racunalo.ram, sizeof(racunalo.ram), 1, fp_tmp);
                }
            }
            if (!found) {
                printf("Radna memorija: %s nije pronadjena.\n\n", pretraga);
                
                for (;;)
                {
                    brisanjeKomponenti();
                    break;
                }
            }

            fclose(fp);
            fclose(fp_tmp);

            remove("RAM");
            rename("Temp", "RAM");
            

            system("cls");
            return;
            break;
        }
        case 4:
        {
            FILE* fp;
            FILE* fp_tmp;
            int found = 0;

            fp = fopen("Graficke", "rb");
            if (fp == NULL) {
                printf("Neuspjelo otvaranje datoteke Graficke!");
                for(;;){adminMenu();break;}
                return -1;

            }
            fp_tmp = fopen("Temp", "wb");
            if (fp_tmp == NULL) {
                printf("Neuspjelo otvaranje datoteke Temp!");
                for(;;){adminMenu();break;}
                return -1;
            }
            char pretraga[30];
            char c;
            printf("Unesite ime graficke kartice:");
            scanf("%c", &c);
            scanf("%30[^\n]s", pretraga);

            while (fread(&racunalo.graficka, sizeof(racunalo.graficka), 1, fp) != NULL) {
                if (strcmp(pretraga, racunalo.graficka.ime) == 0) {
                    printf("Graficka kartica: %s pronadjena i uspjesno obrisana\n\n", pretraga);
                    found = 1;
                }
                else {
                    fwrite(&racunalo.graficka, sizeof(racunalo.graficka), 1, fp_tmp);
                }
            }
            if (!found) {
                printf("Graficka kartica: %s nije pronadjena.\n\n", pretraga);
                
                for (;;) {
                    brisanjeKomponenti(); break;
                }
            }

            fclose(fp);
            fclose(fp_tmp);

            remove("Graficke");
            rename("Temp", "Graficke");

            system("cls");
            return;
            break;
        }
        case 5:
        {
            FILE* fp;
            FILE* fp_tmp;
            int found = 0;

            fp = fopen("Napajanje", "rb");
            if (fp == NULL) {
                printf("Neuspjelo otvaranje datoteke MaticneAMD!");
                for(;;){adminMenu();break;}
                return -1;

            }
            fp_tmp = fopen("Temp", "wb");
            if (fp_tmp == NULL) {
                printf("Neuspjelo otvaranje datoteke Temp!");
                for(;;){adminMenu();break;}
                return -1;
            }
            char pretraga[30];
            char c;
            printf("Unesite ime napajanja:");
            scanf("%c", &c);
            scanf("%30[^\n]s", pretraga);

            while (fread(&racunalo.psu, sizeof(racunalo.psu), 1, fp) != NULL) {
                if (strcmp(pretraga, racunalo.psu.ime) == 0) {
                    printf("Napajanje: %s pronadjeno i uspjesno obrisano\n\n", pretraga);
                    found = 1;
                }
                else {
                    fwrite(&racunalo.psu, sizeof(racunalo.psu), 1, fp_tmp);
                }
            }
            if (!found) {
                printf("Napajanje: %s nije pronadjeno.\n\n", pretraga);
                
                for (;;) {
                    brisanjeKomponenti(); break;
                }
            }

            fclose(fp);
            fclose(fp_tmp);

            remove("Napajanje");
            rename("Temp", "Napajanje");
            

            system("cls");
            return;
            break;
        }
        case 6:
        {
            FILE* fp;
            FILE* fp_tmp;
            int found = 0;

            fp = fopen("Kucista", "rb");
            if (fp == NULL) {
                printf("Neuspjelo otvaranje datoteke Kucista!");
                for(;;){adminMenu();break;}
                return -1;

            }
            fp_tmp = fopen("Temp", "wb");
            if (fp_tmp == NULL) {
                printf("Neuspjelo otvaranje datoteke Temp!");
                for(;;){adminMenu();break;}
                return -1;
            }
            char pretraga[30];
            char c;
            printf("Unesite ime kucista:");
            scanf("%c", &c);
            scanf("%30[^\n]s", pretraga);

            while (fread(&racunalo.kuciste, sizeof(racunalo.kuciste), 1, fp) != NULL) {
                if (strcmp(pretraga, racunalo.kuciste.ime) == 0) {
                    printf("Kuciste: %s pronadjeno i uspjesno obrisano\n\n", pretraga);
                    found = 1;
                }
                else {
                    fwrite(&racunalo.kuciste, sizeof(racunalo.kuciste), 1, fp_tmp);
                }
            }
            if (!found) {
                printf("Kuciste: %s nije pronadjeno.\n\n", pretraga);
                for (;;) {
                    brisanjeKomponenti(); break;
                }
            }

            fclose(fp);
            fclose(fp_tmp);
            remove("Kucista");
            rename("Temp", "Kucista");
            
            system("cls");
            return;
            break;
        }
        case 7:
        {
            system("cls");
            for(;;){adminMenu();break;}
 
            break;
        }
       
        default:
        {
            printf("\aPonovite unos");
            return;
        }
        } 
    } while (1);
}

void slaganjeRacunala()
{
    do{
    int x=0;
    int i = 0;
    printf("1.Zapocnite odabir:\n");
    printf("2.Povratak u admin menu\n");
    scanf("%d", &i);
    if (i == 1) 
    {
    x=srcproc();
    srcmat(x);
    srcRAM();
    srcgpu();
    srcpsu();
    srccase();
    }
    else if (i == 2)
    {
        for(;;){adminMenu();break;}
    }
    else
    {
        printf("Pogrešan unos!");
        for(;;){adminMenu();break;}
    }
    system("cls");
    printf("Uspjesno slaganja računala.\n");
    printf("Unesite odgovarajuci broj:\n");
    printf("1. Povratak u admin menu.");
    printf("2. Slaganje novog racunala.");
    scanf("%d", &x);
    if (x == 1)
    {
        for(;;){adminMenu();break;}
    }
    else if (x == 2)
    {
        system("cls");
        return;
    }
    else {
        printf("Error!");
        for(;;){adminMenu();break;}
    }
    } while (1);
    
}

int srcproc()
{
    FILE* view = NULL;
    FILE* fp = NULL;
    int x;
    char pretraga[30];
    char c;
    int d = 0;
    printf("Odaberite procesor:\n");
    printf("1.AMD\n");
    printf("2.INTEL\n");
    printf("////////////\n");
    printf("3.Povratka u Admin menu\n");

    scanf("%d", &x);
    if (x == 1)
    {
        view = fopen("ProcesoriAMD", "rb");
    }
    else if (x == 2)
    {
        view = fopen("ProcesoriINTEL", "rb");
    }
    else
    {
        printf("Pogresan unos!");
        for (;;) {
            slaganjeRacunala(); break;
        }
    }
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        for(;;){adminMenu();break;}
    }
    printf("PROCESORI:\n");
    while (fread(&racunalo.procesor, sizeof(racunalo.procesor), 1, view) != NULL) {
        printf("%d.%s  %s %s %s  %0.2f Kn\n", racunalo.procesor.id, racunalo.procesor.ime, racunalo.procesor.clock, racunalo.procesor.brojjezgri, racunalo.procesor.brojtredova, racunalo.procesor.cijena);
    }

    printf("Odaberite procesor za racunalo unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&racunalo.procesor, sizeof(racunalo.procesor), 1, view) != 0) {
        if (strcmp(pretraga, racunalo.procesor.ime) == 0)
        {
            fp = fopen("Racunala.bin", "ab+");
            if (fp == NULL)
            {
                printf("GREŠKA");
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            fwrite(&racunalo.procesor, sizeof(racunalo.procesor), 1, fp);
            fclose(fp);
            d++;
        }
    }
    if (d == 0)
    {
        printf("Procesor s tim imenom nije pronadjen!");
        fclose(view);
        for (;;) {
            srcproc(); break;
        }

    }
    return x;
}

void srcmat(int x)
{
    FILE* view = NULL;
    FILE* fp = NULL;
    char pretraga[30];
    char c;
    int d = 0;
    if (x == 1)
    {
        view = fopen("MaticneAMD", "rb");

    }
    else if (x == 2)
    {
        view = fopen("MaticneINTEL", "rb");
    }
    else {
        printf("Error!");
        for(;;){adminMenu();break;}
    }
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
    }
    printf("MATICNE:\n");
    while (fread(&racunalo.maticna, sizeof(racunalo.maticna), 1, view) != NULL) {
        printf("%d.%s  %s  %0.2f Kn\n", racunalo.maticna.id, racunalo.maticna.ime, racunalo.maticna.chipset, racunalo.maticna.cijena);
    }
    printf("Odaberite maticnu plocu za racunalo unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&racunalo.maticna, sizeof(racunalo.maticna), 1, view) != NULL) {
        if (strcmp(pretraga, racunalo.maticna.ime) == 0) {
            fp = fopen("Racunala.bin", "ab");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            fwrite(&racunalo.maticna, sizeof(racunalo.maticna), 1, fp);
            fclose(fp);
            d++;

        }

    }
    if (d == 0) {
        printf("Maticna s tim imenom nije pronadjena!");
        fclose(view);
        for (;;) {
            srcmat(x); break;
        }
    }
    fclose(view);
}

void srcRAM()
{
    FILE* view = NULL;
    FILE* fp = NULL;
    int x;
    char pretraga[30];
    char c;
    int d = 0;
    printf("RADNA MEMORIJA:\n");
    view = fopen("RAM", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        for(;;){adminMenu();break;}
    }
    while (fread(&racunalo.ram, sizeof(racunalo.ram), 1, view) != NULL) {
        printf("%d.%s  %s  %0.2f Kn\n", racunalo.ram.id, racunalo.ram.ime, racunalo.ram.size, racunalo.ram.cijena);
    }
    printf("Odaberite radnu memoriju za racunalo unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&racunalo.ram, sizeof(racunalo.ram), 1, view) != NULL) {
        if (strcmp(pretraga, racunalo.ram.ime) == 0) {
            fp = fopen("Racunala.bin", "ab");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            fwrite(&racunalo.ram, sizeof(racunalo.ram), 1, fp);
            fclose(fp);

            d++;

        }

    }
    if (d == 0) {
        printf("Radna memorija s tim imenom nije pronadjena!");
        fclose(view);
        for (;;) {
            srcRAM(); break;
        }
    }
    fclose(view);
}

void srcgpu()
{
    FILE* view = NULL;
    FILE* fp = NULL;
    int x;
    char pretraga[30];
    char c;
    int d = 0;
    printf("GRAFICKE:");
    view = fopen("Graficke", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        for(;;){adminMenu();break;}
    }
    while (fread(&racunalo.graficka, sizeof(racunalo.graficka), 1, view) != NULL) {
        printf("%d.%s  %s  %0.2f Kn\n", racunalo.graficka.id, racunalo.graficka.ime, racunalo.graficka.ram, racunalo.graficka.cijena);
    }
    printf("Odaberite graficku karticu za racunalo unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&racunalo.graficka, sizeof(racunalo.graficka), 1, view) != NULL) {
        if (strcmp(pretraga, racunalo.graficka.ime) == 0) {
            fp = fopen("Racunala.bin", "ab");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            fwrite(&racunalo.graficka, sizeof(racunalo.graficka), 1, fp);
            fclose(fp);

            d++;
        }

    }
    if (d == 0) {
        printf("Graficka kartica s tim imenom nije pronadjena!");
        fclose(view);
        for (;;) {
            srcgpu(); break;
        }
    }
    fclose(view);
}

void srcpsu()
{
    FILE* view = NULL;
    FILE* fp = NULL;
    int x;
    char pretraga[30];
    char c;
    int d = 0;
    printf("NAPAJANJE:");
    view = fopen("Napajanja", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        for(;;){adminMenu();break;}
    }
    while (fread(&racunalo.psu, sizeof(racunalo.psu), 1, view) != NULL) {
        printf("%d.%s  %s  %0.2f Kn\n", racunalo.psu.id, racunalo.psu.ime, racunalo.psu.output, racunalo.psu.cijena);
    }
    printf("Odaberite napajanje za racunalo unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&racunalo.psu, sizeof(racunalo.psu), 1, view) != NULL) {
        if (strcmp(pretraga, racunalo.psu.ime) == 0) {
            fp = fopen("Racunala.bin", "ab");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            fwrite(&racunalo.psu, sizeof(racunalo.psu), 1, fp);
            fclose(fp);
            d++;


        }

    }
    if (d == 0) {
        printf("Napajanje s tim imenom nije pronadjena!");
        fclose(view);
        for (;;) {
            srcpsu(); break;
        }
    }
    fclose(view);
}

void srccase()
{
    FILE* view = NULL;
    FILE* fp = NULL;
    int x;
    char pretraga[30];
    char c;
    int d = 0;
    printf("KUCISTA:\n");
    view = fopen("Kucista", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        for(;;){adminMenu();break;}
    }
    while (fread(&racunalo.kuciste, sizeof(racunalo.kuciste), 1, view) != NULL) {
        printf("%d.%s %0.2f Kn\n", racunalo.kuciste.id, racunalo.kuciste.ime, racunalo.kuciste.cijena);
    }
    printf("Odaberite napajanje za racunalo unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&racunalo.kuciste, sizeof(racunalo.kuciste), 1, view) != NULL) {
        if (strcmp(pretraga, racunalo.kuciste.ime) == 0) {
            fp = fopen("Racunala.bin", "ab");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            fwrite(&racunalo.kuciste, sizeof(racunalo.kuciste), 1, fp);
            fclose(fp);
            d++;

        }

    }
    if (d == 0) {
        printf("Kuciste s tim imenom nije pronadjena!");
        fclose(view);
        for (;;) {
           srccase(); break;
        }
    }
    fclose(view);
}


void ispisKomponenti()
{

    do
    {
        int i = 0;
        system("cls");
        printf("1.Procesori.\n");
        printf("2.Maticne ploce.\n");
        printf("3.Radna memorija.\n");
        printf("4.Graficke kartice.\n");
        printf("5.Napajanje.\n");
        printf("6.Kucista.\n");
        printf("7.Gotova racunala.\n");
        printf("8.Povratak u admin menu.\n");
        printf("///////////////////////\n");
        printf("Unesite broj koji odgovara izborniku:");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
        {
            FILE* view = NULL;
            int x=0;
            char c;
            printf("Odaberite procesor:\n");
            printf("1.AMD\n");
            printf("2.INTEL\n");
            printf("////////////\n");
            printf("3.Povratka u Admin menu\n");

            scanf("%d", &x);
            if (x == 1)
            {
                view = fopen("ProcesoriAMD", "rb");
            }
            else if (x == 2)
            {
                view = fopen("ProcesoriINTEL", "rb");
            }
            else
            {
                printf("Pogresan unos!");
                return;
            }
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            printf("PROCESORI:\n");
            while (fread(&racunalo.procesor, sizeof(racunalo.procesor), 1, view) != NULL) {
                printf("%d.%s  %s %s %s  %0.2f Kn\n", racunalo.procesor.id, racunalo.procesor.ime, racunalo.procesor.clock, racunalo.procesor.brojjezgri, racunalo.procesor.brojtredova, racunalo.procesor.cijena);
            }
            fclose(view);
            system("cls");
            return;
           
            break;
        }
        case 2:
        {
            FILE* view = NULL;
            char c;
            int x=0;
            if (x == 1)
            {
                view = fopen("MaticneAMD", "rb");

            }
            else if (x == 2)
            {
                view = fopen("MaticneINTEL", "rb");
            }
            else {
                printf("Pogresan unos!");
                return;
            }
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
            }
            printf("MATICNE:\n");
            while (fread(&racunalo.maticna, sizeof(racunalo.maticna), 1, view) != NULL) {
                printf("%d.%s  %s  %0.2f Kn\n", racunalo.maticna.id, racunalo.maticna.ime, racunalo.maticna.chipset, racunalo.maticna.cijena);
            }
            fclose(view);
            system("cls");
            return;

            break;
        }
        case 3:
        {
            FILE* view = NULL;
            printf("RADNA MEMORIJA:\n");
            view = fopen("RAM", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            while (fread(&racunalo.ram, sizeof(racunalo.ram), 1, view) != NULL) {
                printf("%d.%s  %s  %0.2f Kn\n", racunalo.ram.id, racunalo.ram.ime, racunalo.ram.size, racunalo.ram.cijena);
            }
            fclose(view);
            system("cls");
            return;

            break;
        }
        case 4:
        {
            FILE* view = NULL;
            printf("GRAFICKE:");
            view = fopen("Graficke", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            while (fread(&racunalo.graficka, sizeof(racunalo.graficka), 1, view) != NULL) {
                printf("%d.%s  %s  %0.2f Kn\n", racunalo.graficka.id, racunalo.graficka.ime, racunalo.graficka.ram, racunalo.graficka.cijena);
            }
            fclose(view);
            system("cls");
            return;
            break;
        }
        case 5:
        {
            FILE* view = NULL;
            printf("NAPAJANJE:");
            view = fopen("Napajanja", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            while (fread(&racunalo.psu, sizeof(racunalo.psu), 1, view) != NULL) {
                printf("%d.%s  %s  %0.2f Kn\n", racunalo.psu.id, racunalo.psu.ime, racunalo.psu.output, racunalo.psu.cijena);
            }
            fclose(view);
            system("cls");
            return;
            break;
        }
        case 6:
        {
            FILE* view = NULL;
            printf("KUCISTA:\n");
            view = fopen("Kucista", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                for(;;){adminMenu();break;}
            }
            while (fread(&racunalo.kuciste, sizeof(racunalo.kuciste), 1, view) != NULL) {
                printf("%d.%s %0.2f Kn\n", racunalo.kuciste.id, racunalo.kuciste.ime, racunalo.kuciste.cijena);
            }
            fclose(view);
            system("cls");
            return;
            break;
        }
        case 7:
        {
            {
                FILE* view = NULL;
                RACUNALO* array = NULL;
                printf("RACUNALA:\n");
                view = fopen("Racunala.bin", "rb");
                if (view == NULL)
                {
                    perror("Otvaranje dokumenta");
                    for(;;){adminMenu();break;}
                }

                while (fread(&racunalo, sizeof(RACUNALO), 1, view) != 0) {
                    printf("%s\n %s\n %s\n %s\n %s\n %s\n", racunalo.procesor.ime, racunalo.maticna.ime, racunalo.ram.ime, racunalo.graficka.ime, racunalo.psu.ime, racunalo.kuciste.ime);
                }
                fclose(view);
                system("cls");
                return;
                break;
            }

        }
        case 8:
        {
            for (;;)
            {
                izbornik();
                break;
            }
            system("cls");
            break;
        }
        default:
        {
            printf("\aPonovite unos");
            for (;;)
            {
                izbornik();
                break;
            }
        }
        }
    } while (1);
}