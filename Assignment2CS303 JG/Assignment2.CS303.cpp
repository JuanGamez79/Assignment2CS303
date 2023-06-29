#include<iostream>
#include"Linked.hpp"
int main() {
	Employee Linked;
	Linked.vacDays = 5;
	Linked.healthCon = 2;
	list all;
	Employee Linked2;
	Linked2.vacDays = 2;
	Employee Linked3;
	Employee Linked4;
	Employee Linked5;
	Linked3.vacDays = 1;
	Linked4.vacDays = 4;
	Linked5.vacDays = 98;

	std::cout << "Push Front: ";
	all.push_back(Linked);
	all.push_back(Linked2);
	all.push_back(Linked3);
	all.Print();

	std::cout << "Push Front: ";
	all.push_front(Linked4);
	all.Print();

	std::cout << "Pop Front: ";
	all.pop_front();
	all.Print();

	std::cout << "Pop Back: ";
	all.pop_back();
	all.Print();

	 std::cout<<"Front: "<<all.front().vacDays<<std::endl;

	 std::cout << "Back: " << all.back().vacDays << std::endl;

	 Employee Linked6;
	 Employee Linked7;

	 Linked6.vacDays = 87;
	 Linked7.vacDays = 45;
	 
	 std::cout << "Insert: ";
	 all.insert(1, Linked6);
	 all.Print();

	 std::cout << "Remove: ";
	 all.remove(1);
	 all.Print();

	std::cout<<"Is at Index  "<< all.find(Linked)<<std::endl;

	all.empty();
	std::cout << "Empty: ";
	all.Print();


}