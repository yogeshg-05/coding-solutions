
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
