#include <iostream>
#include <string>

std::string replacer(std::string &startstring, int position) {
    std::string newstring = startstring;
    if (position < startstring.size()) {
        if (startstring[position] == 'x')
            newstring[position] = ' ';
        return replacer(newstring, position + 1);
    } else
        return startstring;
}

int main() {
    std::string example ="x0x";
    std::cout<<replacer(example,0)<<std::endl;
    return 0;
}