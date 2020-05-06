#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
//**************************
//  Function Declarations
//**************************
void addition();
void subtraction();
void multiplication();
void division();
void exit();
 //**************************
char choice;
float num;

/*  Main Function   */
int main(){
    do{
        system("clear");
        cout<<"#\tChoose An Option \t#"<<endl;
        cout<<" \t01. Addition "<<endl;
        cout<<" \t02. Subtraction "<<endl;
        cout<<" \t03. Multiplication "<<endl;
        cout<<" \t04. Division "<<endl;
        cin>> choice;
        system("clear");
        switch(choice){
            case '1':
                addition();
                break;
            case '2':
                subtraction();
                break;
            case '3':
                multiplication();
                break;
            case '4':
                division();
                break;
            default : cout<<"\a";

        }
        
    }while(choice != '4');
    return 0;
}
/******************************
         Functions 
*******************************/
void addition()
{
    cout<< "Please enter a number to add: "<<endl;
    float sum = 0;
    while(num >= 0) 
    {
        cin >> num;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<< "Your total was " << sum <<endl;
            exit();
        }
        else{
            sum += num;
            cout<<"Enter a number or type 'exit': "<<endl;
        }
        
    }   

}
    

void subtraction()
{
    cout<< "Please enter a number to subtract(smallest number first): "<<endl;
    cin >> num;
    //float num2;
    float answer;
    while(num >=0) 
    {
        answer=num;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<< "Your total was " << answer <<endl;
            exit();
        }
        else{
            cout<<"Enter a number or type 'exit': "<<endl;
            cin >> num;
            answer -=num;
            cout<< answer<<endl;
        }
        
    }   
}


void multiplication()
{
    cout<< "Please enter a number to multiply: "<<endl;
    cin>> num;
    vector<float> product;
    while(num >= 0){
        do{
        product.push_back(num);
        cout<<"Enter another number: " <<endl;
        cin>> num;

            if(cin.fail()){
                cin.clear();
                cin.ignore();
                for(std::vector<float>::iterator i = product.begin(); i != product.end(); ++i){
                    cout<< *i <<endl;
                    //need to figure out how to multiply each element in here
                }
                exit();
            }

            
        }while(!cin.fail());
    }
    
}


void division()
{
   cout<< "Please enter a number to multiply: "<<endl;

    float quotient = 0;
    while(num >= 0) 
    {
        cin >> num;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<< "Your total was " << quotient <<endl;
            exit();
        }
        else{
            quotient /= num;
            cout<<"Enter a number or type 'exit': "<<endl;
        }
        
    }   
}
void exit(){
char option;
cout<<"Press 'Y' to exit to main menu. ";
cin>> option;

    switch(option)
    {
        case 'Y':{
            main();
        }
        case 'y':{
            main();
        }
    }
}

//********************************
/*      END OF FUNCTIONS        */
//********************************
