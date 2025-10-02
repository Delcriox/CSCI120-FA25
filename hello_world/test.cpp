#include <cstdio>
#include <vector>
#include <string>




using std::vector;

char vegtible(char a, char b) {
    return a + b;

}

int main() {
    char a = 127;
    char b = 1;
    printf("%d\n", vegtible(a,b));
    printf("hello world\n");
    vector<int> squid = {0,1,2,3,4,5};
    printf("%d", squid.at(0));
    return 0;
}