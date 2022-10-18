class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> matrix)
	{
    // printing elements above and on
    // second diagonal
    vector<int> v;
    for (int k = 0; k < n; k++) {
 
        // traversing downwards starting
        // from first row
        int row = 0, col = k;
        while (col >= 0) {
         v.push_back(matrix[row][col]);
         row++, col--;
        }
    }
 
    // printing elements below second
    // diagonal
    for (int j = 1; j < n; j++) {
        // traversing downwards starting
        // from last column
        int col = n - 1, row = j;
        while (row < n) {
            v.push_back(matrix[row][col]);
            row++, col--;
        }
    }
    return v;
	}

};
