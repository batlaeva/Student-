// students.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "human.h"
#include "student.h"
#include "teacher.h"
#include <locale.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");

	student *stud = new student("Иванов", "Иван", "Иванович", 2, "Машиностроение");
	vector<int> marks;
	marks.push_back(4);
	marks.push_back(4);
	marks.push_back(5);
	stud->set_subject_mark("Мат. анализ", marks);
	marks.clear();
	marks.push_back(2);
	marks.push_back(4);
	marks.push_back(4);
	stud->set_subject_mark("Русский", marks);

	cout << stud->get_full_name() << ", " << stud->get_info() << " :" << endl;
	cout << stud->print_subject_mark();
	vector<string> sub;
	sub.push_back("мат. анализ");
	sub.push_back("дискр. мат.");
	teacher *te = new teacher("Поляков","Иван","Иванович", "Зам. кафедры",sub);

	cout << "------------------------------------" << endl;
	cout << te->get_full_name() << ", " << te->get_position() << " :" << endl;
	cout << te->get_subjects() << endl;

	system("pause");
    return 0;
}

