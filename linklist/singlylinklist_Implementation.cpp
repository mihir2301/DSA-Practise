#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

 node(int data){
    this->data=data;
    this->next=NULL;
 }
};

void InsertNodeAtHead(int data,node* &head,node *&tail){
    if(head==NULL){
        node* temp=new node(data);
        head=temp;
        tail=temp;
        return;
    }
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}

void InsertNodeAtTail(int data,node* &head,node* &tail){
    if(tail==NULL){
        node*temp=new node(data);
        head=temp;
        tail=temp;
        return;
    }
    node* temp=new node(data);
    tail->next=temp;
    tail=temp;
}

void InsertNodeAtMiddle(int data,int position,node*&head,node*&tail){
    if(head==NULL){
        if(position>1){
            cout<<"position out of bounds"<<endl;
            return;
        }
    }
    if(head==tail){
        if(position>2){
        cout<<"position out of bounds"<<endl;
        return;
        }
    }
    if(position==1&&head==NULL){
        node* temp =new node(data);
        head=temp;
        tail=temp;
        return;
    }
    if(position==1){
        node *temp=new node(data);
        temp->next=head;
        head=temp;
        return;
    }
    node*temp=new node(data);
    int n=1;
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL&&n<position)
    {
      prev=curr; 
      curr=curr->next;
      n++;  
    }
    if(n==position){
    prev->next=temp;
    temp->next=curr;}
    else cout<<"position out of bound"<<endl;
}
void PrintList(node* head){
    if(head==NULL){
        cout<<"NO NODE PRESENT"<<endl;
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void DeleteNode(node* &head,node* &tail,int position){
    node* temp=head;
    if(position==1){
        head=head->next;
        delete temp;
    }
    node*curr=head;
    node*prev=NULL;
    int n=1;
    while(curr!=NULL&&n<position){
        prev=curr;
        curr=curr->next;
        n++;
    }
    if(n==position){
    if(curr->next==NULL){
        prev->next=curr->next;
        tail=prev;
        delete curr;
        return;
    }
    prev->next=curr->next;
    cout<<"DELETED NODE IS :"<<curr->data<<endl;
    delete curr;
    }
    else cout<<"Position out of Bounds"<<endl;
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    int n;
    char ch='Y';
    while(ch=='Y'||ch=='y'){
    cout<<"Press 1.To insert 2.To Delete 3.To print"<<endl;
    cin>>n;
    switch(n){
        case 1:cout<<" PRESS    1. To insert at head     2. To insert at Tail    3. To insert at position"<<endl;
               int t;
               cin>>t;
                switch(t){
                    case 1:cout<<"Enter data to be inserted"<<endl;
                            int data;
                            cin>>data;
                            InsertNodeAtHead(data,head,tail);
                            break;
                    case 2:cout<<"Enter data to be inserted"<<endl;
                            int data2;
                            cin>>data2;
                            InsertNodeAtTail(data2,head,tail);
                            break;
                    case 3:cout<<"Enter data and position to be inserted"<<endl;
                            int data3,postion;
                            cin>>data3>>postion;
                            InsertNodeAtMiddle(data3,postion,head,tail);
                            break;        
                }
                break;
        case 2:cout<<"Enter position to be delted"<<endl;
                int position;
                cin>>position;
                DeleteNode(head,tail,position);
                break;
        case 3:cout<<"the list is:"<<endl;
                PrintList(head);
                break;
        default:cout<<"Choose a proper option"<<endl;
                break;

    }
    cout<<"Do you wish to continue Press : Y/N"<<endl;
    cin>>ch;
}
cout<<"Thanks for using our services";
}