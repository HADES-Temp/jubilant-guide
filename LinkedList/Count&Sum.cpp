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
	struct Node *temp = first;
	int ctr = 0;
	while(temp){
		ctr++;
		temp = temp-> next;
	}
	return ctr;
}

int CountRecur(struct Node *p){
	if(p == 0) return 0;
	else{
		return CountRecur(p->next) + 1;
	}
}

int Sum(){
	struct Node *temp = first;
	int sum = 0;
	while(temp){
		sum += temp->data;
		temp = temp->next;
	} 
	return sum;
}

int SumRecur(struct Node *p){
	if(p == 0) return 0;
	else{
		return SumRecur(p->next) + p->data;
	}
}

int main(){
	int A[] = {3,6,3,1,7,8};
	for(int i = 0; i < 6; i++){
		create(A[i]);
	}
	Display();
	cout<<endl<<endl;
	cout<<"CountLoop :: "<<Count()<<"  CountRecursive :: "<<" "<<CountRecur(first)<<"\n\n";
	cout<<"SumLoop :: "<<Sum()<<"  SumRecursive :: "<<SumRecur(first);
	return 0;
}

