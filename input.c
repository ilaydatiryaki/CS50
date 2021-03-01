#include<stdio.h>
#include<cs50.h>

int main( void )
{	
	char isim[30];
	printf( "What is your name? :");
	scanf( "%s", isim );
	printf( "Hello, %s\n", isim);
	return 0;
} 
