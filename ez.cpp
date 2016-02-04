#include <iostream>
#include <stdio.h>
#include <unistd.h>


int count = 0;
char input;

int main(){
	std::cout<<"Enter a number other than 5\n\n--";
	std::cin >> input;
	
	while (input!=5){
		printf("Enter another number other than 5 and %d\n--", count);
		std::cin>>input;
		printf("%d\n", input);
		count = count + 1;
		if(count == 10){
			std::cout << "Wow, you're more patient than I am\n";
			unsigned int sleep(5);
			return 0;
		}
	}
	if(input == 5)
		std::cout<<"You weren't meant to enter the number 5!";

return 0;
}
