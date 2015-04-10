#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int qtyTOHedge;
   cout << "Hello World" << endl;
   cin>>qtyTOHedge;
   cout<<floor(qtyTOHedge/10.0)+floor((qtyTOHedge-10*floor(qtyTOHedge/10.0))/8.0)<<endl;
   
   
   return 0;
}

