#include <iostream>
using namespace std;



class node{
	private:
		int v;
		node *next;
	public:
		
		node(){
			v = 0;
			next = NULL;
		}
		
		node(int x){
			v = x;
			next = NULL;
		}
		
	
		void next_node(node * n){
			next = n;
		}
	
		int retrive(){
			return v;
		}
		
		node  *retrive_node(){
			return next;
		}	
};

class list{
	private:
		node *head;
		node *tail;
	public:	
		list(){
			head = NULL;
		}
		list(int x){
			node *n = new node(x);
			head = n;
		}
		
		void print_screen(){
			
			if(head == NULL){
				cout<<"Empty"<<endl;	
			}
			else{
				node *evliya;
				evliya = head;
				while(evliya!=NULL){
					cout<<evliya->retrive()<<" ";
					evliya = evliya->retrive_node();
				}
				cout<<endl;
			}
		}
		
		void add(int x){
			if(head==NULL){
				node *n = new node(x);
				head = n;
			}
			else{
				node *n = new node(x);
				n->next_node(head);
				head = n; 
			}
		}
		
		bool is_empty(){
			if(head == NULL)
				return true;
			return false;	
		}
		
};
