#include <iostream>
using namespace std;
int main ()
{
    int k;
    bool blank = false;
 
    while ( cin>>k && k ) {
 
        if ( blank )
           cout<<endl;
        blank = true;
 
        int x [13];
 
        for ( int i = 0; i < k; i++ )
            cin>>x[i];
 
        for ( int a = 0; k - a > 5; a++ ) {
            for ( int b = a + 1; k - b > 4; b++ ) {
                for ( int c = b + 1; k - c > 3; c++ ) {
                    for ( int d = c + 1; k - d > 2; d++ ) {
                        for ( int e = d + 1; k - e > 1; e++ ) {
                            for ( int f = e + 1; k - f > 0; f++ ) {
                                 cout<<x[a]<<x[b]<<x[c]<<x[d]<<x[e]<<x[f]<<endl;
                            }
                        }
                    }
                }
            }
        }
 
    }
 
    return 0;
}
