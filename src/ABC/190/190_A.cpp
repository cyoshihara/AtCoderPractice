#include <bits/stdc++.h>
using namespace std;

int main( int argc, char *argv[] )
{
  int a, b, c;
  cin >> a >> b >> c;
  // a = atoi( argv[1] );
  // b = atoi( argv[2] );
  // c = atoi( argv[3] );
  // cout << argv[0]  << endl ;

  if ( a > b ) {
    cout << "Takahashi" << endl;
  }
  else if ( b > a ) {
    cout << "Aoki" << endl;
  }
  else {// a == b
    if ( c == 0 ) {
      cout << "Aoki" << endl;
      return 0;
    }
    else {
      cout << "Takahashi" << endl;
      return 0;
    }
  }

  return 0;
}