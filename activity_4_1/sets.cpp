#include <cstdio> // Includes printf library
#include <array> // Library for arrays
#include <string> // Library for strings
#include <iostream>
#include <vector> // Library for vectors

int main() {

    std::array<int, 5> squid = {1,2,3,4,5};
    std::array<float, 7> decimals = {1.1, 1.2,1.3,1.4,1.5,1.6,1.7};
    std::array<char, 9> letters = {'H','i',' ','S','t','e','v','e','n'};
    std::array<std::string, 2> squid_str = {"hi", "there"};

    std::vector<int> numbers = {5,7,4,6};
    std::vector<char> characters = {'S','t','e','v','e','n'};
    std::vector<float> pi = {3.0,1.0,4.0};

    std::printf("%i\n", numbers.at(3));
    std::printf("%c\n", characters.at(2));
    std::printf("%f\n", pi.at(1));

    std::printf("%i\n", squid.at(1));
    std::printf("%f\n", decimals.at(2));
    std::printf("%c\n", letters.at(3));
    std::printf("%s\n", squid_str.at(0).c_str());

    
    return 0;

}