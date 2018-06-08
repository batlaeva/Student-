#pragma once
#include "human.h"
#include <string>
#include <vector>
using namespace std;

class teacher : public human {
private:
	vector<string> subjects;//��������, ������� ����
	string position;//�0���0���
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