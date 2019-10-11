/*Sherlock Being tired with the usual coding rounds 
started growing his interest towards reverse coding
 when he won the event in his college symposium.
  He wondered if his friend has the brain to quickly 
  identify the pattern and verify if his inputs are 
  correct or not. From the example portion given below, 
  where you will be given a number(n) and its output, 
  Using this find the pattern. Your task is that from 
  the pattern you identified above, You have to tell 
  if for the given n whether the given m is the correct
  answer or not...*/
int main() {
	//code
	int n;
	cin>> n;
	for(int i=0;i<n;i++)
	{
		int a[2];
		cin>>a[0];
		cin>>a[1];
		if(a[0]==0 && a[1]==0)
		cout<<"1"<<endl;
		else if (a[0]==1 && a[1]==1)
		cout<<"1"<<endl;
		else if (a[0]>1)
		{   int c=1;
			for(int j=2; j<a[0]+1;j++)
			{
				c =c+j;
				
			}
			if(c==a[1])
			cout<<"1"<<endl;
			else
			cout<<"0"<<endl;
		}
		else
		cout<<"0"<<endl;
		
	}	
	return 0;
}