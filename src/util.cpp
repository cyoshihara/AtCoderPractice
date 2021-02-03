#include "../include/util.h"

#include <bits/stdc++.h>
using namespace std;

void util::test_print_00() {
  vector<int> v = {1, 2, 3, 4};
  print(v);
}

void util::test_print_01() {
  vector<int> v = {1, 2, 3, 4};
  print(v, "v");
}

void util::test_print_02() {
  int a = 0;
  print(a, "a");
}

/*
  --------------------------------------------------
  */

void util::print_title(const string &title) {
  cout << "------------------------------" << endl;
  cout << title << endl;
  cout << "------------------------------" << endl;
}
