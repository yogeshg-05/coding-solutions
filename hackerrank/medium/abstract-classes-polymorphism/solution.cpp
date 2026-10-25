
class LRUCache : public Cache {
public:
    LRUCache(int capacity) {
        cp = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void set(int key, int value) {
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            node->value = value;
            node->prev->next = node->next;
            node->next->prev = node->prev;
        } else {
            if (mp.size() == cp) {
                Node* last = tail->prev;
                mp.erase(last->key);
                last->prev->next = tail;
                tail->prev = last->prev;
                delete last;
            }
            Node* node = new Node(key, value);
            mp[key] = node;
        }

        Node* node = mp[key];
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];
        node->prev->next = node->next;
        node->next->prev = node->prev;

        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;

        return node->value;
    }
};
