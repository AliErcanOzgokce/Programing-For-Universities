#include <iostream>

using namespace std;

class Node{
	public:
		int element;
		Node * left;
		Node * right;
		
		Node(int x=0,Node * l= nullptr, Node * r= nullptr){
			element = x;
			right = r;
			left = l;
		}
		
		bool empty(){
			return (this == nullptr);
		}
		bool is_leaf(){
			return(!empty() && left->empty() && right->empty());
		}
};

class Tree{
	private:
		void _print(Node * ptr){
			if(ptr->empty()){
				return;	
			}
			
			_print(ptr->left);
			cout<<ptr->element<<" ";
			_print(ptr->right);
			
		}
		
		Node * _insert_rec(int x,Node * ptr){
			if(ptr->empty()){
				ptr = new Node(x);
				//return ptr;
			}else{
				if(x>ptr->element){
					ptr->right = _insert_rec(x,ptr->right);
				}else{
					ptr->left = _insert_rec(x,ptr->left);
				}
			}
			return ptr;
		}
		
		Node * _del(int x, Node * ptr){
			if(ptr->empty()){
				return ptr;
			}else{
				if(x>ptr->element){
					ptr->right = _del(x,ptr->right);
				}else if(x<ptr->element){
					ptr->left = _del(x,ptr->left);
				}else{
					if(ptr->is_leaf()){
						delete ptr;
						return nullptr;
					}else if(ptr->right->empty()){
						Node * l = ptr->left;
						delete ptr;
						return l;
					}else if(ptr->left->empty()){
						Node * r = ptr->right;
						delete ptr;
						return r;
					}else{
						int max = _max(ptr->left);
						ptr->element = max;
						ptr->left = _del(max,ptr->left);
					}
				}
			}
			return ptr;
		}
		
		int _max(Node * ptr){
			if(ptr->empty()){
				return -1;
			}
			
			while(!ptr->right->empty()){
				ptr = ptr->right;
			}
			
			return ptr->element;
		}
		
		int _size(Node * ptr){
			return (ptr->empty() ? 0 : 1+_size(ptr->left)+_size(ptr->right));
		}
		int _height(Node * ptr){
			return (ptr->empty() ? -1 : 1+std::max(_height(ptr->left),_height(ptr->right)));
		}
		
	public:
		
		Node * root;
		
		Tree(){
			root = nullptr;
		} 	
		
		void insert_it(int x){
			if(root->empty()){
				root = new Node(x);
			}else{
				Node * tmp = root;
				while(!tmp->empty()){
					if(x>tmp->element){
						if(tmp->right->empty()){
							tmp->right = new Node(x);
							break;
						}else{
							tmp = tmp->right;
						}
					}else{
						if(tmp->left->empty()){
							tmp->left = new Node(x);
							break;
						}else{
							tmp = tmp->left;
						}
					}
				}
			}
		}
		
		void insert_rec(int x){
			root = _insert_rec(x,root);
			
		}
		
		void del(int x){
			root = _del(x,root);
		}
		
		int max(){
			return (_max(root));
		}
		
		int size(){
			return _size(root);
		}
		int height(){
			return _height(root);
		}
		void print(){
			_print(root);
			cout<<endl;
		}
		
	
};
