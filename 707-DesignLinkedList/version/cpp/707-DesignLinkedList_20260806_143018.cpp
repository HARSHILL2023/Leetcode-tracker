// Last updated: 8/6/2026, 2:30:18 PM
1class MyLinkedList {
2private:
3    struct Node {
4        int val;
5        Node* next;
6        Node(int v) : val(v), next(nullptr) {}
7    };
8
9    Node* head;
10    int size;
11
12public:
13    MyLinkedList() {
14        head = nullptr;
15        size = 0;
16    }
17    
18    int get(int index) {
19        if (index < 0 || index >= size) return -1;
20        Node* curr = head;
21        for (int i = 0; i < index; i++) {
22            curr = curr->next;
23        }
24        return curr->val;
25    }
26    
27    void addAtHead(int val) {
28        Node* newNode = new Node(val);
29        newNode->next = head;
30        head = newNode;
31        size++;
32    }
33    
34    void addAtTail(int val) {
35        if (size == 0) {
36            addAtHead(val);
37            return;
38        }
39        Node* newNode = new Node(val);
40        Node* curr = head;
41        while (curr->next) {
42            curr = curr->next;
43        }
44        curr->next = newNode;
45        size++;
46    }
47    
48    void addAtIndex(int index, int val) {
49        if (index < 0 || index > size) return;
50        if (index == 0) {
51            addAtHead(val);
52            return;
53        }
54        if (index == size) {
55            addAtTail(val);
56            return;
57        }
58        Node* newNode = new Node(val);
59        Node* curr = head;
60        for (int i = 0; i < index - 1; i++) {
61            curr = curr->next;
62        }
63        newNode->next = curr->next;
64        curr->next = newNode;
65        size++;
66    }
67    
68    void deleteAtIndex(int index) {
69        if (index < 0 || index >= size) return;
70        if (index == 0) {
71            Node* temp = head;
72            head = head->next;
73            delete temp;
74        } else {
75            Node* curr = head;
76            for (int i = 0; i < index - 1; i++) {
77                curr = curr->next;
78            }
79            Node* temp = curr->next;
80            curr->next = temp->next;
81            delete temp;
82        }
83        size--;
84    }
85};