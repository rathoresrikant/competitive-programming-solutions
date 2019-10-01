    #include <iostream>
    #include <cstdio>
    #include <cstring>
    #include <algorithm>
    #include <string>
    #include <queue>
    #include <stack>
    #include <map>
    using namespace std;
     
    int main()
    {
    	string s1, s2, s3;
    	std::cin >> s1 >> s2 >> s3;
    	if (s1[1] == s2[1] && s1[1] == s3[1])
    	{
    		int a = s1[0] - 48, b = s2[0] - 48, c = s3[0] - 48;
    		if (a == b && b == c)
    		{
    			std::cout << "0";
    		}
    		else 
    		if ((1.0*(a + b) / 2 == c || 1.0*(a + c) / 2 == b || 1.0*(c + b) / 2 == a) && ((a + 1 == b || a - 1 == b) || (a + 1 == c || a - 1 == c) || (c + 1 == b || c - 1 == b)))
    		{
    			std::cout << "0";
    		}
    		else if (a == b)
    		{
    			std::cout << "1";
    		}
    		else if (a == c)
    		{
    			std::cout << "1";
    		}
    		else if (b == c)
    		{
    			std::cout << "1";
    		}
    		else if (a != b && b != c && a != c)
    		{
    			if (a + 1 == b || a - 1 == b)
    			{
    				std::cout << "1";
    			}
    			else if (a + 1 == c || a - 1 == c)
    			{
    				std::cout << "1";
    			}
    			else if (b + 1 == c || b - 1 == c)
    			{
    				std::cout << "1";
    			}
    			else if (a + 2 == b || a - 2 == b)
    			{
    				std::cout << "1";
    			}
    			else if (a + 2 == c || a - 2 == c)
    			{
    				std::cout << "1";
    			}
    			else if (b + 2 == c || b - 2 == c)
    			{
    				std::cout << "1";
    			}
    			else
    			{
    				std::cout << "2";
    			}
    		}
    	}
    	else if (s1[1] != s2[1] && s1[1] != s3[1] && s2[1] != s3[1])
    	{
    		std::cout << "2";
    	}
    	else if (s1[1] == s2[1])
    	{
    		if (s1[0] != s2[0] && s1[0] != s2[0] + 1 && s1[0] != s2[0] - 1 && s1[0] != s2[0] + 2 && s1[0] != s2[0] - 2)
    		{
    			std::cout << "2";
    		}
    		else
    		{
    			std::cout << "1";
    		}
    	}
    	else if (s1[1] == s3[1])
    	{
    		if (s1[0] != s3[0] && s1[0] != s3[0] + 1 && s1[0] != s3[0] - 1 && s1[0] != s3[0] + 2 && s1[0] != s3[0] - 2)
    		{
    			std::cout << "2";
    		}
    		else
    		{
    			std::cout << "1";
    		}
    	}
    	else if (s2[1] == s3[1])
    	{
    		if (s3[0] != s2[0] && s3[0] != s2[0] + 1 && s3[0] != s2[0] - 1 && s3[0] != s2[0] + 2 && s3[0] != s2[0] - 2)
    		{
    			std::cout << "2";
    		}
    		else
    		{
    			std::cout << "1";
    		}
    	}
    	return 0;
    }