#include<iostream>
#include<string.h>
using namespace std;
class node
{
  public:
  int data;
  node*next;
  node*prev;
}*head=NULL;
void node1(int n)
{
  node *t=new node;
  t->data=n;
  t->next=NULL;
  t->prev=NULL;
  head=t;
}
void othernodes(int n)
{
  node*temp;
  node *t=new node;
  temp=head;
  t->data=n;
  while(temp->next!=NULL)
  temp=temp->next;
  temp->next=t;
  t->prev=temp;
  temp=t;

}
void display()
{
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    head=head->next;
  }
}
int main()
{
  int p,l,i=0;
  cout<<"Enter the value in the first node: ";
  cin>>p;
  node1(p);
  char n[3];
  while(i>=0){
  cout<<"Do you want to add a new node :\nEnter Yes or No :";
  cin>>n;
  if(strcmp(n,"yes")==0||strcmp(n,"Yes")==0){
  cout<<"Enter value for the next node:";
  cin>>l;
  othernodes(l);
  }
  else {
  cout<<"Dhanyawaad aapka\n";
  break;
  }
  }
  display();

}
