class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,s=matrix.size(),temp;
        for(i=0;i<s;i++)
        {
            for(j=i;j<s;j++)
            {
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(i=0;i<s;i++)
        {
            for(j=0;j<s/2;j++)
            {

                temp=matrix[i][j];
                matrix[i][j]=matrix[i][s-j-1];
                matrix[i][s-j-1]=temp;
            }
        }
    }
};
