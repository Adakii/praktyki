#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

int main() {
    string line;
    ifstream myfile("helion.html");
    if (myfile.is_open())
    {
        while (getline(myfile,line))
        {
            smatch match;
            regex pattern("price=\"([^\"]+)\"");
            if (regex_search(line, match, pattern)) {
                cout << match[1] << '\n';
            }

        }
        myfile.close();
    }
    else cout << "Nie udalo sie otworzyc pliku";

    return 0;
}
