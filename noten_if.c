#include<stdio.h>

int main () {

	/*
	* 	Dieses Programm soll eine Zahl einlesen und dann ausgeben, um welche Note in Schriftform es sich handelt.
	*/

	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *  Noten-Ausgabe über if * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Einlesen der Note
	int note;
	printf("\nBitte geben Sie die Note in Zahlform ein (1-6): ");
	scanf("%d",&note);

	//Prüfung der Eingabe
	if (note==1) {
		printf("\nDas entspricht der Note *sehr gut*\n");
	} else if (note==2) {
		printf("\nDas entspricht der Note *gut*\n");
	} else if (note==3) {
		printf("\nDas entspricht der Note *befriedigend*\n");
	} else if (note==4) {
		printf("\nDas entspricht der Note *ausreichend*\n");
	} else if (note==5) {
		printf("\nDas entspricht der Note *mangelhaft*\n");
	} else if (note==6) {
		printf("\nDas entspricht der Note *ungenügend*\n");
	} else {
		printf("\nIhre Eingabe ist ungültig. Bitte geben Sie eine Zahl zwischen 1-6 ein.\n");
	}


	//Ende
	printf("\n");
	return 0;
}
