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

Node* Search(int key){
	struct Node *temp = first;
	while(temp){
		if(temp->data == key)
			return temp;
		temp = temp->next;
	} 
	return NULL;
}

Node *SearchRecur(struct Node *p, int key){
	int x = 0;
	if(p == 0) return NULL;
	if(p->data == key) return p;
	return SearchRecur(p->next, key);
}

Node* MoveToHeadSearch(int key){
	struct Node *temp = first, *prev = NULL;
	while(temp != 0){
		if(temp->data == key){
			prev->next = temp->next;
			temp->next = first;
			first = temp;
			return first;
		}
		prev = temp;
		temp = temp->next;
	}
	return NULL;
}

int main(){
	vector<int> A = {3,6,3,1,7,8,13,1};
	for(int i = 0; i < A.size(); i++){
		create(A[i]);
	}
	Display();
	cout<<endl<<endl;
	cout<<"SearchLoop :: "<<Search(13)<<"  SearchRecursive :: "<<SearchRecur(first, 13)<<"  SearchMoveToHead :: "<<MoveToHeadSearch(13);
	return 0;
}

