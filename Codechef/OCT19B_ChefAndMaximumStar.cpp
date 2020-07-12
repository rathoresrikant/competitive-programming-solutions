#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, m, q;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int occurence[1000001] = {0};
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			occurence[arr[i]]++;
		}
		int star[1000001] = {0};
		int ans[n] = {0};
		star[arr[0]]++;
	    int ind = 0;
	    for (int i = 0; i < n; ++i)
		{
			if (occurence[arr[i]] > 1) ind = i;
		}
		for (int i = 1; i < n; ++i)
		{
		    if (arr[i] == 1)
		    {
		        star[1]++;
		        ans[i] = i;
		        continue;
		    }
		    if (occurence[arr[i]] > 1 && i < ind)
		    {
		        star[arr[i]]++;
		        ans[i] = 0;
		        continue;
		    }
			int a = arr[i];
			while(a <= 1000000)
			{
			    ans[i] += star[a];
			    a += arr[i];
			}
			star[arr[i]]++;
		}
		int max = 0;
		for (int i = 0; i < n; ++i)
		{
			if (ans[i] > max)
			{
				max = ans[i];
			}
		}
		/*for (int i = 0; i < n; i++)
		{
		    cout << ans[i] << " ";
		}*/
		cout << max << endl;
	}
    return 0;
}
