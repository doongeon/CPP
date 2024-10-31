#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::vector<std::string> split(const std::string& str, const std::string& delimiter) {
    std::vector<std::string> tokens;
    size_t start = 0;
    size_t end = str.find(delimiter);
    while (end != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + delimiter.length();
        end = str.find(delimiter, start);
    }
    tokens.push_back(str.substr(start));
    return tokens;
};

int main(void)
{
    string fruit_string = "apple,banana,carrot";
    vector<string> fruits;
    string delimiter = ",";
    size_t start = 0;
    size_t end = fruit_string.find(delimiter);
    while(end != string::npos)
    {
        fruits.push_back(fruit_string.substr(start, end - start));
        start = end + delimiter.length();
        end = fruit_string.find(delimiter, start);
    }
    fruits.push_back(fruit_string.substr(start));

    for(auto fruit : fruits)
    {
        cout << fruit << " ";
    }
    cout << endl;

    return 0;
}