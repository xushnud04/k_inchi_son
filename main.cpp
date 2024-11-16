#include <iostream>
#include <string>
#include <sstream>

using namespace std;
char k_chi_urindagi_son(int k)
{
    int n = 0;
    string str1, s;
    str1 = "";

    while(str1.length()<k)
    {
        stringstream con;
        n++;
        con << n;
        con >> s;
        str1 += s;
        s = " ";

    }
    return str1[k-1];
}
int main()
{
   char ch = k_chi_urindagi_son(11);
    cout << "J : " << ch << endl;
    return 0;
}
