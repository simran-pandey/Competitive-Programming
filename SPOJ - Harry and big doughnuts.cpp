#23642774		2019-04-16 17:14:55	Harry and big doughnuts	accepted 0.00	15M	CPP

#include <cstdio>
int main() {
	int t, c, k, w;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &c, &k, &w);
		if(c*w <= k)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
 
