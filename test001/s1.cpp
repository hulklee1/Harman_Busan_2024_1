#define SQUARE(X) ((X)*(X))   // 매크로함수
#define ABS(X)	(((X)<0)?-(X):(X))
#define PI   3.14159265
int abs(int val)
{
	int ret = (val < 0) ? -val : val;
	return ret;
	//if (val < 0) return -val;
	//return val;
}