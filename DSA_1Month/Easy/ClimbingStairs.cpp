//Using DP and variable approach to calculate the most optimal solution

int climbStairs(int n) {
    int ans, x, y;
	x=1;
	y=0;
	if (n==1 || n==0) return 1;
	for (int i=n-1; i>=0;i--)
	{
		ans = (x+y);
		y=x;
		x=ans;
	}
	return ans;
}
