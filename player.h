#include <stdlib.h>
#include <string>
#include <list>
#include <algorithm>
#include <iostream>


using namespace std;
using namespace System;
public ref class player
{
private:
	System::String^ name; // Имя бойца
	int health = 0; // Хиты
	int max_health = 0; // Макс хиты
	int initiative = 0; // Порядок инициативы
	System::String^ actor; // Герой или Злодей
	bool concentration = false; // Концентрируется?
public:
	player();
	player(player^ another);
	player(String^ _name, int _health, int _max_health, int _initiative, String^ _actor);
	bool operator < (player^ another);
	bool operator == (player^ another);
	bool operator != (player^ another);
	player^ operator= (player^ another);
	String^ get_name() {return name;};
	int get_initiative() {
		return initiative;
	}
	int get_health() {
		return health;
	}
	int get_max_health() {
		return max_health;
	}

	void set_initiative(int _init) {
		initiative = _init;
	}
	bool damage(int _damage);
	void set_concentration(bool alpha) {
		concentration = alpha;
	}
	bool get_concentration() {
		return concentration;
	}
};