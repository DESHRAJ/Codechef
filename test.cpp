// #include <iomanip>
// #include <iostream>
 
// using namespace std;
 
// int main()
// {
//     float fValue = 21.3456;
 
//     cout << setiosflags( ios::fixed) << setprecision(2) << fValue << endl;
 
//     return 0;
// }
#include <iostream>
 
using namespace std;
 
int main()
{
    float fValue = 21.3456;
 
    cout.setf( ios::fixed );
    cout.precision( 2 );
    cout << fValue << endl;
 
    return 0;
}