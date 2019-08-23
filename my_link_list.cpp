#include<iostream>
#include "node.cpp"
using namespace std;

class my_link_list
{
		node * head;
	public:
		my_link_list(node * head)
		{
			this->head=head;
		}
		void traverse();

};
void my_link_list::traverse()
{
        while(head!=NULL)
        {
                cout<<head->get_data()<<endl;
                head=head->get_next_node();
        }
}

int main(void)
{
	node* node3=new node(3,NULL);
	node* node2=new node(2,node3);
	node* head=new node(1,node2);
	my_link_list* first=new my_link_list(head);
	first->traverse();
	return 0;
}

