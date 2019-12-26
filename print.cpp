#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using std::cout;
using std::cerr;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void print(const string& msg, unsigned int millis_per_char)
{
    for (const char c: msg)
    {
        cout << c << flush;
        sleep_for(milliseconds(millis_per_char));
    }
}

int main(int argc, char* argv[])
{
    string message = "Hello world!\n";
    print(message, 40);
    getchar();

    return 0;
}
