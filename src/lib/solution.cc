#include "solution.h"

BST::BST(){
  root_ = nullptr;
}

BST::BST(vector<int> initial_values){
  root_ = nullptr;
  int size = initial_values.size();
  for(int i = 0; i < size; i++){
    push(initial_values[i]);
  }
}

BST::~BST(){
  root_ = nullptr;
}

void BST::push(int key){
  insert(root_, key);
}

void BST::insert(TreeNode *&rt, int val){
  if (rt == nullptr){
	  rt = new TreeNode(val);
	  return;
	}

  if (val < rt -> val){
    insert(rt->left, val);
  }else{
    insert(rt -> right, val);
    }
  }

// Question 1
int BST::depth(){
  return depth(root_);
}

int BST::depth(TreeNode* rt){
  if(rt == nullptr){
    return 0;
  }
  return max(depth(rt->left), depth(rt->right)) + 1;

}


// Question 2_Part 1. Do it recursively.

vector<int> BST::inOrderRecur(){
  vector<int> inputs;
  inOrderRecur(root_, inputs);
  cout << endl;
  return inputs;
}

vector<int> BST::inOrderRecur(TreeNode *&rt, vector<int>& inputs){
	if (rt == nullptr)
		return inputs;
	inOrderRecur(rt->left,inputs );
  inputs.push_back(rt->val);
	cout << rt->val << " ";
	inOrderRecur(rt->right, inputs);
  return inputs;
}

  // Question 2_Part 2. Do it non recursively.

vector<int> BST::InOrderNonRecur(){
  typedef pair <TreeNode*, int> pir;
  vector<int> ret;
  stack<pir> stk;

  stk.push(pir(root_, 0));

  while(!stk.empty()){
    pir T = stk.top();
    stk.pop();

    if(T.second == 0){
      T.second = 1;
      stk.push(T);

      if(T.first->left != nullptr){
        stk.push(pir(T.first->left, 0));
      }
    }else if(T.second == 1){
      T.second = 2;
      stk.push(T);

      ret.push_back(T.first->val);

      if(T.first->right != nullptr){
        stk.push(pir(T.first->right, 0));
       }
      }
  }
  for(int v : ret){
        cout << v << " ";
    }
    cout << endl;
  return ret;
}





