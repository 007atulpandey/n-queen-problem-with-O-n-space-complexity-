#include<bits/stdc++.h>
using namespace std;
#define atul0826 ios_base::sync_with_stdio(0);

int flag;
int check(int board[],int row,int c)
{
    for(int i=1;i<row;i++)
    {
          // checking for same row and column 
        if(board[i]==c)
        return 0;
        // checking for diagonal 
        if(abs(board[i]-c) == abs(i-row))
        return 0;
    }
    return 1;
}
void func(int board[],int row,int n)
{
    int c;
    for(c=1;c<=n;c++)
    {
        if(check(board,row,c))
        {
            board[row] = c;
        
            if(row==n)
            {
                flag=1;
                cout<<"[";
                for(int i=1;i<=n;i++)
                {
                    cout<<board[i]<<" ";
                }
                cout<<"] ";
            
            }
            else
            func(board,row+1,n);
        }
    }
}
int main()
 {
     atul0826;
	int t;
	cin>>t;
	int board[12];
	while(t--)
	{
	    
	    int n;
	    cin>>n;
	    flag=0;
	    for(int i=1;i<=n;i++)
	    board[i]=0;
	    func(board,1,n);
	    if(flag==0)
	    cout<<-1;
	    
	    cout<<endl;
	}
}
