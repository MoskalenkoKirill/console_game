#include <iostream>
#include <windows.h>
#include <vector>
#include "print.h"
#include "bots.h"

extern struct Players players;

void rules()
{

}

void greeting_Gon() // ������ ������� ����
{
	
	std::cout << players.gon.get_name() << ": hey, friend!";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": Just a moment";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": Do you want play game?";
	Sleep(4000);
	system("cls");
}

void your_choise_in_greeting_Gon() // ����� ���� ��� ������� � �����
{
	std::cout << "choose your answer:\n1. Hello. What's the game?\n2. Hello. Eemmmm. Who are you?\n enter(1 or 2): ";
}

void rules_rock_paper_scissors()
{
	std::cout << players.gon.get_name() << ": Players start each round by saying, \"rock, paper, scissors, shoot!\" ";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": On \"shoot\", each player holds out their fist for rock";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": flat hand for paper";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": or their index and middle finger for scissors";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": first shoot must be rock";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": the one who shoot another - loses";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": Rock crushes scissors";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": scissors cut paper";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": and paper covers rock";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": See who wins each round!";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": We play up to three wins";
	Sleep(4000);
	system("cls");
}

void acquaintance()
{
	std::cout << players.gon.get_name() << ": O, sorry ";
	Sleep(4000);
	system("cls");
	players.gon.set_name("Gon"); // ������������� ����� ����
	std::cout << players.gon.get_name() << ": My name's " << players.gon.get_name();
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": I'm funny boy, which want to play)";
	Sleep(4000);
	system("cls");
	std::cout << players.player.get_real_name() << ": Okay " << players.gon.get_name();
	Sleep(4000);
	system("cls");
	std::cout << players.player.get_real_name() << ": My name's \n enter(enter your name): ";
	std::string name;
	std::cin >> name;
	players.player.set_real_name(name); // ������������� ����� ������
	system("cls");
}

void your_choise_one_in_greeting_Gon() // ������ ���
{
	std::cout <<players.player.get_real_name()<< ": Hello. What's the game?";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": O, It's easy game";
	Sleep(4000);
	system("cls");
	rules_rock_paper_scissors();
}

void your_choise_two_in_greeting_Gon() // ������ ���
{
	std::cout << players.player.get_real_name() << ": Hello. Eemmmm. Who are you? ";
	Sleep(4000);
	system("cls");
	acquaintance();
	std::cout << players.gon.get_name() << ": Okay " << players.player.get_real_name() << ", so, do you want to play?";
	Sleep(4000);
	system("cls");
	std::cout << players.player.get_real_name() << ": What's the game?";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": O, It's easy game";
	Sleep(4000);
	system("cls");
	rules_rock_paper_scissors();
}

void start_congratulations_one() // ����������� ������� ����
{
	std::cout << players.gon.get_name() << ": It was nice game ";
	Sleep(4000);
	system("cls");
	std::cout << players.player.get_real_name() << ": Thank you, I like it";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": Do you want to play more games with my friend?";
	Sleep(4000);
	system("cls");
	std::cout << players.player.get_real_name() << ": First of all, I want ask";
	Sleep(4000);
	system("cls");
	std::cout << players.player.get_real_name() << ": Who are you?";
	Sleep(4000);
	system("cls");
	acquaintance();
	std::cout << players.gon.get_name() << ": Okay " << players.player.get_real_name();
	Sleep(4000);
	system("cls");
	std::cout << players.player.get_real_name() << ": So, do you want play more?";
	Sleep(4000);
	system("cls");
}

void start_congratulations_two() // ����������� ������� ����
{
	std::cout << players.gon.get_name() << ": It was nice game ";
	Sleep(4000);
	system("cls");
	std::cout << players.player.get_real_name() << ": Thank you, I like it";
	Sleep(4000);
	system("cls");
	std::cout << players.gon.get_name() << ": Do you want to play more games with my friend?";
	Sleep(4000);
	system("cls");
	
}
