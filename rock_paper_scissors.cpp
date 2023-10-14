#include <iostream>
#include <vector>
#include <windows.h>
#include "bots.h"
#include "rock_paper_scissors.h"

extern struct Players players;

enum Shoots : char  
{
	rock = 'O',
	paper = 177,
	scissors = 'X'
};

std::vector<Shoots> shoots = { rock, paper, scissors }; // ��� ������ ����

void print_score(unsigned char score_of_player, unsigned char score_of_Gon)
{
	system("cls");
	std::cout << players.player.get_real_name() << ": " << score_of_player << " points" << std::endl << players.gon.get_name() << ": " << score_of_Gon << " points" << std::endl;
	std::cout << "1. rock " << Shoots::rock << "\n2. paper " << Shoots::paper << "\n3. scissors " << Shoots::scissors << std::endl << std::endl;
}
void print_time(unsigned char score_of_player, unsigned char score_of_Gon)
{
	print_score(score_of_player, score_of_Gon);
	std::cout << "rock";
	Sleep(1000);
	print_score(score_of_player, score_of_Gon);
	std::cout << "paper";
	Sleep(1000);
	print_score(score_of_player, score_of_Gon);
	std::cout << "scissors";
	Sleep(1000);
	print_score(score_of_player, score_of_Gon);
	std::cout << "shoot!\n";
	Sleep(1000);
}

bool check(unsigned char score_of_player, unsigned char score_of_Gon)
{
	bool check = true;
	char flag='0';
	bool winner;   // true - player; false - Gon;
	int var1;
	
	do
	{
		print_time(score_of_player, score_of_Gon);
		std::cout << "your choice: ";
		std::cin >> var1;
		if (var1 < 4 && var1 > 0)
		{
			check = false;
		}
		else
		{
			std::cout << "error, enter nuber from 1 to 3";
			Sleep(4000);
			system("cls");
		}
	} while (check);
	int var2;
	int var_to_lose_Gon = 1 + rand() % 1000; // ��� � ������ ���� �������� �� ������(�������: � ������ ���� - ������)
	if (var_to_lose_Gon < 300)
	{
		srand(time(NULL));
		var2 = 1 + rand() % 3 - 1;;
	}
	else
	{
		var2 = 0;
	}
	auto shoot_of_player = shoots[var1 - 1];
	auto shoot_of_Gon = shoots[var2];
	if (shoot_of_player != Shoots::rock) // �������� ������ ���� �� ������ �����
	{
		std::cout << players.gon.get_name() << " winner" << std::endl;
		std::cout << players.player.get_real_name() << " shot a rock in the first game";
		Sleep(8000);
		winner = false;
	}
	else if (shoot_of_Gon != Shoots::rock) // �������� ������ ���� �� ������ ���
	{
		std::cout << players.player.get_real_name() << " winner" << std::endl;;
		std::cout << players.gon.get_name() << " shot a rock in the first game";
		Sleep(8000);
		winner = true;
	}
	else
	{
		do // ������ ���� �� ����� ����������
		{
			
			srand(time(NULL));
			check = true;
			do
			{
				print_time(score_of_player, score_of_Gon);
				std::cout << "your choice: ";
				std::cin >> var1;
				if (var1 < 4 && var1 > 0)
				{
					shoot_of_player = shoots[var1 - 1];
					check = false;
				}
				else
				{
					std::cout << "error, enter nuber from 1 to 3";
					Sleep(4000);
					system("cls");
				}
			} while (check);
			var2 = 1 + rand() % 3 - 1;
			shoot_of_Gon = shoots[var2];
//============= rock ========================================================
			if (shoot_of_player == rock && shoot_of_Gon == paper)
			{
				std::cout << players.player.get_real_name() << ": " << Shoots::rock << std::endl << players.gon.get_name() << ": " << Shoots::paper << std::endl;
				winner = false;
				std::cout << "paper covers rock. " << players.gon.get_name() << " winner";
				flag += 1;
			}
			else if (shoot_of_player == rock && shoot_of_Gon == scissors)
			{
				std::cout << players.player.get_real_name() << ": " << Shoots::rock << std::endl << players.gon.get_name() << ": " << Shoots::scissors << std::endl;
				winner = true;
				std::cout << "Rock crushes scissors. " << players.player.get_real_name() << " winner";
				flag += 1;
			}
			else if (shoot_of_player == rock && shoot_of_Gon == rock)
			{
				std::cout << players.player.get_real_name() << ": " << Shoots::rock << std::endl << players.gon.get_name() << ": " << Shoots::rock << std::endl;
				std::cout << "Rock and rock. Draw";
			}
//======================= paper ==================================================================================================
			else if (shoot_of_player == paper && shoot_of_Gon == paper)
			{
				std::cout << players.player.get_real_name() << ": " << Shoots::paper << std::endl << players.gon.get_name() << ": " << Shoots::paper << std::endl;
				std::cout << "Paper and Paper. Draw";
			}
			else if (shoot_of_player == paper && shoot_of_Gon == scissors)
			{
				std::cout << players.player.get_real_name() << ": " << Shoots::paper << std::endl << players.gon.get_name() << ": " << Shoots::scissors << std::endl;
				winner = false;
				std::cout << "scissors cut paper. " << players.gon.get_name() << " winner";
				flag += 1;
			}
			else if (shoot_of_player == paper && shoot_of_Gon == rock)
			{
				std::cout << players.player.get_real_name() << ": " << Shoots::paper << std::endl << players.gon.get_name() << ": " << Shoots::rock << std::endl;
				winner = true;
				std::cout << "paper covers rock. " << players.player.get_real_name() << " winner";
				flag += 1;
			}
//============= scissors ===========================================================================================================
			else if (shoot_of_player == scissors && shoot_of_Gon == paper)
			{
				std::cout << players.player.get_real_name() << ": " << Shoots::scissors << std::endl << players.gon.get_name() << ": " << Shoots::paper << std::endl;
				winner = true;
				std::cout << "scissors cut paper. " << players.player.get_real_name() << " winner";
				flag += 1;
			}
			else if (shoot_of_player == scissors && shoot_of_Gon == scissors)
			{
				std::cout << players.player.get_real_name() << ": " << Shoots::scissors << std::endl << players.gon.get_name() << ": " << Shoots::scissors << std::endl;
				std::cout << "Scissors and scissors. Draw";
			}
			else if (shoot_of_player == scissors && shoot_of_Gon == rock)
			{
				std::cout << players.player.get_real_name() << ": " << Shoots::scissors << std::endl << players.gon.get_name() << ": " << Shoots::rock << std::endl;
				winner = false;
				std::cout << "Rock crushes scissors. " << players.gon.get_name() << " winner";
				flag += 1;

			}
			Sleep(8000);
		} while (flag == '0');
	}
	return winner;
}
void rock_paper_scissors()
{
	unsigned char score_of_player{48};// 0
	unsigned char score_of_Gon{48}; // 0
	do
	{
		srand(time(NULL));
		print_score(score_of_player, score_of_Gon);
		for (size_t it = 5; it > 0; it--) // �������� ������ 
		{
			print_score(score_of_player, score_of_Gon);
			std::cout << it;
			Sleep(1000);
		}
		if (check(score_of_player, score_of_Gon) == true)
		{
			score_of_player += 1;
		}
		if (check(score_of_player, score_of_Gon) == false)
		{
			score_of_Gon += 1;
		}
	} while (score_of_Gon < 51 && score_of_player < 51);// 3
}
