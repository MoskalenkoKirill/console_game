#include <iostream>
#include <windows.h>
#include <vector>
#include "bots.h"
#include "print.h"
#include "rock_paper_scissors.h"

struct Players players;
extern struct Variants var;

struct Players initPleers()    // задаём имена ботам
{
	players.alan.set_name("Alan");
	players.gon.set_name("_");
	players.soma.set_name("Soma");
	players.player.set_name(set_name_for_player_by_other());
	players.player.set_real_name("you");
	return players;
}
int start() // стартовая функция
{
	initPleers();
	greeting_Gon();
	
	char check = '1'; // flag для неправильного ввода
	do
	{
		check = '1';  //возврат исходных данных после неправильного ввода
		your_choise_in_greeting_Gon();
		char var;
		std::cin >> var;
		system("cls");
		if (var == '1')
		{
			your_choise_one_in_greeting_Gon();
			do
			{
				check = '1';  //возврат исходных данных после неправильного ввода
				std::cout << "choose your answer: 1. ok, let's go \t2. No, thanks \nenter(1 or 2): ";
				std::cin >> var;
				if (var == '1') // если хотим играть
				{
					rock_paper_scissors();
					start_congratulations_one();
					std::cout << "comming soon";
					return 0;
				}
				else if (var == '2') // если не хотим играть
				{
					std::cout << "no";
					return 0;
				}
				else
				{
					std::cout << "error";
					Sleep(3000);
					check = '0';
					system("cls");
				}
			} while (check == '0');
		}
		else if (var == '2')
		{
			your_choise_two_in_greeting_Gon();
			do
			{
				check = '1';  //возврат исходных данных после неправильного ввода
				std::cout << "choose your answer: 1. ok, let's go \t2. No, thanks \nenter(1 or 2): ";
				std::cin >> var;
				if (var == '1') // если хотим играть
				{
					rock_paper_scissors();
					start_congratulations_two();
					std::cout << "comming soon";
					return 0;
				}
				else if (var == '2') // если не хотим играть
				{
					std::cout << "no";
					return 0;
				}
				else
				{
					std::cout << "error";
					Sleep(3000);
					check = '0';
					system("cls");
				}
			} while (check=='0');
		}
		else
		{
			std::cout << "error";
			Sleep(3000);
			check = '0';
			system("cls");
		}
	} while (check=='0');
}

int main()
{
	srand(time(NULL));
	start();
	return 0;
}
