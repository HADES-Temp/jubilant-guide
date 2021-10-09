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

bool isLoop(){
	Node *p,*q;
	p = q = first;
	do{
		p = p->next;
		q = q->next;
		q = (q != NULL) ? q->next : NULL;
	}while(p && q && p != q);
	if(p == q) return true; 
	return false;
}

int main(){
	int A[] = {3,6,3,1,7,8};
	for(int i = 0; i < 6; i++){
		create(A[i]);
	}
	Display();
//	Node *p, *q;
//	p = q = first;
//	while(p->next){
//		p = p->next;
//	}
//	q = q->next->next;
//	p->next = q;
	cout<<endl<<endl;
	(isLoop()) ? cout<<"List is Looped" : cout<<"List is Linear";
	return 0;
}

