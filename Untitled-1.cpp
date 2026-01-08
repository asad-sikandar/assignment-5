#include <iostream>
using namespace std;
int main() {
   int scores[5]  {85, 92, 78, 90, 88};  // Array of 5 integers
   cout << "First score: " << scores[0] << endl;  // Output: 85
   scores[2] = 80;  // Modify element
   cout << "Updated third score: " << scores[2] << endl;  // Output: 80
   return 0;
}

