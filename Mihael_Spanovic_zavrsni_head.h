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


//FUNKCIJE ADMIN
void izbornik();
void adminLogin();
void buyerLogin();
void adminMenu();
void unosKomponenti();
void brisanjeKomponenti();
void slaganjeRacunala();

//FUNKCIJE ISPISA/PRETRAGE
void ispisKomponenti();
int srcproc();
void srcmat(int);
void srcRAM();
void srcgpu();
void srcpsu();
void srccase();

//FUNKCIJE KUPAC
void izbornikk();
RACUNALO kupnjakomp();
RACUNALO kupnjaracunala();
int securecheck();

//SORTIRANJE
void selectionSortProc(PROCESOR*, const int);
void zamjenaProc(PROCESOR*, PROCESOR*);
void selectionSortMaticne(MATICNA*, const int);
void zamjenaMat(MATICNA*, MATICNA*);
void zamjenaRAM(RAM*, RAM*);
void selectionSortRAM(RAM*, const int);
void zamjenaGpu(GPU*, GPU*);
void selectionSortGpu(GPU*, const int);
void zamjenaPSU(NAPAJANJE*, NAPAJANJE*);
void selectionSortPSU(NAPAJANJE*, const int);
void zamjenaKUCISTE(KUCISTE*, KUCISTE*);
void selectionSortKUCISTE(KUCISTE*, const int);

//ALOKACIJA
PROCESOR* memoryallocProcesor(PROCESOR*,int );
MATICNA* memoryalloMaticna(MATICNA*, int);
RAM* memoryalloRAM(RAM*, int);
GPU* memoryalloGPU(GPU*, int);
NAPAJANJE* memoryalloPSU(NAPAJANJE*, int);
KUCISTE* memoryalloKUCISTE(KUCISTE*, int);
RACUNALO* memoryalloRACUNALA(RACUNALO*, int);


#endif