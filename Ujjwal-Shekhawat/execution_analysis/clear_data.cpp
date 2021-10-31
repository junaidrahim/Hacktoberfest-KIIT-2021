#include<cstdlib>
#include<fstream>

int main() {
    std::system("rm execution_information.txt -rf && touch execution_information.txt");
    std::system("clear");
    std::system("ls");

    return 0;
}