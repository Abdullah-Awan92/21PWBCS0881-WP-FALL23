
#include<iostream>
using namespace std;
int main()
{
    int i, mark[5];
    float sum=0, avg, perc;
    cout<<"Enter Marks obtained in 5 Subjects: ";
    for(i=0; i<3; i++)
    {
        cin>>mark[i];
        sum = sum+mark[i];
    }
    avg = sum/3;
    perc = (sum/300)*100;
    cout<<"\nAverage Marks = "<<avg;
    cout<<"\nPercentage Marks = "<<perc<<"%";
    cout<<endl;
    return 0;
}
