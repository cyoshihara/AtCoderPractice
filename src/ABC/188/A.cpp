#include <bits/stdc++.h>
using namespace std;

int main( int argc, char *argv[] )
{
  int x, y;
  cin >> x >> y;
  if      ( y < x && x < y+3 ) cout << "Yes" ;
  else if ( x < y && y < x+3 ) cout << "Yes" ;
  else                         cout << "No";
  return 0;
}