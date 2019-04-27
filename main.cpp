#include <iostream>

using namespace std;

int main()
{
    string name1("Mike"), name2("Meryliana");
    string *pName1, *pName2;
    *pName1 = name1;
    *pName2 = name2;
     cout << *pName1 << endl;


    return 0;
}
