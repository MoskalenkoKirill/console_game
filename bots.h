#pragma once
#include <iostream>
#include <vector>
#include "print.h"
class Bots  // класс бота
{
public:
	std::string set_name(std::string name);
	std::string get_name();
	struct speeck
	{
		std::string greeting;
	};
private:
	std::string name_;
};

class Player : public Bots  // класс игрока
{
public:
	std::string set_real_name(std::string real_name);
	std::string get_real_name();
private:
	std::string real_name_;
};

struct Players  // структура игроков/ботов
{
	Bots alan;
	Bots gon;
	Bots soma;
	Player player;
};

struct Variants  //структура с вариантами 
{
	std::vector<std::string> var_names_of_player = { "trap", "loser", "L()X" };
};

std::string set_name_for_player_by_other();  // инициализация имени игрока Аланом
