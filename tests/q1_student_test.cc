#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q1_Student, TEST1) {
	
	
    CPPLib s;
    vector<int> input = {0, 1, 2};
    vector<vector<int>> Expected = { {0, 1, 2}, {0, 2, 1}, {1, 0, 2}, {1, 2, 0}, {2, 0, 1}, {2, 1, 0}  };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}

TEST(Q1_Student, TEST2) {
	
	
    CPPLib s;
    vector<int> input = {0, 1, 1};
    vector<vector<int>> Expected = { {0, 1, 1}, {1, 0, 1}, {1, 1, 0}  };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}

TEST(Q1_Student, TEST3) {
	
	
    CPPLib s;
    vector<int> input = {0, 1};
    vector<vector<int>> Expected = { {0, 1}, {1,0} };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}

TEST(Q1_Student, TEST4) {
	
	
    CPPLib s;
    vector<int> input = {1, 1, 1, 1};
    vector<vector<int>> Expected = { {1, 1, 1, 1}  };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}

TEST(Q1_Student, TEST5) {
	
	
    CPPLib s;
    vector<int> input = {1, 1, 1, 1, 1, 1};
    vector<vector<int>> Expected = { {1, 1, 1, 1, 1, 1}  };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}

TEST(Q1_Student, TEST6) {
	
	
    CPPLib s;
    vector<int> input = {1, 1, 2};
    vector<vector<int>> Expected = { {1, 1, 2}, {1, 2, 1}, {2, 1, 1}  };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}

TEST(Q1_Student, TEST7) {
	
	
    CPPLib s;
    vector<int> input = {1, 2, 2, 3};
    vector<vector<int>> Expected = { {1, 2, 2, 3}, {1, 2, 3, 2}, {1, 3, 2, 2}, {2, 1, 2, 3}, {2, 1, 3, 2}, {2, 2, 1, 3}, {2, 2, 3, 1}, {2, 3, 1, 2}, {2, 3, 2, 1}, {3, 1, 2, 2}, {3, 2, 1, 2,}, {3, 2, 2, 1}  };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}

TEST(Q1_Student, TEST8) {
	
	
    CPPLib s;
    vector<int> input = {0, 0};
    vector<vector<int>> Expected = { {0, 0}  };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}

TEST(Q1_Student, TEST9) {
	
	
    CPPLib s;
    vector<int> input = {1};
    vector<vector<int>> Expected = { {1}  };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}

TEST(Q1_Student, TEST10) {
	
	
    CPPLib s;
    vector<int> input = {};
    vector<vector<int>> Expected = { {}  };

    vector<vector<int>> Actual = s.permuteUnique(input);
    
	EXPECT_EQ(Expected, Actual);
  
}