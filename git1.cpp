#include <iostream>
#include <cmath>

using namespace std;
 
int main()
{
    int n,m;
    cin >> n >> m;
    string str;
    cin >> str;
  if(str=="heat") {
      if(n < m) {
        cout << m;
        } else {
          cout << n;
        }
    }
else if(str=="freeze") {
if(n < m) {
        cout << n;
        } else {
          cout << m;
        }
}
    
    else if(str=="auto")
        cout << m;
    else 
        cout << n;
    return 0;
}#include <iostream>
#include <cmath>

using namespace std;
 
int main()
{
    int n,m;
    cin >> n >> m;
    string str;
    cin >> str;
  if(str=="heat") {
      if(n < m) {
        cout << m;
        } else {
          cout << n;
        }
    }
else if(str=="freeze") {
if(n < m) {
        cout << n;
        } else {
          cout << m;
        }
}
    
    else if(str=="auto")
        cout << m;
    else 
        cout << n;
    return 0;
}