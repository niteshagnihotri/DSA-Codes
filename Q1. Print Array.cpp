#include <iostream>
using namespace std;
int main()
{
    char* sub[8] = {"DSA", "Java", "Discrete Mathematics", "Data Communication", "Unix Shell", "Cloud Computing"};

    cout << "Subject Names are : \n\n";
    for (int i=0; i<7; ++i){
            cout << sub[i] << "\t";
    }

    return 0;
}
