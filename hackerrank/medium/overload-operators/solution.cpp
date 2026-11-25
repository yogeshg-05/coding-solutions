
Complex operator+(const Complex& x, const Complex& y) {
    Complex res;
    res.a = x.a + y.a;
    res.b = x.b + y.b;
    return res;
}

ostream& operator<<(ostream& os, const Complex& c) {
    os << c.a << "+i" << c.b;
    return os;
}
//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

