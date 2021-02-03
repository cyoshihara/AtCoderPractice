#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  int m, n;

  cin >> n >> m;
  vector<pair<int, int> > ab_pairs(m);
  for (auto& ab_pair : ab_pairs) {
    cin >> ab_pair.first >> ab_pair.second;
  }

  size_t k;
  cin >> k;
  vector<pair<int, int> > cd_pairs(k);
  for (auto& cd_pair : cd_pairs) {
    cin >> cd_pair.first >> cd_pair.second;
  }

  int ans = 0;
  int combination_count = pow(2, k);

  const int max_k = 20;

  for (int i_cd_pattern = 0; i_cd_pattern < combination_count; ++i_cd_pattern) {
    vector<bool> ball_in_tray_flags;
    auto pattern_bit = std::bitset<max_k>(i_cd_pattern);
    vector<bool> ball_on_tray_flags(n, false);
    for (int i_digit = 0; i_digit < k; ++i_digit) {
      const auto& c_or_d = cd_pairs[i_digit];
      if (pattern_bit[i_digit])
        ball_on_tray_flags[c_or_d.second] = true;
      else
        ball_on_tray_flags[c_or_d.first] = true;
    }
    // util::print(ball_on_tray_flags, false, "ball_on_tray_flags");

    //このボールの状態がA/Bにあるか
    int count_mitasu_condition = 0;
    for (int i_cond = 0; i_cond < m; ++i_cond) {
      int i_a = ab_pairs[i_cond].first;
      int i_b = ab_pairs[i_cond].second;
      if (ball_on_tray_flags[i_a] && ball_on_tray_flags[i_b])
        ++count_mitasu_condition;
    }
    if (count_mitasu_condition > ans) ans = count_mitasu_condition;
  }

  cout << ans << endl;

  return 0;
}