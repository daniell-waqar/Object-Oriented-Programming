#include <iostream>
using namespace std;

struct node {
    int val;
    node *next;
};

node* create_node(node *current, int new_node_value) {
    node *n = new node;   // create node

    // set values
    n->val = new_node_value;
    n->next = NULL;

    // link "current" node to this new node
    current->next = n;

    return n;
}

void output_list(node *h) {
    node *current = h;
    cout << "[ " ;
    while (current != NULL) {
        cout << current->val << " ";

        current = current->next;
    }
    cout << "]" << endl;
}






int main() {
    node *head;
    head = new node;
    head->val = 2;
    head->next = NULL;

    node *current = head;

    current = create_node(current, 27);
    current = create_node(current, 30);
    current = create_node(current, 50);

    output_list(head);



    // return 0;


    


    return 0;

}
