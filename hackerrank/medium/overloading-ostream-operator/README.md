# Hotel Prices

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

The task is to overload the << operator for Person class in such a way that for `p` being an instance of class Person the result of:

```cpp
std::cout << p << " " << <some_string_value> << std::endl;
```

produces the following output:

```
first_name=<first_name>,last_name=<last_name> <some_string_value>
```

where:

- `<first_name>` is the value of `p`'s `first_name_`
- `<last_name>` is the value of `p`'s `last_name_`
- `<some_string_value>` is an arbitrary `std::string value`



**Input Format**

The input is read by the provided locked code template. In the only line of the input there are 3 space-separated strings `first_name`, `last_name`, `event`. The values of `first_name` and `last_name` will be used to create an object `p` of type Person. The value of `event` will be used by the provided code to produce the output.


**Constraints**

- Each word in the input contains only English letters and is no longer than 15 characters


**Output Format**

The output should be produced by the provided locked code template. This code will use the implementation of Person public methods and the overloaded `<<` operator to produce the output. Specifically, the output wiil be produced by the following code:

```cpp
cout << p << " " << event << endl;
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-05T11:18:09.480Z  

```cpp

#include <iostream>
#include <vector>
using namespace std;

class HotelRoom {
public:
    HotelRoom(int bedrooms, int bathrooms)
        : bedrooms_(bedrooms), bathrooms_(bathrooms) {}

    virtual int get_price() {
        return 50 * bedrooms_ + 100 * bathrooms_;
    }

    virtual ~HotelRoom() {}

private:
    int bedrooms_;
    int bathrooms_;
};

class HotelApartment : public HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms)
        : HotelRoom(bedrooms, bathrooms) {}

    int get_price() override {
        return HotelRoom::get_price() + 100;
    }
};

int main() {
    int n;
    cin >> n;

    vector<HotelRoom*> rooms;

    for (int i = 0; i < n; ++i) {
        string room_type;
        int bedrooms, bathrooms;

        cin >> room_type >> bedrooms >> bathrooms;

        if (room_type == "standard") {
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        } else {
            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;

    for (auto room : rooms) {
        total_profit += room->get_price();
    }

    cout << total_profit << endl;

    for (auto room : rooms) {
        delete room;
    }

    rooms.clear();

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/overloading-ostream-operator/problem)