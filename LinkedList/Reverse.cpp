#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first = NULL, *last = NULL;

void create(int n){
	struct Node *t;
	t = new struct Node;
	t->data = n;
	t->next = NULL;
	if(last != NULL){
		last -> next = t;
		last = t;
	}
	else{
		last = first = t;
	}
}

void Display(){
	struct Node *temp = first;
	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
}

bool isSorted(){
	Node *p = first;
	int x = INT_MIN;
	while(p){
		if(x > p->data){
			return false;
		}
		x = p->data;
		p = p->next;
	}
	return true;
}

void ReverseElements(){
	vector<int> a;
	Node *p = first;
	while(p){
		a.push_back(p->data);
		p = p->next;
	}
	auto i = a.size() - 1;
	p = first;
	while(p && i >= 0){
		p->data = a[i];
		i--;
		p = p->next;
	}
}

void ReverseLinks(){
	Node *p = first, *q = NULL, *r = NULL;
	while(p){
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}

void ReverseLinksRecur(Node *p, Node *q){
	if(p != NULL){
		ReverseLinksRecur(p->next, p);
		p->next = q;
	}
	else{
		first = q;
	}
}

int main(){
	vector<int> A = {3,6,3,1,7,6,13,1,4,9};
	sort(A.begin(), A.end());
	for(int i = 0; i < A.size(); i++){
		create(A[i]);
	}
	Display();
	cout<<endl;
	ReverseElements();
	cout<<"\nList after Reversing Elements :: ";
	Display();
	ReverseLinks();
	cout<<"\nList after Reversing Links :: ";
	Display();
	ReverseLinksRecur(first, NULL);
	cout<<"\nList after Reversing Links Recursively :: ";
	Display();
	return 0;
}
