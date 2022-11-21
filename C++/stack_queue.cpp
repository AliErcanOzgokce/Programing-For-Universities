#include <iostream>
using namespace std;

class Node{
	public:
		int variable;
		Node * next_node;
		
		Node(int x, Node * ptr = nullptr){
			variable = x;
			next_node = ptr;
		}
};

class List{
	private:
		Node * head;
		Node * tail;
		int counter;
	public:
		//constructer
		List(){
			head = nullptr;
			tail = nullptr;
			counter = 0;
		}
		
		List(int x){
			head = new Node(x);
			tail = head;
			counter++;
		}
		//accesors
		bool empty(){
			return (head == nullptr);
		}	
		
		int size(){
			return counter;
		}
		
		int front(){
			return head->variable;
		}
		
		int back(){
			return tail->variable;
		}
		
		int count(int x){
			if(empty())
				cout<<"list is empty"<<endl;
			else{
				int lv_count = 0;
				for(Node * ptr = head; ptr!=nullptr; ptr = ptr->next_node){
					if(ptr->variable == x){
						lv_count++;
					}
				}
				return lv_count;
			}	
		}
		
		void print(){
			if(empty()){
				cout<<"list is empty"<<endl;
			}
			else{
				for(Node * ptr = head; ptr!=nullptr; ptr = ptr->next_node){
					cout<<ptr->variable<<" ";
				}
				cout<<endl;
			}
		}
		//mutadors
		void push_front(int x){
			if(empty()){
				head = new Node(x);
				tail = head;
				counter++;
			}
			else{
				head = new Node(x,head);
				counter++;
			}
		}
		
		void push_back(int x){
			if(empty()){
				push_front(x);
			}
			else{
				tail->next_node = new Node(x);
				tail = tail->next_node; 
				counter++;
			}
		}
		
		int pop_front(){
			if(empty()){
				cout<<"list is empty"<<endl;
			}else{
				Node * ptr = head;
				int v = ptr->variable;
				head = head->next_node;
				delete ptr;
				counter--;
				return v;
			}
		}
		
		//deconstructer
		~List(){
			while(!empty()){
				pop_front();
			}
		}
		
};

class Stack{
	private:
		List l1;
	public:
		Stack(){
			
		}	
		
		bool empty(){
			return l1.empty();
		}
		
		int top(){
			if(empty())
				return 0;
			return l1.front();
		}
		
		void print(){
			l1.print();
		}
		
		void push(int x){
			l1.push_front(x);
		}
		
		int pop(){
			return l1.pop_front();
		}
};

class Queue{
	private:
		List l1;
	public:
		Queue(){
			
		}	
		
		bool empty(){
			return l1.empty();	
		}
	
		int top(){
			if(empty())
				return 0;
			return l1.front();
		}
		
		void print(){
			l1.print();
		}
		
		void push(int x){
			l1.push_back(x);
		}
		
		int pop(){
			return l1.pop_front();
		}
		
};
