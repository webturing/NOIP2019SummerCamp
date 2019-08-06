#include <bits/stdc++.h>
using namespace std;
struct BTree {
  char root;
  BTree* left;
  BTree* right;
  BTree(char root, BTree* left = nullptr, BTree* right = nullptr)
      : root(root), left(left), right(right) {}
  void post_visit() {
    if (left != nullptr) left->post_visit();
    if (right != nullptr) right->post_visit();
    cout << root;
  }
};
BTree* create(string pre_order, string mid_order) {
  if (pre_order.empty()) return nullptr;
  if (pre_order.size() == 1) {
    return new BTree(pre_order[0]);
  }
  char root = pre_order[0];
  int pos = mid_order.find(root);
  string left_mid_order = mid_order.substr(0, pos);
  string right_mid_order = mid_order.substr(pos + 1);
  string left_pre_order = "";
  for (auto c : pre_order) {
    if (left_mid_order.find(c) != string::npos) left_pre_order.push_back(c);
  }
  string right_pre_order = "";
  for (auto c : pre_order) {
    if (right_mid_order.find(c) != string::npos) right_pre_order.push_back(c);
  }
  return new BTree(root, create(left_pre_order, left_mid_order),
                   create(right_pre_order, right_mid_order));
}
int main() {
  string pre, mid;
  cin >> pre >> mid;
  create(pre, mid)->post_visit();

  return 0;
}