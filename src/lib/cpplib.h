#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <utility>
#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;
class CPPLib
{
public:
  // q1
  vector<vector<int>> permuteUnique(vector<int>& nums);

  // q2
  std::vector<std::vector<std::vector<int>>> NQueens (int n);

  // q3
  int maxProduct(vector<int>& nums);
private:
};
#endif

