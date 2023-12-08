#include "player.h"

bool player::operator < (player& another)
{
	if (initiative < another.initiative)
		return true;
	if (initiative == another.initiative && actor == "Villain")
		return (actor != another.actor);
	return false;
}

bool player::operator==(player& another)
{
	if (name != another.name)
		return false;
	return true;
}

bool player::operator!=(player& another)
{
	return !operator==(another);
}

player::player()
{
	name = "";
	health = 0;
	initiative = 0;
	actor = "Villain";
}
player::player(string _name, int _health, int _max_health, int _initiative, string _actor)
{
	name = _name;
	health = _health;
	max_health = _max_health;
	initiative = _initiative;
	actor = _actor;
}

bool player::damage(int _damage)
{
	health = (health - _damage > max_health) ? max_health : health - _damage;
	if (health <= 0) {
		if (actor == "Villain")
			return true;
		concentration = false;
	}
	return false;
}