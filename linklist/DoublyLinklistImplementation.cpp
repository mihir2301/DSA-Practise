#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node *prev;

node(int data){
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
}
};
void InsertNodeATHead(int data,node* &head,node* &tail){
    if(head==NULL){
        node*temp=new node(data);
        head=temp;
        tail=temp;
        return;
    }
    node *temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void InsertNodeATTail(int data,node *&head,node *&tail){
    if(tail==NULL){
        node *temp=new node(data);
        head=temp;
        tail=temp;
        return;
    }
    node* temp= new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void InsertNodeAtPosition(int data,node *&head,node * &tail,int position){
    node* temp=new node(data);
    if(head==NULL&&position!=1){
        cout<<"Position out of Bounds"<<endl;
        return;
    }
    if(head==NULL&&position==1){
        head=temp;
        tail=temp;
        return;
    }
    node* curr=head;
    node* previous=NULL;
    int n=1;
    while(curr!=NULL&&n<position){
        previous=curr;
        curr=curr->next;
        n++;
    }
    if(position==n){
        previous->next=temp;
        temp->prev=previous;
        temp->next=curr;
        curr->prev=temp;
    }
    else{cout<<"postion out of bounds"<<endl;}
}
void DeleteNode(int pos,node *&head,node* &tail){
    if(pos==1){
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        cout<<"Deleted node is :"<<temp->data<<endl;
        delete temp;
        return;
    }
    node* previous=NULL;
    node* curr=head;
    int n=1;
    while(curr!=NULL&&(n<pos)){
        previous=curr;
        curr=curr->next;
        n++;
    }
    if(n==pos){
        if(curr->next==NULL){
            previous->next=curr->next;
            curr->prev=NULL;
            tail=previous;
            cout<<"deleted node is :"<<curr->data<<endl;
            delete curr;
        }
        else{
            previous->next=curr->next;
            (curr->next)->prev=previous;
            cout<<"Deleted node is :"<<curr->data<<endl;
            delete curr;
        }
    }
    else{cout<<"positon out of bounds"<<endl;
    }
}
void PrintNode(node* head){
    if(head==NULL){
        cout<<"No node present"<<endl;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
 node* head=NULL;
 node* tail=NULL;
 InsertNodeATHead(17,head,tail);
 InsertNodeATTail(19,head,tail);
 InsertNodeATHead(04,head,tail);
 InsertNodeATTail(23,head,tail);
 //PrintNode(head);
 InsertNodeAtPosition(15,head,tail,3);
 PrintNode(head);
 DeleteNode(3,head,tail);
 PrintNode(head);
}