#include <iostream>
using namespace std;

struct node
{
    string info;
    node *next;
};

node* create_node(node *temp, string new_string)
{
    node * temp1 = new node;

    temp1->info = new_string;
    temp1->next = NULL;

    temp->next = temp1;

    return temp1;

}

void add_after(node *p , string string1, string string2)
{
    node *temp1 = p;

    while(temp1 != NULL)
    {
        if(temp1->info==string1)
        {
            node *temp2 = new node;
            temp2->info = string2;
            temp2->next = temp1->next;
            temp1->next = temp2;
            return;


        }

        temp1 = temp1->next;



    }




}

void print_list(node * p)
{

    if(p == NULL)
    {
        cout<<"Link list is empty ";
        return;

    }


    node *temp = p;

    while(temp != NULL)
    {

        cout<<temp->info<<" ";
        temp = temp->next;

    }




}


node* delete_node(node* p , string string1 )
{
    node *temp = p;

    node *temp1  = temp;

    temp = temp->next;

    delete temp1;

    return temp;


}

node * delete_list(node *p)
{
    node *temp = p;

    while(temp!=NULL)
    {
        node *temp1 = temp;
        temp = temp->next;
        delete temp1;
        temp1 = NULL;


    }
    return temp;






}




int main()
{
    node * head = new node;
    head->info = "waqar";
    head->next = NULL;

    node *temp = head;

    temp = create_node(temp, "shoaib");
    temp = create_node(temp, "hassan");

    print_list(head);
    cout<<endl;


   node *temp1 = head;

    print_list(head);

    add_after(temp1,"shoaib","mehboob");

    cout<<endl;
    print_list(head);

   head =  delete_node(head, "waqar");


   cout<<endl;
    print_list(head);

   head =  delete_list(head);

   cout<<endl;

    print_list(head);







}