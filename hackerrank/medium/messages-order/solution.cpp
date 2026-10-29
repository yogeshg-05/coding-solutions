

class Message {
private:
    string text;
    int order;

public:
    Message() : text(""), order(0) {}

    Message(const string& text, int order) : text(text), order(order) {}

    const string& get_text() const {
        return text;
    }

    bool operator<(const Message& other) const {
        if (text != other.text) {
            return order < other.order;
        }
        return order < other.order;
    }
};

class MessageFactory {
private:
    int counter = 0;

public:
    MessageFactory() {}

    Message create_message(const string& text) {
        return Message(text, counter++);
    }
};

