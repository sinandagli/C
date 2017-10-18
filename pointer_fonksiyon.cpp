#include <stdio.h>
#include <conio.h>
void fonksiyon1(int);
void fonksiyon2(int);
void fonksiyon3(int);
int main () {
	void (*islem[3])(int)={fonksiyon1,fonksiyon2,fonksiyon3};
	int secim;
	do {
		printf("seciminizi giriniz:");
		scanf("%d",&secim);
		(*islem[secim])(secim);
	}

	while(secim >=0 && secim <3 );
	
	
	
}
void fonksiyon1(int a) 
 { 
 printf ("%d ile fonksiyon 1 cagirildi\n",a);
 
 }
 
 void fonksiyon2(int b) 
 { 
 printf ("%d ile fonksiyon 2 cagirildi\n",b);
 
 }
 void fonksiyon3(int c) 
 { 
 printf ("%d ile fonksiyon 3 cagirildi\n",c);
 
 }

