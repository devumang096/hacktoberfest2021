#include<iostream>
#include<fstream>
using namespace std;
/**please comment*/
/*mainfunction*/
 
int main()
{
    int count = 0;
    string line;
    ifstream file("lines.cpp");

    while (getline(file, line))
        count++;
        
    cout << "Numbers of lines in this file : " << count << endl;//count
    return 0;
}
