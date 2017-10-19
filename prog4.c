#include <stdio.h>

int mnoz(int a, int b) {return a*b;}
int dodaj(int a, int b) {return a+b;}


int main(void)
{

	int a = 2, b=5;   /* deklaracja wraz z inicjalizacja */
	char wybor= '*';

/*if (wyrazenie) {blok jesli wyrazenie prawdziwe} else {blok jesliu wyrazenie falszywe}*/


	if(wybor == '*') 
{
	
	printf("wynik mnozenia: %i\n", mnoz(a,b));

}else{

	printf("wynik dodawania: %i\n", dodaj(a,b));
};


	putchar('\n');  /*znak konca lini*/

	return 0;
}
