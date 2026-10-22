# Virtual Functions

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

This problem is to get you familiar with virtual functions. Create three classes *Person, Professor* and *Student*. The class *Person* should have data members name and age. The classes *Professor* and *Student* should inherit from the class *Person*.

The class *Professor* should have two integer members: *publications* and cur_id. There will be two member functions: *getdata* and *putdata*. The function *getdata* should get the input from the user: the *name, age* and *publications* of the professor. The function *putdata* should print the *name, age, publications* and the cur_id of the professor.

The class *Student* should have two data members: *marks*, which is an array of size $6$ and cur_id. It has two member functions: *getdata* and *putdata*. The function *getdata* should get the input from the user: the *name, age*, and the *marks* of the student in $6$ subjects. The function *putdata* should print the *name, age*, *sum* of the marks and the cur_id of the student.

For each object being created of the *Professor* or the *Student* class, sequential id's should be assigned to them starting from $1$.

Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.

**Note:** Expand the main function to look at how the input is being handled.

**Input Format**

The first line of input contains the number of objects that are being created.
If the first line of input for each object is $1$, it means that the object being created is of the *Professor* class, you will have to input the *name, age* and *publications* of the professor.

If the first line of input for each object is $2$, it means that the object is of the *Student* class, you will have to input the *name, age* and the *marks* of the student in $6$ subjects.

**Constraints**  

$1 \le len_{name} \le 100$, where $len_{name}$ is the length of the name.  
$1 \le age \le 80$  
$1 \le publications \le 1000$  
$0 \le marks \le 100$, where marks is the marks of the student in each subject.


**Constraints**

 

**Output Format**

There are two types of output depending on the object. 

If the object is of type *Professor*, print the space separated *name, age, publications* and *id* on a new line.

If the object is of the *Student* class, print the space separated *name, age*, the *sum of the marks* in $6$ subjects and *id* on a new line.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-22T16:35:02.281Z  

```cpp

class Person {
protected:
    string name;
    int age;

public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    virtual ~Person() {}
};

class Professor : public Person {
private:
    int publications;
    int id;
    static int count;

public:
    Professor() {
        id = ++count;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " "
             << publications << " " << id << endl;
    }
};

int Professor::count = 0;

class Student : public Person {
private:
    int marks[6];
    int id;
    static int count;

public:
    Student() {
        id = ++count;
    }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }

        cout << name << " " << age << " "
             << sum << " " << id << endl;
    }
};

int Student::count = 0;

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/virtual-functions/problem)