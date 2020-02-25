#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <stack>
#include <cstdio>
#include <queue>
#include <utility>
using namespace std;

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class BST{
  public:
  BST();
  BST(vector<int> initial_values);
  ~BST();

  void push(int key);
  void insert(TreeNode *&rt, int key);
  int depth();
  int depth(TreeNode* rt);
  vector<int> inOrderRecur();
  vector<int> inOrderRecur(TreeNode *&rt, vector<int>& inputs);
  vector<int> InOrderNonRecur();

  private:
  TreeNode *root_;
};

#endif
