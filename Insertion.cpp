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

void Insert(int pos, int x){
	struct Node *temp, *p;
	if(pos < 0 || pos > Count()) 
		return;
	temp = new Node;
	temp->data = x;
	if(pos == 0){
		temp->next = first;
		first = temp;
	}
	else{
		p = first;
		for(int i = 0; i < pos - 1 && p; i++){
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
		create(A[i]);
	}
	Display();
	cout<<endl<<endl;
	Insert(10,20);
	Insert(7,12);
	Insert(3,10);
	cout<<"List After Insertion :: ";
	Display();
	return 0;
}

