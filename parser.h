//------------------------------------//
// author: Daniele Barattieri
// email: danielebarattieri@gmail.com
// github: @MrMoDDoM
// file_name: parser.h
//------------------------------------//
// Questo programma automatizza le procedure di acquisizione dei dati da riga di comando
// Mette a disposizione funzioni che, ricevendo in ingresso la riga di comando utilizzata per chiamare il programma
// Controlla la presenza di "flag" (es. -f) e restituisce il tipo di dato richiesto, successivo al flag.
// Per esempio, chiamando "./es -f 123" e utilizzando la funzione 'flagToInt", verra' restituito il valore '123'.
//------------------------------------//

#include <stdio.h>
#include <string.h>
#include <math.h>

#if !defined TRUE
        #define TRUE 1
#endif

#if !defined FALSE
        #define FALSE 0
#endif

//---------HEADER----------------//

//-----------Funzioni pubbliche-------------//
int *flagToInt(char *input[], char *flag);

float *flagToFloat(char *input[], char *flag);

char *flagToString(char *input[], char *flag);

int checkFlag(char *input[], char *flag);

int *posToInt(char *input[], int pos);

float *posToFloat(char *input[], int pos);

char *posToString(char *input[], int pos);
//------------------------------------------//

//Funzioni private. NON USARE

int *checkInt(char *input);

float *checkFloat(char *input);

//----------------------------//
