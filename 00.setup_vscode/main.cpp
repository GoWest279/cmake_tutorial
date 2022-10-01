#include <iostream>
int main(int argc, char* argv[]) {
    if(argc < 2) {
        std::cout<<"[Wrong]only " << argc <<" received"<<std::endl;
        std::cout<<"       ./main string_to_print" <<std::endl;
        return 1;
    }
    else 
        std::cout<<"[Correct]Input string: "<< argv[1] << std::endl;
    return 0;
}