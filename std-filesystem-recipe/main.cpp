#include <filesystem>
#include <iostream>

const char* USAGE =
R"(is_regular
  Usage: is_regular <file>
)";

int main(int argc, char** argv)
{
    const char* filename = nullptr;
    if (argc > 1) {
        filename = argv[1];
    } else {
        std::cerr << USAGE;
        return -1;
    }

    std::cout << "Is file '" << filename << "' a regular file?: ";

    if (std::filesystem::is_regular_file(filename)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
        
    return 0;
}
