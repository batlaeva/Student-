#pragma once
#include "human.h"
#include <string>
#include <vector>
using namespace std;

class teacher : public human {
private:
	vector<string> subjects;//предметы, которые ведёт
	string position;//д0лжн0сть
public:
	teacher(string last_name, string name, string second_name, string position, vector<string> subjects) : human(last_name, name, second_name) {
		this->subjects = subjects;
		this->position = position;
	}

	string get_subjects() {
		ostringstream full_subjects;
		for (unsigned int i = 0; i < this->subjects.size(); ++i)
			full_subjects << this->subjects[i] << ", ";
		return full_subjects.str();
	}
	string get_position() {
		return this->position;
	}
};