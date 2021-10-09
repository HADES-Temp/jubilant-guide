#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*firstA = NULL, *firstB = NULL, *firstC = NULL;

Node* create(int n, Node *first){
	struct Node *t, *p = first;
	t = new struct Node;
	t->data = n;
	t->next = NULL;
	if(first != NULL){
		while(p->next){
			p = p->next;
		}
		p -> next = t;
	}
	else{
		first = t;
	}
	return first;
}

void Display(Node *first){
	struct Node *temp = first;
	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
}

Node* Merge(Node *first, Node *second){
	Node *temp, *last;
	temp = last = NULL;
	while(first && second){
		if(first->data < second->data){
			if(temp == NULL){
				temp = last = first;
				first = first->next;
				last->next = NULL;
				continue;
			}
			last->next = first;
			last = first;
			first = first->next;
			last->next = NULL;
		}
		else{
			if(temp == NULL){
				temp = last = second;
				second = second->next;
				last->next = NULL;
				continue;
			}
			last->next = second;
			last = second;
			second = second->next;
			last->next = NULL;
		}
	}
	while(first){
		last->next = first;
		last = first;
		first = first->next;
		last->next = NULL;
	}
	while(second){
		last->next = second;
		last = second;
		second = second->next;
		last->next = NULL;
	}
	return temp;
}

int main(){
	vector<int> A = {1,3,3,6,6,7}, B = {1,4,9,13};
	for(int i = 0; i < A.size(); i++){
		firstA = create(A[i], firstA);
	}
	cout<<"List A :: ";
	Display(firstA);
	for(int i = 0; i < B.size(); i++){
		firstB = create(B[i], firstB);
	}
	cout<<endl<<"List B ::";
	Display(firstB);
	cout<<endl;
	firstC = Merge(firstA, firstB);
	cout<<"\nList after Merging :: ";
	Display(firstA);
	return 0;
}
