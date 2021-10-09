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

void DisplayRecur(Node *p){
	if(p == NULL){
		return;
	}
	else{
		cout<<p->data<<"->";
		DisplayRecur(p->next);
	}
}

int main(){
	int A[] = {3,6,3,1,7,8};
	for(int i = 0; i < 6; i++){
		create(A[i]);
	}
	Display();
	cout<<endl<<endl;
	DisplayRecur(first);
	return 0;
}

