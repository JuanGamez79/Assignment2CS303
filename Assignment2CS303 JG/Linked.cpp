#include "Linked.hpp"
#include<iostream>

list::list() {
	headPtr = nullptr;
	num_Items = 0;
}
list::list(Employee e) {
	Node* tempPtr = new Node;
	tempPtr->data = e;
	tempPtr->nextPtr = nullptr;
	headPtr = tempPtr;
	num_Items = 1;
}
void list::push_front(Employee e) {
	Node* newNode = new Node;
	newNode->data = e;
	newNode->nextPtr = headPtr;
		headPtr = newNode;
		num_Items++;

}
void list::push_back(Employee e) {
	Node* newNode = new Node;
	newNode->data = e;
	newNode->nextPtr = nullptr;
	if (headPtr == nullptr) {
		headPtr = newNode;
			return;
	}
	Node* temp = new Node;
	temp = headPtr;
	while (temp != nullptr) {
		if (temp->nextPtr == nullptr) {
			temp->nextPtr = newNode;
			break;
		}
		temp = temp->nextPtr;

	}
	num_Items++;
}
void list::pop_back() {
	if (headPtr == nullptr)
		return;
	if (headPtr->nextPtr == nullptr) {
		delete headPtr;
		headPtr = nullptr;
		return;
	}
	Node* newNode = headPtr;
	Node* last = nullptr;
	while (newNode->nextPtr != nullptr) {
		last = newNode;
		newNode = newNode->nextPtr;

	}
	delete newNode;
	newNode = nullptr;
	last->nextPtr = nullptr;
	num_Items--;
}
void list::pop_front(){
	Node* newNode = headPtr;
	headPtr = headPtr->nextPtr;
	delete newNode;
	newNode = nullptr;
	num_Items--;
	return;
	

}
Employee list::front() {
	return headPtr->data;
}
Employee list::back() {
	Node* temp = headPtr;
	while (temp->nextPtr != nullptr) {
		temp = temp->nextPtr;
	}
	return temp->data;
}
void list::empty() {
	if (headPtr == nullptr)
		return;
	while (headPtr != nullptr) {
		Node* newNode = headPtr;
		headPtr = headPtr->nextPtr;
		delete newNode;
		num_Items = 0;
}
}
void list::insert(size_t index, const Employee& item) {
	if (index == 0) {
		push_front(item);
		return;
	}
	Node* newNode = new Node;
	newNode->data = item;
	newNode->nextPtr = nullptr;

	Node* prev = nullptr;
	Node* current = headPtr;
	size_t curr = 0;
	while (current != nullptr && curr < index) {
		prev = current;
		current = current->nextPtr;
		curr++;
	}
	if (current != nullptr) {
		prev->nextPtr = newNode;
		newNode->nextPtr = current;

	}
	else
		prev->nextPtr = newNode;
	num_Items++;

}
bool list::remove(size_t index) {
	if (headPtr == nullptr)
		return false;
	num_Items--;
	if (index == 0) {
		pop_front();
		return true;
	}
	Node* prev = nullptr;
	Node* curr = headPtr;
	size_t currIndex = 0;

	while (curr != nullptr && currIndex < index) {
		prev = curr;
		curr = curr->nextPtr;
		currIndex++;
	}
	if (curr != nullptr) {
		prev->nextPtr = curr->nextPtr;
			delete curr;
		return true;
	}
	return false;
}
bool Employee::operator==(const Employee& other) const {
	return (vacDays == other.vacDays) && (healthCon == other.healthCon);
}
size_t list::find(const Employee& item) {
	Node* temp = headPtr;
	size_t index = 0;
	while (temp != nullptr){
		if (item == temp->data) {
			return index;
		}
		temp = temp->nextPtr;
		index++;
	}
	return num_Items;
}
void list::Print() {
	std::cout << "Linked List: ";
	Node* tempPtr = headPtr;
	while (tempPtr != nullptr) {
		std::cout << tempPtr->data.vacDays<<" ";
		tempPtr = tempPtr->nextPtr;
	}
	std::cout << std::endl;
}
