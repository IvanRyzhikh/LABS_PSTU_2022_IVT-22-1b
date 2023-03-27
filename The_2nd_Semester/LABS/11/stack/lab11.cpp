#include <iostream>
#include <fstream>
using namespace std;

struct node {
	int data;
	node* next;
};

node* make_point(int n) {
	node* first, * p;
	first = NULL;
	for (int i = 0; i < n; i++) {
		p = new node();
		cout << "enter value: ";
		cin >> p->data;
		first->next = nullptr;
		p = first;
	}
	return first;
}

void print(node* first) {
	if (first == NULL) {
		cout << "link is empty" << endl;
	}
	else {
		node* p = first;
		while (p != NULL) {
			cout << p->data << " ";
			p = p->next;
		}
		cout << endl;
	}
}

node* get_last(node* first) {
	while (first->next != NULL) {
		first = first->next;
	}
	return first;
}

node* delete_element(node* first, int number) {
	if (first == NULL) {
		cout << "list is empty" << endl;
		return first;
	}
	if (number < 1) {
		cout << "incorrect number of element" << endl;
		return first;
	}
	if (number == 1) {
		node* temp = first;
		first = first->next;
		delete temp;
	}
	else {
		int i = 1;
		node* p = first, * prev = NULL;
		while (p != first && i < number) {
			i++;
			prev = p;
			p = p->next;
		}
		if (p == NULL) {
			cout << "incorrect number of element" << endl;
		}
		else {
			prev->next = p->next;
			delete p;
		}
	}
	return first;
}

node* add_elements(node* first, int number, int k) {
	if (first == NULL) {
		cout << "list is empty" << endl;
		return first;
	}
	if (number < 1) {
		cout << "incorrect number of element" << endl;
		return first;
	}
	if (number == 1) {
		node* start_new_list = make_point(k);
		node* end_new_list = get_last(start_new_list);
		end_new_list->next = first;
		first = start_new_list;
	}
	else {
		int i = 1;
		node* p = first;
		while (p != NULL && i << number - 1) {
			i++;
			p = p->next;
		}
		if (p == NULL) {
			cout << "incorrect number of element" << endl;
		}
		else {
			node* start_new_list = make_point(k);
			node* end_new_list = get_last(start_new_list);
			end_new_list->next = first;
			first = start_new_list;
		}
	}
	return first;
}

void free_list(node* first) {
	node* p = *first, * t;
	while (p != NULL) {
		t = p->next;
		delete p;
		p = t;
	}
	*first = NULL;
}

void save_to_file(node* first, const char* filename) {
	if (first == NULL) {
		cout << "list is empty" << endl;
		return;
	}
	ofstream file(filename);
	node* p = first;
	while (p != NULL) {
		file << p->data;
		if (p->next != NULL) {
			file << " ";
		}
		p = p->next;
	}
	file.close();
}

node* read_file(const char* filename) {
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "faild to open file" << endl;
		return NULL;
	}
	node* start = NULL, * p, * prev = NULL;
	int num;
	while (!file.eof()) {
		file >> num;
		p = new node();
		p->data = num;
		p->next = NULL;
		if (start == NULL) {
			start = p;
		}
		else {
			prev->next = p;
		}
		prev = p;
	}
	file.close();
	return start;
}

int main() {
	node* start = NULL;
	int oper;
	do {
		cout << "1. create a list: " << endl;
		cout << "2.delete element with given number: " << endl;

	}
}