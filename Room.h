#pragma once
#include <string>         

class Room {
private:
	std::string name;
	std::string bldg;
public:
	Room(std::string n,std::string b) :name(n), bldg(b) {}
	virtual std::string print() {
		return bldg + " " + name;
	}
};

class ClassRoom : public Room {
	int capacity;
public:
	ClassRoom(std::string n, std::string b,int c) :Room(n,b),capacity(c) {}
	std::string print() {
		//return bldg + " " + name + "-" + std::to_std::string(capacity);
		return Room::print() + "-" + std::to_string(capacity);
	}
};

class Office :public Room {
	std::string occupant;
public:
	Office(std::string n,  std::string b, std::string o) :Room(n, b), occupant(o) {}
	std::string print() {
		return Room::print() + "-" + occupant;

	}
};