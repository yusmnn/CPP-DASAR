#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *prev;
};
Node *n=NULL, *head=NULL, *tail=NULL, *x=NULL;

void buatNodeBaru(int i){
	n = new Node;
	n->data = i;
	n->prev = NULL;
	head = n;
	tail = n;
	tail->next = NULL;
}
void tambahData(int i){
	if(head == NULL)
		buatNodeBaru(i);
	else
		tambahDiBelakang(i);
}
void tambahDiBelakang(int i){
	n = new Node;
	n->data = i;
	n->prev = tail;
	tail->next = n;
	tail = n;
	tail->next = NULL;
}
void tambahDiDepan(int i){
	n = new Node;
	n->data = i;
	n->next = head;
	head->prev = n;
	n->prev = NULL;
	head = n;
}
void tampilDariDepan(){
	x = head;
	while(x!=NULL){
		cout << x->data << " ";
		x = x->next;
	}
}
bool cariData(int i){
	x = head;
	while(x!=NULL){
		if (i == x->data) return true;
		x = x->next;
	}
	return false;
}

int main(){
	buatNodeBaru(2);
	tambahDiDepan(1);
	tambahDiBelakang(3);
	tampilDariDepan();
}
