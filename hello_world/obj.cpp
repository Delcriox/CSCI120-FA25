#include "obj.hpp"

int main() {
    vector<char> v = {'h', 'a', 'p', 'p', 'y'};
    A ob;
    //ob.load(v);
    //ob.st_print();

    ob.vec_print(v);

    return 0;
}

void A::load(vector<char> input) {
    for(int i=0;i<input.size();i++) {
        // load all elements of input into st
        st.push(input.at(i));
    }
    return ;
}

void A::st_print() {

    for(;!st.empty();) {
    char top = st.top();
    st.pop();

    printf("%c", top);
    }

    return ;
}

void A::vec_print(vector<char> x) {

    stack<char> buffer;

    for(int i=0;i<x.size();i++) {
        if(i>=20) {
            break;
        }
        st.push(x.at(i));
    }
    // we have loaded the stack

    for(;!st.empty();) {
        buffer.push(st.top());
        st.pop();
    }

    st = buffer;

    st_print();

    printf("\n");
    return ;
}

A::A() {
    st = {};
}