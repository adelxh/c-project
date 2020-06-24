// Developed by: Adel Akhmed
// Date: June 24, 2020

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int secret, guess;

	int tries = 0; 

	int con; 

	// random number generator
	srand(time(NULL)); 
	secret = rand() % 10 + 1;

	std::cout << "------------------------------" << std::endl; 
	std::cout << "||       Guessing Game      ||" << std::endl; 
	std::cout << "------------------------------" << std::endl; 
	std::cout << "This is a guessing game, you will need to guess a number between 1 and 10, you will have 5 tries to do so" << std::endl; 
	std::cout << "Press any key to continue: " << std::endl; 
	std::cin >> con; 

	do {
		std::cout << "Enter number between 1 and 10: "; 
		std::cin >> guess; 
		tries++;
		if (secret < guess) {
			std::cout << "Your gues was too high, try to guess lower" << std::endl; 
	
		}
		else if (secret > guess) {
			std::cout << "Your guess was too low, try to guess higher" << std::endl;
		} 
		if (tries == 5) {
			std::cout << "Sorry you run out of tries" << std::endl;
			break;
		}

		

	} while (secret != guess && tries != 3);
	
	std::cout << "Congratulations you guessed right!";

	return 0; 
}