#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
    student(string name,int roll,int marks)
    {
        this->name=name;
     this->marks=marks;
     this->roll=roll;
    }
};
class cmp {
public:
    bool operator()(student a, student b) {
       if (a.marks == b.marks) {
           return a.roll > b.roll;
       } else { 
           return a.marks < b.marks;
       }
    }
};


int main()
{  
    int a;
    cin>>a;
    priority_queue<student,vector<student>,cmp>pq;
    
 for (int i = 0; i < a; i++) {
    string s;
    int r, m;
    cin >> s >> r >> m;
    pq.push({s, r, m});
}

    int t;
    cin>>t;
    while(t--)
    {
        int v;
        cin>>v;
        if(v==0)
        {
            string ss;
            int rr,mm;
            cin>>ss>>rr>>mm;
            student obj(ss,rr,mm);
            pq.push(obj);
             cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;

        }
        else if(v==1)
        {
        if(!pq.empty())
        {
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else{
            cout<<"Empty"<<endl;
        }
        }    
        else if(v==2)
        {
            if(!pq.empty())
            {
                pq.pop();
                if(!pq.empty())
                {
                  cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;   
                }
                else{
                     cout<<"Empty"<<endl;
                }
            }
            else{
                 cout<<"Empty"<<endl;
            }
        }
    }
    
    return 0;
}