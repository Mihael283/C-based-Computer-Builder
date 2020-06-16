#ifndef Mihael_Spanovic_zavrsni_head
#define Mihael_Spanovic_zavrsni_head


typedef struct 
{
	int id;
	char ime[30];
	char clock[7];
	char brojjezgri[4];
	char brojtredova[4];
    float cijena;

}PROCESOR;

typedef struct
{
	int id;
	char ime[30];
	char chipset[7];
	float cijena;

}MATICNA;

typedef struct
{
	int id;
	char ime[30];
	char size[6];
	char brzina[8];
	float cijena;
}RAM;

typedef struct
{
	int id;
	char ime[30];
	char ram[5];
	float cijena;

}GPU;

typedef struct
{
	int id;
	char ime[30];
	char output[6];
	float cijena;

}NAPAJANJE;

typedef struct
{
	int id;
	char ime[30];
	float cijena;

}KUCISTE;

typedef struct 
{
	PROCESOR procesor;
	MATICNA maticna;
	RAM ram;
	GPU graficka;
	NAPAJANJE psu;
	KUCISTE kuciste;

}RACUNALO;

RACUNALO racunalo;



void izbornik();
void adminLogin();
void buyerLogin();
void adminMenu();
void unosKomponenti();
void brisanjeKomponenti();
void slaganjeRacunala();
void ispisKomponenti();
int alocMem(int);

int srcproc();
void srcmat(int);
void srcRAM();
void srcgpu();
void srcpsu();
void srccase();


void izbornikk();
RACUNALO* izdavanjeracuna();
void selectionSortProc(PROCESOR*, const int);
void zamjenaProc(PROCESOR*, PROCESOR*);
void zamjenaprocCijena(PROCESOR*, PROCESOR*);
void selectionSortProcCijena(PROCESOR*, const int);
void selectionSortMaticne(MATICNA*, const int);
void zamjenaMat(MATICNA*, MATICNA*);
void zamjenaMatCijena(MATICNA*, MATICNA*);
void selectionSortMatCijena(MATICNA*, const int);
PROCESOR* memoryallocProcesor(PROCESOR*,int n);
RACUNALO kupnjakomp();
#endif