#include "simple_objects.hpp"

int main() {
    int b = 1;
    A squid;

    squid.road_in(5,12);
    (b, c) = squid.road_out();

    std::printf("b = %d, c = %d", b, c);
    return ;
}

void A::road_in(int z, int squid){
    b = z;
    c = squid;
    return ;
}

(int, int) A::road_out(){
        return b+c;
}

A::A() {
    b = 5;
    c = 5;
}
