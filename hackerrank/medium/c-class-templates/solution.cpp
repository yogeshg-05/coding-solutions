

/*Write the class AddElements here*/
template <class T>
class AddElements {
    T element;
    public:
        AddElements(T arg) : element(arg) {}
        T add(T arg) {
            return element + arg;
        }
};

template <>
class AddElements<string> {
    string element;
    public:
        AddElements(const string& arg) : element(arg) {}
        string concatenate(const string& arg) {
            return element + arg;
        }
};

