class Solution {
public:
    void swap(int &a, int &b )
    {
        int temp = a;
        a= b;
        b = temp;
    }
    void rotate(vector<vector<int>>& matrix) 
    {
        int m= matrix.size();
        //int col = matrix[i].size();
        
        for(int i=0 ; i<m; i++)
        {
            for(int j=0 ; j<i ;j++)
            {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        
        for(int i=0 ; i<m ;i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
          // sort(matrix[i].begin() , matrix[i].end() )
        }
        
        
    }
};
/*
1 2 3    dtaking 3 5 7 as diagonal for swapping
4 5 6
7 8 9

9 6 3
8 5 2
7 4 1 

1 2 3    dtaking 1 5 9 as diagonal for swapping
4 5 6
7 8 9

1 4 7
2 5 8
3 6 9

*/