#include<stdio.h>
#include<stdlib.h>
//#include <windows.h>

void gotoxy(int x,int y);
int tabuada(int i, int j,int k);

int main(){
	int i,j,k=3;
	printf ("Ola, bem vindo!\n");
	for(i=1,j=1;i<10;i++,k++){
		if((i==2)||(i==3)) k=3;
		if((i==4)||(i==5)||(i==6)) k=14;
		if((i==7)||(i==8)||(i==9)) k=25;
		k=tabuada(i,j,k);
	}
	return 0;
}

//	SE LINUX
void gotoxy(int x,int y){
	printf("%c[%d;%df",0x1B,y,x);
}

//	SE WINDOWS
// void gotoxy(int x, int y){
//      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
// }

int tabuada(int i, int j,int k){
	if (j<1) return 1;
	else if(j<=10){
		if((i==1)||(i==4)||(i==7)){
			gotoxy(0,k);
			printf ("%d x %d = %d\n", i, j, i*j);
		}
		if((i==2)||(i==5)||(i==8)){
			gotoxy(20,k);
			printf ("%d x %d = %d\n", i, j, i*j);
		}
		if((i==3)||(i==6)||(i==9)){
			gotoxy(40,k);
			printf ("%d x %d = %d\n", i, j, i*j);
		}
		return tabuada(i, j+1,k+1);
	}
}
