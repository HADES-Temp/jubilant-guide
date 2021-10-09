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

int main(){
	vector<int> A = {3,6,3,1,7,8,13,1,4,9};
//	sort(A.begin(), A.end());
	for(int i = 0; i < A.size(); i++){
		create(A[i]);
	}
	Display();
	cout<<endl<<endl;
	(isSorted()) ? cout<<"List is Sorted" : cout<<"List is Not Sorted";
	return 0;
}
