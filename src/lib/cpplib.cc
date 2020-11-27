#include "cpplib.h"
#include "limits"
#include <iostream>


// Question 1

void CPPLib::permutation (vector<int> original, vector<int>cur, vector<vector<int>> &result){
		
	if (cur.size() == original.size()){
		
		result.push_back(cur);
		return;
		
	}
	
	vector<int> cur_copy = cur;
	vector<int>::iterator it;
		
	for (int i = 0; i < original.size(); i++){
		
		if (std::find(cur_copy.begin(), cur_copy.end(), original[i]) != cur_copy.end()) {
			
			it = std::find(cur_copy.begin(), cur_copy.end(), original[i]);
			cur_copy.erase(it);
			continue;
		}
		
		//do a recursive DFS call
		vector<int> NextPath = cur;
		NextPath.push_back(original[i]);
		permutation(original, NextPath, result);
		
	}
	
	
}
vector<vector<int>> CPPLib::permuteUnique(vector<int>& nums) {
	
	vector<int> original = nums;
	vector<int>cur;
	vector<vector<int>> result;
	
	permutation(original, cur, result);
	
	int i = result.size() - 1;
	
	int count = 0;
	
	//int j = 0;
	
	while (i>0){
		
		count = 0;
		vector<int> target = result[i];
		
		for (int j = i-1; j >= 0; j-- ){
			
			if (result[j] == target){
				
				result.erase(result.begin()+j);
				count ++;
			}
			
		}
		
		i = i - 1 - count;
		
	}

	
	
	/*
	while (i>0){
		
		count = 0;
		
		vector<int> target = result[i];
		int j = i - 1;
		
		while (j >= 0){
			
			if (result[j] == target){
				
				result.erase(result.begin()+j);
				count ++;
				j = j - 1;
				//std::cout<<"current i"<<i<<std::endl;
				
			}
			else {
				j = j -1;
			}
			
		}
		
		i = i - 1 - count;
		
	}
	*/
	
	return result;
}

// Question 2
std::vector<std::vector<std::vector<int>>> CPPLib::NQueens (int n){

}
// Question 3
int CPPLib::maxProduct(vector<int>& nums){
    
}
