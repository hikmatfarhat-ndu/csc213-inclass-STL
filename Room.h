#pragma once
#include <string>         
class NoCopy {
	int _x;
public:
	NoCopy(int x) :_x(x) {}
	void setX(int v) {
		_x = v;
	}
	int getX() {
		return _x;
	}
	NoCopy& operator=(const NoCopy& rhs) {
		_x = rhs._x;
		return *this;
	}
	NoCopy(const NoCopy& rhs) = delete;
	/* we have to supply a move constructor otherwise
	   it is implicity deleted because of
	   the delete for the constructor
	   */
     NoCopy(const NoCopy&& rhs) noexcept {
		_x = rhs._x;
	}
};

class Room {
private:
	std::string name;
	std::string bldg;
public:
	Room(std::string n,std::string b) :name(n), bldg(b) {}
	virtual std::string print() const {
		return bldg + " " + name;
	}
};

class ClassRoom : public Room {
	int _capacity;
public:
	ClassRoom(std::string n, std::string b,int c) :Room(n,b),_capacity(c) {}
	std::string print() const {
		//return bldg + " " + name + "-" + std::to_std::string(capacity);
		return Room::print() + "-" + std::to_string(_capacity);
	}
	int capacity() const {
		return _capacity;
	}
	bool operator<(const ClassRoom& rhs) const {
		return (capacity() < rhs.capacity());
	}
	bool operator>(const ClassRoom& rhs) const {
		return (capacity() > rhs.capacity());
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