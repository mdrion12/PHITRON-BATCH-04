#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node *next;

    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(node *&head, int val) {
    node *newnode = new node(val);
    if (head == NULL) {
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_tail(node *&head, int v) {
    node *newnode = new node(v);
    if (head == NULL) {
        head = newnode;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

int cnt(node *head) {
    node *temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void deletehead(node *&head) {
    if (head == NULL) {
        return;
    }
    node *d = head;
    head = head->next;
    delete d;
}

void delete_any_position(node *&head, int v) {
    if (head == NULL) {
        return;
    }

    if (v == 0) {
        deletehead(head);
        return;
    }

    node *temp = head;
    for (int i = 1; i < v ; i++) {
        temp = temp->next;
        if(temp==NULL)
        {
            return;
        }
    }

    if ( temp->next == NULL) {
        return;
    }

    node *d = temp->next;
    temp->next = temp->next->next;
    delete d;
}

void display(node *head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node *head = NULL;
    int q;
    cin >> q;
    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_head(head, v);
        } else if (x == 1) {
            insert_tail(head, v);
        } else if (x == 2) {
            delete_any_position(head, v);
        }
        display(head);
    }

    return 0;
}
