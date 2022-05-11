
#include<bits/stdc++.h>
using namespace std;



int countMinReversals(string expr)
{
	int len = expr.length();

	
	if (len%2)
	return -1;

	
	stack<char> s;
	for (int i=0; i<len; i++)
	{
		if (expr[i]=='}' && !s.empty())
		{
			if (s.top()=='{')
				s.pop();
			else
				s.push(expr[i]);
		}
		else
			s.push(expr[i]);
	}


	int red_len = s.size();


	int n = 0;
	while (!s.empty() && s.top() == '{')
	{
		s.pop();
		n++;
	}

	return (red_len/2 + n%2);
}


int main()
{
    int count=0;
    int k=1;
while (count<1)
{   string expr;
cin>>expr;

for(int i=0;i<expr.size();i++){
    if(expr[i]=='-'){
        count++;
    }
}
   if(count>=1){
     continue;
   }else{
      cout <<k<<". "<<countMinReversals(expr)<<endl;
      k++;
   }
}

return 0;
}
