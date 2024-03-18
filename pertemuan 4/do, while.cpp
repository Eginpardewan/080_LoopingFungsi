#include <iostream>
using namespace std;

int main(){
    int x;
    srand(time(0));

   do
   {
    cout << "Perulangan Dengan Do,, While" << endl;
    x = rand() % 10;
    cout << "Nilai X = " << x << endl;
   }while(x > 4);
    
}