# Abstract Classes - Polymorphism

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Abstract base classes in C++ can only be used as base classes. Thus, they are allowed to have virtual member functions without definitions.

A cache is a component that stores data so future requests for that data can be served faster. The data stored in a cache might be the results of an earlier computation, or the duplicates of data stored elsewhere. A cache hit occurs when the requested data can be found in a cache, while a cache miss occurs when it cannot. Cache hits are served by reading data from the cache which is faster than recomputing a result or reading from a slower data store. Thus, the more requests that can be served from the cache, the faster the system performs.

One of the popular cache replacement policies is: "least recently used" (LRU). It discards the least recently used items first.

For example, if a cache with a capacity to store 5 keys has the following state(arranged from most recently used key to least recently used key) -

	5 3 2 1 4
    
Now, If the next key comes as 1(which is a cache hit), then the cache state in the same order will be -

	1 5 3 2 4

Now, If the next key comes as 6(which is a cache miss), then the cache state in the same order will be -

	6 1 5 3 2

You can observe that 4 has been discarded because it was the least recently used key and since the capacity of cache is 5, it could not be retained in the cache any longer.

**Given an abstract base class *Cache* with member variables and functions**: <br/>

*mp* - Map the key to the node in the linked list<br/>
*cp* - Capacity<br/>
*tail* - Double linked list tail pointer<br/>
*head* - Double linked list head pointer<br/>
*set()* - Set/insert the value of the key, if present, otherwise add the key as the most recently used key. If the cache has reached its capacity, it should replace the least recently used key with a new key.<br/>
*get()* - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.<br/>

You have to write a class *LRUCache* which extends the class *Cache* and uses the member functions and variables to implement an LRU cache.

**Input Format**

First line of input will contain the $N$ number of lines containing $get$ or $set$ commands followed by the capacity $M$ of the cache.<br>
The following $N$ lines can either contain $get$ or $set$ commands.<br>
An input line starting with $get$ will be followed by a $key$ to be found in the cache. An input line starting with $set$ will be followed by the $key$ and $value$ respectively to be inserted/replaced in the cache.

**Constraints**  
$1 <= N <= 500000$  
$1 <= M <= 1000$  
$1 <= key <= 20$  
$1 <= value <= 2000$  

**Constraints**

 

**Output Format**

The code provided in the editor will use your derived class *LRUCache* to output the value whenever a get command is encountered.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-25T06:25:13.411Z  

```cpp

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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem)