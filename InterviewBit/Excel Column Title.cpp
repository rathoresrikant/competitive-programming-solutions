string Solution::convertToTitle(int A) {
    string str;
    int temp = A;
    int divide = 0;
    
    //cout<<"test";
    //str.push_back('A'+1);
    //cout<<str<<" test over";
    //int top = temp%26;
    while(temp>0)
    {
        divide = temp%26;
        if(divide==0)
        {
            str.push_back('Z');
            temp = (temp/26)-1;
        }
        else
        {
            str.push_back('A' + (divide-1));
            temp = temp/26;
        } 
    }
    reverse(str.begin(),str.end());
    return str;
}
