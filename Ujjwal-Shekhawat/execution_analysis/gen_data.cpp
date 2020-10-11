#include<cstdlib>
#include<thread>

void func() {
    // ! gnome-terminal -e --execute are depricatred and may also be removed in newer updares and version od gnome-terminal also -c dosent exsist anymore
    // * gnome-terminal -- bash -c "<my command or script> This is the right way to do things now
    std::system("gnome-terminal -- bash -c \"./a.out\" && cp execution_information.txt ./data_analysis_python ");
}

int main(int argc, char** argv)  {
    using namespace std::chrono_literals;
    int i=0;
    // For later update of this program i will use stoi() functioh of the string class (Updated done)
    i = std::atoi(argv[1]);

    while(i) {
        func();
        std::this_thread::sleep_for(0.1s);
        i-=1;
    }



    return 0;
}