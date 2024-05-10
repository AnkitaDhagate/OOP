#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
	int info;
	struct node *next;
}node;
class list
{
	node *head;
	public : 
	        void addnode();
	        void insertAfter();
	        void show();
	        void deletenode();
	public : list()
	         {
		         head=NULL;
	         }     
};

void list::show()
{
	if (head)
	{
		node *p=head;
		while (p!=NULL)
		{
			cout<<p->info<<" ";
			p=p->next;
		}
		
	}
	else
		cout<<"Empty List";
}
void list ::  addnode()
{
	node *t,*p;
	t=new node;
	cout<<"Node value :   ";
	cin>>t->info;
	t->next=NULL;
	
	if(head==NULL)
	{
		head=t;
      }         
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
			
		}
		p->next=t;
      } 
	cout<<"Node added  ";       
}
void list ::  insertAfter()
{
	int val;
	node *t,*p;
	if(head)
	{
		cout<<"Node value after which you want to insert : ";
		cin>>val;
		p=head;
		while(p->info!=val && p->next!=NULL)
		{
			p=p->next;
		}
		if(p->info==val)
		{
			t=new node;
			cout<<"Node value :  ";
			cin>>t->info;
			t->next=p->next;
			p->next=t;
			cout<<"Node Inserted :  ";
		}
		else
		{
			cout<<"  Node not found  ";
		}
	}
	else
	{
		cout<<"  Empty list  ";
	}
}
void list ::  deletenode()
{
	int pos,c=1;
	node *t,*p;
	if(head)
	{
		cout<<"Node position to delete :  ";
		cin>>pos;
		p=head;
		while(c!=pos && p->next!=NULL)
		{
			t=p;
			p=p->next;
			c+=1;
		}
		if(c==pos)
		{
			if(p==head)
			{
				if(p->next==NULL)
				{
					head=NULL;
				}
				else
				{
					head=p->next;
				}
			}
			else
			{
				t->next=p->next;
			}
			delete p;
	      	cout<<"Node deleted ";
		}
		else
	      {
		      cout<<"position not found";
      	}
		
	}
	else
	{
		cout<<"Empty list";
	}	
}
int main()
{
	list *obj;
	int ch;
	obj=new list();
	do
	{
		cout<<"\n\n1.Addnode\n2.Insertafter\n3.Deletenode\n4.show\n5.exit ";
		 
	cout<<"\nEnter choice=  ";
	cin>>ch;
	switch(ch)
	{
		case 1: obj->addnode();
		       break;
		case 2: obj->insertAfter();
		       break;
		case 3: obj->deletenode();
		       break;	
		case 4: obj->show();
		       break;
		case 5: exit(0);
		 
	}		 
}while(ch!=5);
}




