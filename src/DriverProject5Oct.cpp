//============================================================================
// Name        : DriverProject5Oct.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include "Person.h"
#include "Student.h"
#include "Timer.h"

using namespace std;
using namespace EDU::NEU::CSYE6205;

//bool custsort(Person v1,Person v2){
//	return v1.s_GPA<v2.s_GPA;
//}
bool custsort(Person * v1,Person * v2){
	return v1->s_GPA > v2->s_GPA;
}
bool custsort2(Person * v1,Person * v2){
	return v1->age > v2->age;
}

int main() {

	vector <Person *> dae;

		Student s1;
		s1.fname = "Alf";
		s1.lastname = "Fla";
		s1.age = 21;
		s1.s_GPA = 3.21; //static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/4.00));
		Timer t;
		dae.push_back(&s1);
		cout << "Time for one push_back on full vector: " << t << endl;
		cout << "#######################################" << endl;


		Student s4;
		s4.fname = "tAlf";
		s4.lastname = "Flat";
		s4.age = 24;
		s4.s_GPA = 2.54; //static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/4.00));
		dae.push_back(&s4);


		Student s5;
		s5.fname = "bAlf";
		s5.lastname = "Flab";
		s5.age = 25;
		s5.s_GPA =  3.87;//static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/4.00));
		dae.push_back(&s5);


		Student s6;
		s6.fname = "Alfa";
		s6.lastname = "aFla";
		s6.age = 26;
		s6.s_GPA = 2.65;  //static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/4.00));
		dae.push_back(&s6);


		Student s7;
		s7.fname = "cAlf";
		s7.lastname = "Flac";
		s7.age = 27;
		s7.s_GPA = 3.58; //static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/4.00));
		dae.push_back(&s7);

cout<< dae.size() << " students in Class"<< endl;
cout << "#######################################" << endl;
Timer t3;
	for (Person *pers:dae){
		pers->info();
	}
cout << "Time for checking elements of full vector using ptr " << t3 << endl;
//	sort(dae.begin(),dae.end(),custsort);
//	for (Person *pers:dae){
//		pers->info();
//	}
cout << "#######################################" << endl;
cout << "Mapping the students" << endl;
cout << "#######################################" << endl;
map<string,float>stmap;
	for (Person *pers:dae){
		string str =pers->fname;
			stmap[str]=pers->s_GPA;
		}
	Timer t2;
for(Person *pers:dae){
	cout<<pers->fname << " " <<pers->lastname << " has a current GPA " << stmap[pers->fname] << endl;
}
cout << "#######################################" << endl;
cout << "Time for checking elements of full vector using map " << t2 << endl;
cout << "#######################################" << endl;
cout << " Sorting now" << endl;
cout << "#######################################" << endl;
//Create a vector container
sort(dae.begin(),dae.end(),custsort);
cout << "Current Rankings as following" << endl;
for (Person *pers:dae){
		pers->info();
	}
// so
cout << "#######################################" << endl;
sort(dae.begin(),dae.end(),custsort2);

cout << "Students in class sorted Oldest to youngest." << endl;
cout << "#######################################" << endl;
for (Person *pers:dae){
		pers->info2();
	}
cout << "#######################################" << endl;
return 1;
}
