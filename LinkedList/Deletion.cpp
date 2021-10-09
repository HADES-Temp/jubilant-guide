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

void Delete(int pos){
	struct Node *temp, *p;
	int x = -1;
	if(pos < 0 || pos > Count()) 
		return;
	if(pos == 0){
		x= first->data;
		first = first->next;
		delete p;
	}
	else{
		p = first;
		for(int i = 0; i < pos - 1 && p; i++){
			temp = p;
			p = p->next;
		}
		if(p){
			x = p->data;
			temp->next = p->next;
			delete p;
		}
	}
	cout<<x<<" was successfully deleted\n";
}


int main(){
	vector<int> A = {3,6,3,1,7,8,13,1,4,9};
	for(int i = 0; i < A.size(); i++){
		create(A[i]);
	}
	Display();
	cout<<endl<<endl;
	Delete(3);
	Delete(7);
	Delete(20);
	cout<<"\n\nList After Deletion :: ";
	Display();
	return 0;
}
