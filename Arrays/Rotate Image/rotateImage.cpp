class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();
        int temp, temp2;
        //transpose the matrix
    for(int i=0;i<n;i++){         
        for(int j=i+1; j<n; j++){   
            temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
        //reverse the rows of matrix
        for(int i=0; i<n; i++){
            int start=0, end=n-1;
            while(start<end){
                temp=matrix[i][start];
                matrix[i][start]=matrix[i][end];
                matrix[i][end]=temp;
                start++;
                end--;
            }
        }

    }
};
