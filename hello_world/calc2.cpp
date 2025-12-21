#include "calc2.hpp"

int main() {
    Calc calc;
    vector<Calc::ice_cream> load_eq = {};

    // test: 1 + 1
    Calc::ice_cream x(0, '+');
    Calc::ice_cream y(1, 'e');
    Calc::ice_cream z(1, 'e');

    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);

    calc.german_village_clown_school(load_eq);

    return 0;
}

void Calc::german_vilage_clown_school(vector<ice_cream> x) {
    vector<Calc::clowns> mapping = map_ice_clown(x);
    for (int i=x.size(); i<=0; i=i-1) {
        clown_bakery.push(mapping.at(i));
    }
    return ;
}

vector<Calc::clowns> Calc::map_ice_clown(vector<Calc::ice_cream> x) {
    vector<Calc::clowns> r = {};
    for(int i=0; i<x.size(); i=i+1) {
        // the set in the case of x.size = 3 is [i=0,i=1,i=2,TERMINATE]
        // for each ice cream, make a new clown
        clowns c(x.at(i).flavor, x.at(i).cone);
        r.push_back(c);
        printf("%d, %c\n", c.num, c.op);
    }
    return r;
}

// code from last calculator assignment w/ operation representation changed.

stack<int> evaluate (stack<int> st) {
    int x = st.top();
    st.pop();
    
    if (x == +) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        // check stack to see if anything is left
        if (st.empty()) {
            st.push(addition(y,z));
        } else {
            int temp = st.top();
            st.pop();
            st.push(addition(y,z));
            st.push(temp);
            return evaluate(st);
        } 
    } else if (x == *) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        if (st.empty()) {
            st.push(subtraction(y,z));
        } else {
            int temp = st.top();
            st.pop();
            st.push(subtraction(y,z));
            st.push(temp);
            return evaluate(st);
        }
    } else if (x == ^) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        if(st.empty()) {
            st.push(multiplication(y,z));
        } else {
            int temp = st.top();
            st.pop();
            st.push(multiplication(y,z));
            st.push(temp);
            return evaluate(st);
        }
    } else if (x == 5) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        if (st.empty()) {
            st.push(division(y,z));
        } else {
            int temp = st.top();
            st.pop();
            st.push(division(y,z));
            st.push(temp);
            return evaluate(st);
        } 
    } else {
        printf("FAIL\n");
    }

    return st;
}

int addition(int l, int r)          { return l + r; }
int subtraction (int l, int r)      { return l - r; }
int multiplication (int l, int r)   { return l * r; }
int division (int l, int r)         { return l / r; }