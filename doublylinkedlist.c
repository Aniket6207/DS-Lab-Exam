#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
 };

 struct node *insert(struct node *first,int x){
  if (first==NULL){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=NULL;
    first=new_node;
    first->prev=NULL;
  }
  else{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=NULL;
    struct node *temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->prev=temp;
  }
  return first;
}

void display(struct node *first){
    struct node *temp=first;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void displaybackward(struct node *first){
    struct node *temp=first;
    struct node *temp2;
    while(temp!=NULL){
        temp2=temp;
        temp=temp->next;
    }
    while(temp2!=NULL){
        printf("%d ",temp2->data);
        temp2=temp2->prev;
    }


}
int main(){
    int n;
    scanf("%d",&n);
    struct node *first;
    first=NULL;
    for (int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        first=insert(first,x);
    }
    displaybackward(first);
}
