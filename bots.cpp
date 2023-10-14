#include <iostream>
#include <vector>
#include "bots.h"

struct Variants var;

std::string Bots::set_name(std::string name)  // ������������� �����
{
	name_ = name;
	return name_;
}

std::string Bots::get_name()  // ������� �����
{
	return name_;
}

std::string set_name_for_player_by_other() // ������������� ����� ������ ������
{

	std::string name = var.var_names_of_player[rand() % 3];
	return name;
}

std::string Player::set_real_name(std::string real_name) // ������������� ���������� �����
{
	real_name_ = real_name;
	return real_name_;
}

std::string Player::get_real_name() // ������� ���������� �����
{
	return real_name_;
}
