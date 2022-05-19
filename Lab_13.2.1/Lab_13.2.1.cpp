#include<iostream>
using namespace std;

#define Z 2

#define MAX(x,y)  ((x)>(y))?(x):(y)
#define MIN(x,y)  ((x)<(y))?(x):(y)
#define MODUL(x) ((x)>(0))?(x):(-x)
#define SQR(x) (x)*(x)

#define VIVID(w) cout<<w;
#define VVID(w)	cin>>w;

int main()
{
	double w;
	int x, y;
	VIVID("x = "); VVID(x);
	VIVID("y = "); VVID(y);
	#if Z==1
	w = MAX(SQR(x - y), MODUL(x - y));
	#else
	w = MIN(x + SQR(y), Z + SQR(x));
	#endif
	VIVID("w = "); VIVID(w);
	VIVID(endl);
	return 0;
}