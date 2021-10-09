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

int Count(){
	struct Node *p = first;
	int ctr = 0;
	while(p){
		ctr++;
		p = p->next;
	}
	return ctr;
}

void InsertSorted(int x){
	struct Node *temp, *p;
	temp = new Node;
	temp->data = x;
	temp->next = NULL;
	p = first;
	if(first == NULL){
		first = temp;
	}
	else if(p->data > x){
		temp->next = first;
		first = temp;
	}
	else{
		while(p->next && p->next->data < x){
			p = p->next;
		}
		if(p){
			temp->next = p->next;
			p->next = temp;
		}
	}
}


int main(){
	vector<int> A = {3,6,3,1,7,8,13,1};
	for(int i = 0; i < A.size(); i++){
		InsertSorted(A[i]);
	}
	Display();
	cout<<endl<<endl;
	InsertSorted(3);
	InsertSorted(9);
	InsertSorted(0);
	InsertSorted(15);
	cout<<"List After Insertion :: ";
	Display();
	return 0;
}

