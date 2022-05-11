 #include <bits/stdc++.h>
    using namespace std;

    int prio_queue[1000005];int ind=-1;
    void percolateup(int pos)
    {
    if(pos<1)
    return ;
    int par=(pos-1)/2;
    if(prio_queue[par]>prio_queue[pos])
    {
        int temp=prio_queue[par];
        prio_queue[par]=prio_queue[pos];
        prio_queue[pos]=temp;
        percolateup(par);
    }
    }
     void percolatedown(int pos)
    {
    int left=2*pos+1,right=2*pos+2,min=pos;
    if(left<=ind)
    {
        if(prio_queue[pos]>prio_queue[left])
        min=left;
    }
    if(right<=ind)
    {
        if(prio_queue[min]>prio_queue[right])
        min=right;
    }
    if(pos!=min)
    {
        int temp=prio_queue[min];
        prio_queue[min]=prio_queue[pos];
        prio_queue[pos]=temp;
        percolatedown(min);
    }
    }
    void insert(int x)
     {
    prio_queue[++ind]=x;
    percolateup(ind);
    }
    void del()
    {
      prio_queue[0]=prio_queue[ind];
      ind--;
      percolatedown(0);
    }
    int main()
    {
    int t;cin>>t;
    while(t--)
    {
        ind=-1;
        int n;cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            insert(x);
        }
        cout<<prio_queue[0]<<" ";
        del();
        for(int i=0;i<n-1;i++)
        cout<<prio_queue[i]<<" ";
        cout<<"\n";
    }
    return 0;
    }