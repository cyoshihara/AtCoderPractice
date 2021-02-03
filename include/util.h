#include <bits/stdc++.h>

struct util {
  ///////////////////////////////
  template <typename T>
  static void print(const T& item, const std::string& title = "") {
    if (!title.empty()) print_title(title);
    std::cout << item << std::endl;
  }
  ///////////////////////////////
  template <typename T>
  static void print(const std::vector<T>& v,
                    bool flag_separate_new_line = false,
                    const std::string& title = "") {
    if (!title.empty()) print_title(title);
    if (flag_separate_new_line)
      for (const auto& item : v) std::cout << item << std::endl;
    else
      for (const auto& item : v) std::cout << item;
    std::cout << std::endl;
  }

  // TODO: 格納場所変更
  static void test_print_00();
  static void test_print_01();
  static void test_print_02();
  /*
  --------------------------------------------------
  */

 private:
  static void print_title(const std::string& title);

};  // util
