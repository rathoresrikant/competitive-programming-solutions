#include <iostream>

using namespace std;


int main()

{

    int L,N,W,H;

    cin>>L>>N;

    for(int i=1; i<=N; i++)

    {

        cin>>W>>H;

        if (W<L || H<L)

        {

            cout<<"UPLOAD ANOTHER \n";

        }

        else if (W==H)
 
       {

            cout<<"ACCEPTED \n";

        }

        else

        {

            cout<<"CROP IT \n";

        }


    }

    return 0;

}
