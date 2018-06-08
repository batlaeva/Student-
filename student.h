#pragma once

#include "human.h"
#include <string>
#include <vector>
#include <map>
using namespace std;

class student : public human {
private:
	int year;//курс
	string major;//направление специальности
	map<string, vector<int>> scores;
public:
	student(string last_name, string name, string second_name, int year, string major) : human(last_name, name, second_name) {
		this->year = year;
		this->major = major;
	}

	void set_subject_mark(string subject, vector<int> marks) {
		this->scores.insert(pair<string, vector<int>>(subject, marks));
	}

	string print_subject_mark() {
		ostringstream result;
		for (map<string, vector<int>>::iterator i = this->scores.begin(); i != this->scores.end(); ++i)
		{
			result << (*i).first << " : ";
			vector<int> temp = (*i).second;
			for (int ii = 0; ii < temp.size(); ii++)
			{
				result << temp[ii] << ", ";
			}
			result << endl;
		}
		return result.str();
	}

	string get_info() {
		ostringstream result;
		result << this->year << " курс, " <<
			this->major;
		return result.str();
	}
};