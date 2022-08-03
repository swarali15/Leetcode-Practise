class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxheap;
        
        for(int i=0; i<matrix.size(); i++)
        {
           
           // if(i*matrix.size()+j>=k) break;
            for( int j=0; j<matrix.size(); j++)   
            {
                
                maxheap.push(matrix[i][j]);
                if(maxheap.size()>k) maxheap.pop();
                //if(i*matrix.size()+j>=k) break;
            }
        }
        return maxheap.top();
        
    }
};