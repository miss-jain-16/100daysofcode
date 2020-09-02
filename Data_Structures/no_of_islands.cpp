/*
NUMBER OF ISLANDS CALCULATION
*/
void mark_current_island(vector<vector<char>>& matrix,int i,int j,int r,int c){
	if(i<0 || i>=r ||j<0 || j>=c || matrix[i][j]!='1') return;
	matrix[i][j]='2';
	mark_current_island(matrix,i+1,y,r,c);
	mark_current_island(matrix,i,y+1,r,c);
	mark_current_island(matrix,i-1,y,r,c);
	mark_current_island(matrix,i,y-1,r,c);
}

int numOfIslands(vector<vector<char>>& grid){
	int rows=grid.size();
	if(rows==0) return 0;
	int cols=grid[0].size();
	int no_of_islands=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(grid[i][j]=='1'){
				mark_current_island(grid,i,j,rows,cols);
				no_of_islands=no_of_islands+1;
			}
		}
	}
	return no_of_islands;
}
