#include <iostream>
#include <vector>
using namespace std;
class Book
{
public:
    vector<pair<string, int>> v;
    void setBookName(string name, int num)
    {
        v.emplace_back(name, num);
    }
    void getData(string name)
    {
        for (auto &pair : v)
        {
            if (pair.first == name)
            {
                cout << pair.first << " is present in "
                     << "shelf no:" << pair.second << endl;
            }
        }
    }
};
int main()
{
    Book b1;
    b1.setBookName("RD Sharma", 8);
    b1.setBookName("HC Verma", 7);
    b1.setBookName("DC Pandey", 10);
    b1.getData("RD Sharma");
    b1.getData("DC Pandey");

    return 0;
}
