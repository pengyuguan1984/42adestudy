#include <unistd.h>

void display_character(char c){
	write(1,&c,1);
}
int main(){
	char character = 'A';
	display_character(character);
	return 0;
}
