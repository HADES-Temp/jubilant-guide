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

int Max(){
	struct Node *temp = first;
	int max = INT_MIN;
	while(temp){
		if(temp->data > max)
			max = temp->data;
		temp = temp->next;
	} 
	return max;
}

int MaxRecur(struct Node *p){
	int x = 0;
	if(p == 0) return INT_MIN;
	x = MaxRecur(p->next);
	return (x > p->data) ? x : p->data;
}

int Min(){
	struct Node *temp = first;
	int min = INT_MAX;
	while(temp){
		if(temp->data < min)
			min = temp->data;
		temp = temp->next;
	} 
	return min;
}

int MinRecur(struct Node *p){
	int x = 0;
	if(p == 0) return INT_MAX;
	x = MinRecur(p->next);
	return (x < p->data) ? x : p->data;
}

int main(){
	vector<int> A = {3,6,3,1,7,8,13,1};
	for(int i = 0; i < A.size(); i++){
		create(A[i]);
	}
	Display();
	cout<<endl<<endl;
	cout<<"MaxLoop :: "<<Max()<<"  MaxRecursive :: "<<MaxRecur(first)<<"\n\n";
	cout<<"SumLoop :: "<<Min()<<"  SumRecursive :: "<<MinRecur(first);
	return 0;
}

