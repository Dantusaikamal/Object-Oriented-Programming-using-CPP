#include <iostream>

using namespace std;

struct college_info{
    char college_name[15];
    char college_code[2];
    char dept[50];
    int intake;
};

int main()
{
    struct college_info college;
    
    cout<<"\n+++++ Enter the College Information +++++\n\n";
    cout<<"Name of the college: ";
    cin>>college.college_name;
    cout<<"College Code: ";
    cin>>college.college_code;
    cout<<"Department: ";
    cin>>college.dept;
    cout<<"Department In-take: ";
    cin>>college.intake;

    cout<<"\n\n********* College Information *********\n\n";
    cout<<"Name of the college : "<<college.college_name;
    cout<<"\nCollege University Code: "<<college.college_code;
    cout<<"\nName of the Department: "<<college.dept;
    cout<<"\nThe department of "<<college.dept<<" has in-take : "<<college.intake;
    cout<<"\n\n-----------------------------------------\n\n";
    
    return 0;
}
