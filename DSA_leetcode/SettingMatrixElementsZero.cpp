#include <iostream>
#include <vector>
using namespace std;

void zeroSetter(vector<vector<int>> &matrix) {
  int m = matrix.size();
  int n = matrix[0].size();
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[i][j] == 0) {
        for (int col = 0; col < n; col++) {
          if (matrix[i][col]!=0) {
          matrix[i][col] = 1;
          }
          
        };
      };
    };
  };
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < m; i++) {
      if (matrix[i][j] == 0) {
        for (int row = 0; row < m; row++) {
          if(matrix[row][j]!=0)
          {matrix[row][j] = 1;} ;

        };
      };
    };
  };
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[i][j] == 1) {
        matrix[i][j] = 0;
      };
     
    };
    
  };

  return;
} ;

int main()
{
vector<vector<int>> matrix={{2,2,4},{3,0,2},{6,4,5}} ;

zeroSetter(matrix) ;
for (int i=0; i<3; i++) 
{
for (int j=0; j<3; j++) 
{
cout<<" "<<matrix[i][j] ;

};
cout<<endl ;
};

}