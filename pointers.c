#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	};
typedef struct node node;
node* makelist(){
	node* head = (node*)malloc(sizeof(int));
	head->data = -420420420;
	head->next = NULL;
	return head;
}
void append(node* L, int val){
    if(L->data != -420420420){

        while(L->next != NULL){
            L = L->next;
        }
        node* new = (node*)malloc(sizeof(node));
        new->data = val;
        new->next = NULL;
        L->next = new;
    }
    else{
        L->data = val;
    }
}
void printlist(node* L){
    printf("[ ");
    while(L->next != NULL){
        printf("%d ", L->data);
        L = L->next;
    }
    printf("]");
}
void add(node* L, int n, int val){
    int count = 0;
    node* new = (node*)malloc(sizeof(node));
    new->data = val;
    for(int count = 1; count < n; count++){
        L = L->next;
    }
    new->next = L->next;
    L->next = new; 
}
int main(){
	node* list = makelist();
	append(list,9);
	append(list,9);
	append(list,9);
	printlist(list);
	printf("\n");
	add(list,0,59);
	printlist(list);
	return 0;

}