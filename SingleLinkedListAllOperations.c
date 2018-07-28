#include<stdio.h>
#include <stdlib.h>
void InsertInLinkedList(int,int);
void DeleteNodeFromLinkedList(int);
void Traverse();
void Insert();
void InsertAtFirst();
void DeleteFirst();
void DeleteLast();
struct node {
  int data;
  struct node* next;
};
struct node* root=NULL;
int main(int argc, char const *argv[]) {

    InsertInLinkedList(4,1);
    InsertInLinkedList(5,2);
    InsertInLinkedList(6,3);
    InsertInLinkedList(9,4);
    InsertInLinkedList(10,5);
    Traverse();
    DeleteLast();
    Traverse();


  return 0;
}
void Insert(){
  struct node* temp,*p;
  int ele;
  p=root;
  printf("Enter Elesert a Element=");
  scanf("%d",&ele);
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=ele;
  temp->next=NULL;
  if (root==NULL) {
    /* code */
    root=temp;
  }
  else{
    while(p->next!=NULL){
      p=p->next;
    }
    p->next=temp;
  }

}
void InsertAtFirst(){
  int ele;
  struct node* temp,*p;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter the Element=");
  scanf("%d",&ele);
  temp->data=ele;
  temp->next=NULL;

    if (!temp) {
      /* code */printf("Memory Error\n");
    }
    else{
      p=root;
      temp->next=p;
      root=temp;
    }
  }


// Insert the Element in the List with given Position
void InsertInLinkedList(int data,int position){
  int k=1;
  struct node* p,*q,*newNode;
  newNode=(struct node*)malloc(sizeof(struct node));

  if (!newNode) {
    printf("Memory Error");
    return ;
    }
    newNode->data=data;
    newNode->next=NULL;
    p=root;
    if (position==1) {
      /* code */newNode->next=p;
      root=newNode;
    }
    else{
      //if Postion is far from the last node it Insert the elemnt at the last position
      while ((p!=NULL)&&(k<position)) {
        /* code */k++;
        q=p;
        p=p->next;
      }
      printf("%d Element Inserted\n",newNode->data);
      q->next=newNode;
      newNode->next=p;
    }
}

void Traverse(){
    struct node* p;
    p=root;
    while (p!=NULL) {
      printf("%d-->",p->data);
      p=p->next;
    }
}
void DeleteNodeFromLinkedList(position) {
  /* code */
  int k=1;
  struct node* p,*q;
  p=root;
  if (root==NULL) {
    /* code */printf("List is Empty\n");
    return;
  }
  if (position==1) {
      root=p->next;
      free(p);
      return;
    }
    else{
        printf("ELse statment\n");
        while ((p!=NULL)&&k<position) {
          /* code */k++;
          q=p;
          p=p->next;
        }
        if (p==NULL) {
          /* code */printf("Postion Not Found\n");
        }
        else{
          q->next=p->next;
          free(p);
        }
    }

}
void DeleteFirst(){
  struct node* temp,*p;

  if (root==NULL) {
    /* code */printf("List is Empty\n");
  }
  else{
    temp=root;
    root=temp->next;
    free(temp);
  }
}

void DeleteLast(){
  struct node* temp,*p;
  p=root;
  if (root==NULL) {
    /* code */printf("List is Empty");
  }
  else{
    printf("This statment Terminate\n");
    while (p->next!=NULL) {
      /* code */temp=p;
      p=p->next;
    }
    temp->next=NULL;
    free(p);

  }
}
