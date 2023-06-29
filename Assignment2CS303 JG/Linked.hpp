#pragma once
#include<iostream>
class Employee {
private:
	
public:
	int vacDays;
	int healthCon;
	bool operator==(const Employee& other) const;

};

class Professional : public Employee {
	int monSal;
};
class nonProfessional :public Employee {
	int hourly;
};
struct Node {
	Employee data;
	Node* nextPtr;
};
class list {
private:
	Node* headPtr = nullptr;
	int num_Items=0;
public:
	list();
	list(Employee e);
	void push_front(Employee e);
	void push_back(Employee e);
	void pop_back();
	void pop_front();
	Employee front();
	Employee back();
	void empty();
	void insert(size_t index,const Employee&item);
	bool remove(size_t index);
	size_t find(const Employee& item);
	void Print();

};

