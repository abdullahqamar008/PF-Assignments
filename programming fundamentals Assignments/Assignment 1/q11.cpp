/*Name:Abdullah Qamar
 BS(SE) 1A
Programming Fundamentals  Assignment #2
Question #10*/

#include <iostream>
using namespace std;
int main() 
{
    char response;
    cout<<"Starting General Diagnosis Program"<<endl;
    cout<<"Recording symptoms information DONE"<<endl;
    cout<<"Rebooting server to see if condition still exists DONE"<<endl;
    
    cout<<"Is this a newly installed server? (y/n)";
    cin>>response;
    
    if (response=='y'||response=='Y') 
	{
        cout<<"Please reseat any components that may have come loose during shipping DONE"<<endl;
        cout<<"Rebooting the server DONE"<<endl;
        cout<<"Does condition still exist? (y/n)";
        cin>>response;
        
        if (response=='n'||response=='N') 
            cout<<"Recording all actions taken for future DONE"<<endl;
            cout<<"Congratulations your server problems are solved"<<endl;
        
    }
    
    cout<<"Checking for Service Notifications DONE"<<endl;
    cout<<"Downloading the latest software from HP website DONE"<<endl;
    cout<<"Does the condition still exist? (y/n)";
    cin>>response;
    
    if (response=='n'||response=='N') 
        cout<<"Recording all actions taken for future DONE"<<endl;
        cout<<"Congratulations your server problems are solved"<<endl;
    
    cout<<"Isolating and minimizing memory configuration DONE"<<endl;
    cout<<"Does the condition still exist? (y/n)";
    cin>>response;
    
    if (response=='n'||response=='N') 
        cout<<"Recording all actions taken for future DONE"<<endl;
        cout<<"Congratulations your server problems are solved"<<endl;
    
    cout<<"Adding one part at a time back to configuration to isolate faulty component DONE"<<endl;
    cout<<"Breaking server down to minimal configuration DONE"<<endl;
    cout<<"Does the condition still exist? (y/n)";
    cin>>response;
    
    if (response=='n'||response=='N') 
        cout<<"Recording all actions taken for future DONE"<<endl;
        cout<<"Congratulations your server problems are solved"<<endl;
    
    cout<<"Troubleshooting or replacing basic server spare parts DONE"<<endl;
    cout<<"Does the condition still exist?(y/n)";
    cin>>response;
    
    if (response=='n'||response=='N') 
        cout<<"Recording all actions taken for future DONE"<<endl;
        cout<<"Congratulations your server problems are solved"<<endl;
    
    cout<<"Ensuring the following information is available"<<endl;
    cout<<"Survey configuration snapshots"<<endl;
    cout<<"OS event log file"<<endl;
    cout<<"Full crash dump"<<endl;
    cout<<"DONE"<<endl;
    cout<<"Does the condition still exist? (y/n)";
    cin>>response;
    
    if (response=='n'||response=='N') 
        cout<<"Recording all actions taken for future DONE"<<endl;
        cout<<"Congratulations your server problems are solved"<<endl;
    
    cout<<"Calling HP Service Provider DONE"<<endl;
    cout<<"Does the condition still exist? (y/n)";
    cin>>response;
    
    if (response=='n'||response=='N')
        cout<<"Recording all actions taken for future DONE"<<endl;
        cout<<"Congratulations your server problems are solved"<<endl;
    
    cout<<"Recording all actions taken for future DONE"<<endl;
    cout<<"End of diagnosis procedure"<<endl;
    system("pause");
    return 0;
}
