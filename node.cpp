#include<iostream>
using namespace std;
class node{
	private:
		int data;
		node* next;
	public:
		node(int d,node* next)
		{
			data=d;
			this->next=next;
		}
		int get_data()
		{
			return data;
		}
		node* get_next_node(){
			return next;
		}
};
