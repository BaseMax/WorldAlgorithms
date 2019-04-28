// n + m
int sum(int n, int m){
	if(m==0){
		return n;
	}
	return sum(n, m-1)+1;
}
