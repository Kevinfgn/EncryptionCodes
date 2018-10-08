#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int HashingFunction(std::string input){
    int init = 124564352;
    int magicNUm = 5674356;
    int hash;
    for(int i = 0; i < input.length();i++){
        hash = hash ^ (input[i]);
        hash = hash * magicNUm;
    }
    return hash;
}
std::string ToHex(int input){
    std::string hexHash;
    std::stringstream hexStream;
    hexStream << std::hex << input;
    hexHash = hexStream.str();
    std::transform(hexHash.begin(), hexHash.end(), hexHash.begin(), ::toupper);
    return hexHash;


}
int main() {
    std::string password = "Esta es mi password";

    std::cout<<"La clave encriptada es " << ToHex(HashingFunction(password));
}