#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node *next;
    node *prev;
    node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_head(node*& head, node*& tail, int v) {
    node* newnode = new node(v);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_any_position(node*& head, node*& tail, int p, int v) {
    node* newnode = new node(v);

    if (p == 0) {
        // Insert at the beginning
        newnode->next = head;
        if (head != NULL) {
            head->prev = newnode;
        }
        head = newnode;

    } else {
        // Insert in the middle or at the end
        node* temp = head;

        for (int i = 1; i <= p - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            // Invalid position
            cout << "Invalid position." << endl;
            delete newnode;
            return;
        }

        newnode->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = newnode;
        }
        temp->next = newnode;
        newnode->prev = temp;

        // Update tail if the node is inserted at the end
        if (newnode->next == NULL) {
            tail = newnode;
        }
    }
}

void insert_tail(node*& head, node*& tail, int val) {
    node* newnode = new node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail,
    tail = tail->next;
}

void display_reverse(node* tail) {
    node* temp = tail;
    cout << "R -> ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void display(node* head) {
    node* temp = head;
    cout << "L -> ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int cnt(node* head) {
    node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    node* head = NULL;
    node* tail = NULL;
    int t;
    cin >> t;
    int v, x;

    while (t--) {
        cin >> v >> x;

        if (v == 0) {
            insert_head(head, tail, x);
            display(head);
            display_reverse(tail);
        } else if (v == cnt(head)) {
            insert_tail(head, tail, x);
            display(head);
            display_reverse(tail);

        } else if (v > cnt(head)) {
            cout << "Invalid" << endl;
        } else if (v < cnt(head)) {
            insert_any_position(head, tail, v, x);
            display(head);
            display_reverse(tail);
        }
    }

    return 0;
}
