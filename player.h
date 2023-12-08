#include <stdlib.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>


using namespace std;
using namespace msclr::interop;

class player
{
private:
	string name; // ��� �����
	int health = 0; // ����
	int max_health = 0; // ���� ����
	int initiative = 0; // ������� ����������
	string actor; // ����� ��� ������
	bool concentration = false; // ���������������?
public:
	player();
	player(string _name, int _health, int _max_health, int _initiative, string _actor);
	bool operator < (player& another);
	bool operator == (player& another);
	bool operator != (player& another);
	string get_name() {return name;};
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