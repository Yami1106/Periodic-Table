#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "elementinfo.h"
int i;
void srch();

void clrscr() {
    system("@cls||clear");
}

void newScreen() {
	clrscr();
	int width = 132;
	char str[] = "\033[31;1;51;4m MORDERN PERIODIC TABLE\033[0m\n";
	int length = sizeof(str) - 1;
	int pad = (length >= width) ? 0 : (width - length) / 2;
	printf("%*.*s%s\n", pad, pad, " ", str);
	for(int i=0; i<10; i++){
		printf("\n");
	}
}

void quit() {
	newScreen();
	char ans[5];
	printf("\033[31mARE YOU SURE YOU WANT TO QUIT? IF YES ENTER Y IF NO ENTER N\033[0m");
	scanf("%s",ans);
	if (tolower(ans[0])=='y'){
		printf("\n\n\n\n\033[35mTHANK YOU\033[0m\n\n");
	} else {
		main();
	}
}

void again() {
	char ans1[5];
	printf("\n\n\n\n\033[32mSEARCH FOR A DIFFERENT ELEMENT? (Y/N): \033[0m");
	scanf("%s",ans1);
	if (tolower(ans1[0])=='y'){
		srch();
	} else {
		quit();
	}
	printf("\n\n\n\n\n\n\n\n\n\n");
}

void name() {
	newScreen();
	char ele[20];
	printf("\033[32mENTER THE ELEMENT'S NAME(IN BLOCK LETTERS): \033[0m");
	scanf("%s",ele);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].name,ele)==0){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atmnum);
			printf("\033[34m\n\n\tMETALIC NATURE : %s\033[0m\n",atom[i].nature);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atmwt);
			break;
		}
	}
	again();
}

void symbol() {
	newScreen();
	char sym[1];
	printf("\033[32mENTER THE ELEMENT'S SYMBOL : \033[0m");
	scanf("%s",sym);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].symbol,sym)==0){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atmnum);
			printf("\033[34m\n\n\tMETALIC NATURE : %s\033[0m\n",atom[i].nature);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atmwt);
			break;
		}
	}
	again();
}

void no() {
	newScreen();
	int atn;
	printf("\033[32mENTER THE ELEMENT'S ATOMIC NUMBER : \033[0m");
	scanf("%d",&atn);
	for (i=0; i<118; i++) {
		if (atom[i].atmnum==atn){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atmnum);
			printf("\033[34m\n\n\tMETALIC NATURE : %s\033[0m\n",atom[i].nature);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atmwt);
			break;
		}
	}
	again();
}
void weight() {
	newScreen();
	float atwt;
	printf("\033[32mENTER THE ELEMENT'S ATOMIC WEIGHT : \033[0m");
	scanf("%f",&atwt);
	for (i=0; i<118; i++) {
		if (atom[i].atmwt==atwt){
			printf("\033[34m\n\n\tELEMENT : %s\033[0m\n",atom[i].name);
			printf("\033[34m\n\n\tSYMBOL : %s\033[0m\n",atom[i].symbol);
			printf("\033[34m\n\n\tATOMIC NUMBER : %d\033[0m\n",atom[i].atmnum);
			printf("\033[34m\n\n\tMETALIC NATURE : %s\033[0m\n",atom[i].nature);
			printf("\033[34m\n\n\tATOMIC WEIGHT : %f\033[0m\n",atom[i].atmwt);
			break;
		}
	}
	again();
}

void srch() {
	newScreen();
	printf("\033[33mSREACH BY :- \033[0m\n\n");
	printf("\033[34m\t1 -> ELEMENT\033[0m\n");
	printf("\033[34m\t2 -> SYMBOL\033[0m\n");
	printf("\033[34m\t3 -> ATOMIC NUMBER\033[0m\n");
	printf("\033[34m\t4 -> ATOMIC WEIGHT\033[0m\n");
	printf("\033[34m\t5 -> QUIT\033[0m\n");
	int choice2;
	printf("\033[32m\nYOUR CHOICE : \033[0m");
	scanf("%d",&choice2);
	switch(choice2){
	case 1 :
		name();
		break;
	case 2:
		symbol();
		break;
    case 3:
		no();
		break;
    case 4:
        weight();
        break;
    case 5:
        quit();
        break;
    default:
		srch();
}}

int main() {
	newScreen();
	printf("\033[34m1 -> EXPLORE\033[0m\n");
	printf("\033[34m2 -> QUIT\033[0m\n\n\n\n");
	int choice1;
	printf("\033[32mYOUR CHOICE : \033[0m");
	scanf("%d",&choice1);
	data();
	switch(choice1){
	case 1:
		srch();
		break;
    case 2:
		quit();
		break;
    default :
	  printf("\033[32mPlease enter a valid choice\033[0m");
		main();
		break;

	}
}
