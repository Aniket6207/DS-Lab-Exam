#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
 };

 struct node *insert(struct node *first,int x){
  if (first==NULL){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=NULL;
    first=new_node;
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
  }
  return first;
}

void display(struct node *first){
    struct node *temp=first;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        printf("%lld\n",temp);
        temp=temp->next;
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
    display(first);
}
