#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class LinkedList{
	Node *first;
	public:
		LinkedList(){first = NULL;}
		LinkedList(int A[], int n);
		~LinkedList();
		void Display();
		void Append(int index);
		void Insert(int index, int pos);
		int Delete(int index);
		int Length();
};

void LinkedList::Append(int x){
	cout<<"called";
	Node *temp = new Node, *p = first;
	temp->next = NULL;
	temp->data = x;
	if(first == NULL){
		cout<<"ran";
		first = temp;
	}
	else{
		while(p->next){
			p = p->next;
		}
		p->next = temp;
	}
}

void LinkedList::Display(){
	Node *p = first;
	while(p->next){
		cout<<p->data<<"->";
		p = p->next;
	}
}

void LinkedList::Insert(int pos, int x){
	if(pos < 0 || pos > Length())
		return;
	Node *p = first, *q = NULL, *temp = new Node;
	temp->data = x;
	temp->next = NULL;
	if(pos == 0){
		temp->next = first;
		first = temp;
	}
	else{
		for(int i = 0; i < pos && p; i++){
			q = p;
			p = p-> next;
		}
		q->next = temp;
		temp->next = p;
	}
}

LinkedList::LinkedList(int A[], int n){
	first = NULL;
	for(int i = 0; i < n; i++){
		Append(A[i]);
	}
}

LinkedList::~LinkedList(){
	Node *p = first;
	while(first){
		first = first->next;
		delete p;
		p = first;
	}
}

int LinkedList::Length(){
	int ctr;
	Node *p = first;
	while(p){
		p = p->next;
		ctr++;
	}
	return ctr;
}

int LinkedList::Delete(int pos){
	if(pos < 1 || pos > this->Length())
		return -1;
	Node *p = first, *q = NULL;
	int x = -1;
	for(int i = 0; i < pos - 1 && p; i++){
		q = p;
		p = p->next;
	}
	x = p->data;
	q->next = p->next;
	delete p;
	return x;
}

int main(){
	int A[] = {1,3,6,2,4,9,5,13,6,1};
	LinkedList L1(A, 10);
	L1.Display();
	return 0;
}

