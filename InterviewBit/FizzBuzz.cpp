vector<string> Solution::fizzBuzz(int A) {
    vector<string>ans;
    for(int i=0 ; i<A ; i++)
    {
        int temp=i+1;
        if(temp%3==0 && temp%5==0)
            ans.push_back("FizzBuzz");
        else if(temp%3==0)
            ans.push_back("Fizz");
        else if(temp%5==0)
            ans.push_back("Buzz");
        else
            ans.push_back(to_string(temp));
    }
    return ans;
}