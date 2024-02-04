#include <unistd.h>

void display_character(char c){
	write (STDOUT_FILEN0, &c,1);
}

int main(){
	char character = 'A';
	display_character(character);
	return 0;
}

