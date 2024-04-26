#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;
    node* prev;
    node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(node*& head, node*& tail, int val) {
    node* newnode = new node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    }
    else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = tail->next;
    }
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
    int val;

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_tail(head, tail, val);
    }

    int length = cnt(head);

    if (length <= 1) {
        cout << "YES" << endl;
        return 0;
    }

    bool flag = true;
    node* i = head;
    node* j = tail;

    while (i != j && i->prev != j) {
        if (i->val != j->val) {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }

    if (flag) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
