#include<stack>
#include<cstdio>

using std::stack;
using std::printf;

/*
stack arithmatic
single stack

encode all operations b/c stack of int

ops: 
    addition = 9999
    subtraction = 9998
    multipliction = 9997
    division = 10001

*/

int main();

int addition (int , int);

int subtraction (int, int);

int multiplication (int, int);

int division (int, int);

// evaluates a loaded stack
stack<int> evaluate( stack<int> );