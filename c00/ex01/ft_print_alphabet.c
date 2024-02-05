#include <stdio.h>


void printAlphabet(char alphabet[26]){
	for (int i=0;i<26;i++){
		printf ("%c\n",alphabet[i]);
	}
}

int main (){
	char myAlphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	printAlphabet(myAlphabet);
	return 0;
}
