//------------------------------------//
// author: Daniele Barattieri
// email: danielebarattieri@gmail.com
// github: @MrMoDDoM
// file_name: parser.c
//------------------------------------//
// Questo programma automatizza le procedure di acquisizione dei dati da riga di comando
// Mette a disposizione funzioni che, ricevendo in ingresso la riga di comando utilizzata per chiamare il programma
// Controlla la presenza di "flag" (es. -f) e restituisce il tipo di dato richiesto, successivo al flag.
// Per esempio, chiamando "./es -f 123" e utilizzando la funzione 'flagToInt", verra' restituito il valore '123'.
//------------------------------------//

//INCLUDE
#include "parser.h"

//Funzioni pubbliche. Utilizzare queste funzioni
int flagToInt(char *input[], char *flag){

	int i=0;

	while (input[i]){
		if(strcmp(input[i],flag)==0){ //Flag trovato!
			if(input[i+1])        //Controllo anzi tutto che ci sia qualcosa dopo di lui
				return (int) checkInt(input[i+1]); //Poi controllo che sia un Int, e in caso lo restituisco
		} else i++; //Flag non trovato, procedo...
	}

	return NAN; //Se sono arrivato qui, il flag non e' stato trovato.
}

char *flagToString(char *input[], char *flag){

	int i=0;

	while (input[i]){
		if(strcmp(input[i],flag)==0) //Flag trovato!
			return input[i+1];   //Restituisco qualsiasi cosa ci sia dopo di lui, che sia NULL o meno. Possibili errori!!!
		else i++; //Flag non trovato, procedo...
	}

	return NULL; //Se sono arrivato qui, il flag non e' stato trovato.
}

int checkFlag(char *input[], char *flag){

	int i=0;

	while (input[i]){
		if(strcmp(input[i],flag)==0) return TRUE; //Flag trovato! Restituisco TRUE
		else i++; //Flag non trovato, procedo..
	}

	return FALSE;
}

int posToInt(char *input[], int pos){

	if(input[pos])
		return checkInt(input[pos]); //Credo che sia possibile aggiungere controlli di sicurezza..

	return NAN;
}

char *posToString(char *input[], int pos){

	return input[pos]; //Credo che sia possibile aggiungere dei controlli di sicurezza..

}

//Funzioni private, utili alle funzioni interne
int checkInt(char *input){

	int temp=0;

	if(sscanf (input, "%i", &temp)!=1){
		return NAN;
	} else return temp;
}
