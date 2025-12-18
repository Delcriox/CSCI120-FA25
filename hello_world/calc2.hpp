#include <cstdio>
#include <stack>
#include <vector>

using std::vector;
using std::stack;
using std::printf;

/*
stack calculator built using a monolithic object.

this means that the object will obfuscate the structure (stack) of evaluation. [solved]
    - stack in private of class

this object represents something like a simple calculator taking numbers and evaluating

- problem: representing numbers and operations [solved]
    we need an encoding for the numbers and operations of our calculator,
        lets use a struc and operations of our calculator, lets use a struct.
    our structure houses numbers for eval and characters for operations
    the operations will represented by the following: 
    - '+' addition
    - '*' subtraction
    - '^' multiplication
    - '5' division
    - 'e' evaluation (fail safe for evaluatable number detection)

- problem: what are the basic operations of this calculator [solved]
    Binary operators on which two numbers will be given (a,b)
    - addition: a + b
    - subtraction: a - b
    - multiplication: a * b
    - division: fractionalizaed a b: a / b
    - evaluation: symbolizes number for evaluation, termination operation

- problem: what structure defines the equationns integrity  preserving order. [solved]
    stack<clowns> st.
    - stack of type clowns b/c clowns assist in evaluation operation encoding.

- problem: we need to be able to load this stack (st) in proper order. [unsolved]
    - get data from user
        - How: 
        - Where: constructor(limits object to single use) or function

- problem: we need a way to evaluate a full stack. [unsolved]
    - solution: calculator assignment
    
*/

class Calc {
private:
    struct clowns {
        int num;
        char op;
        clowns(int a, char b) {
            num = a;
            op = b;
        }
    };
    stack<clowns> clown_bakery;
    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    int division(int, int);
public:
    struct ice_cream {
        int flavor;
        char cone;
        ice_cream(int a, char b) {
            flavor = a;
            cone = b;
        }
    };
    // tool function
    vector<clowns> map_ice_clown(vector<ice_cream>);

    // loads the stack
    void german_village_clown_school(vector<ice_cream>);
};