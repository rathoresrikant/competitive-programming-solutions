int gcd(int x ,int y)
{
    if(y==0)
       return x;
    
    return gcd(y, x%y);
    
}

int Solution::isPower(int A) 
{
    
    if(A == 1)
       return 1;
    
    if(A == 0)
       return 0;
    
    int count1 = 0, count2 = 0;
    vector <int> B;
    int n = A;
    while( n %2 == 0)
    {
        count1++;
        n = n/2;
    }
    if(count1 > 0)
       B.push_back(count1);
       
    for(int j=3; j <= sqrt(n); j=j+2)
    {
        while(n%j == 0)
        {
          //cout << " " << n << " ";    
          n = n/j;
          count2++;
        }
        if(count2 > 0)
        {
           B.push_back(count2);
           count2=0;
        }   
        
        /*if(count2 > 0 && count1 >0 && (count1 != count2))
           return 0;*/
        
        /*if(count2 > 0)
        {
          count1 = count2;   
          count2 = 0;  
        }*/
    }
    if(n > 2)
      B.push_back(1);
    //for(int i=0; i<B.size(); i++)
      //   cout << B[i];
         
    int x=0;
    
    x=B[0];
    
    for(int k=1; k<B.size(); k++)
    {
        if( B[k] >= x)
        x = gcd(B[k],x);
        else
        x= gcd(x , B[k]);
    }
    
    //cout <<"  " <<x;
    
    if(x > 1)
      return 1;
      
    return 0;
}

