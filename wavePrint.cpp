#include <iostream> 
#include<vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;

    for(int cols= 0; cols<mCols; cols++) {

        if( cols&1 ) {
           //odd index bottom to top

            for(int rows = nRows-1; rows >= 0; rows--) {
                ans.push_back(arr[rows][cols]);
              
           }
       }

       else{

           for(int rows =0; rows < nRows; rows++) {
               ans.push_back(arr[rows][cols]);  
           }
       }
   }
   return ans;
}  
