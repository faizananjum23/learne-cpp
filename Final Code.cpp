#include <iostream>

using namespace std;

int main() 
{
    cout<<"Welcome! \nTo Learn C++";
    
int a,b;
char c,d;

cout << "Which Statement You Want To Learn\n (1)If-Statements\n (2)Switch Statements\n (3)Loop Statements\n (4)Functions\n (5)Arrays"<<endl;
cin >> a;
switch(a){
    case 1:
    cout<<"Now We Are Going Learning If-Statements"<<endl;
    cout<<"Where You Wanna Start?"<<endl<<" (1)Definaton\n (2)Syntax\n (3)Demo Program "<<endl;
    cin>>b;
    switch (b){
    case 1:
    cout<<"Definaton:"<<endl;
        cout<<"The if statement evaluates the test expression inside parenthesis."<<
"If test expression is evaluated to true, statements inside the body of if is executed."<<
"If test expression is evaluated to false, statements inside the body of if is skipped."<<endl;
        
cout<<"Learn The Definaton? (Y/N)"<<endl;
cin>>c;

if(c=='y'&&'Y'){
    cout<<"Now We are Going to look at Syntax"<<endl;
    cout<<" if (testExpression)\n { \n statements \n }"<<endl;
    cout<<"Learn The Syntax? (Y/N)"<<endl;
    cin>>d;
    
    if(d=='y'&&'Y')
    {
    cout<<"Now We are Going to look at Demo Program\n(Checking ODD Or Even Number)"<<endl;
    int n;
    cout << "Enter an integer:"<<endl;
    cin >> n;
    if ( n % 2 == 0){
        cout << n << " is even Number";}
    else{
        cout << n << " is odd Number";
}return 0;

}
else{
     cout<<"Please Restart The Program!"<<endl;
}
}
else{
     cout<<"Please Restart The Program!"<<endl;
}

break;
    case 2:
         cout<<"Now We are Going to look at Syntax"<<endl;
    cout<<" if (testExpression)\n { \n statements \n }"<<endl;
    cout<<"Learn The Syntax? (Y/N)"<<endl;
    char a1;
    cin>>a1;
     if(a1=='y'&&'Y')
    {
    cout<<"Now We are Going to look at Demo Program\n(Checking ODD Or Even Number)"<<endl;
    int n;
        cout << "Enter an integer:"<<endl;
    cin >> n;
    if ( n % 2 == 0){
        cout << n << " is even Number";}
    else{
        cout << n << " is odd Number";
}return 0;
    }
    else{
            cout<<"Please Restart The Program!"<<endl;
    }
    
        break;
          
          case 3:
          cout<<"Now We are Going to look at Demo Program\n(Checking ODD Or Even Number)"<<endl;
    int n;
        cout << "Enter an integer:"<<endl;
    cin >> n;
    if ( n % 2 == 0){
        cout << n << " is even Number";}
    else{
        cout << n << " is odd Number";
}return 0;
          
        break;
       
    default:
    
       break;
}
    
    
    
    break;
    case 2:
    cout<<"Now We Are Going Learning Switch Statements";
    cout<<"Where You Wanna Start?"<<endl<<" (1)Definaton\n (2)Syntax\n (3)Demo Program "<<endl;
    int b1;
    cin>>b1;
    switch(b1){
        case 1:
        cout<<"Definaton:"<<endl;
        cout<<"Switch case statement is used when we have multiple conditions and we need to perform different action based on the condition."
        <<"When we have multiple conditions and we need to execute a block of statements when a particular condition is satisfied."<<endl;
        
        cout<<"Learn The Definaton? (Y/N)"<<endl;
        char c1;
        cin>>c1;
        if(c1=='y'&&'Y'){
    cout<<"Now We are Going to look at Syntax"<<endl;
    cout<<"switch (variable or an integer expression)\n{\ncase constant:\n C++ Statement ;\n break;\n case constant:\n C++ Statement;\ndefault:\nbreak;\n}"<<endl;
    cout<<"Learn The Syntax? (Y/N)"<<endl;
            char d1;
            cin >> d1;
            
            
            if(d1=='y'&&'Y'){
    cout<<"Now We are Going to look at Demo Program\n(Calculater)"<<endl;
    int a,b,c;
    char ope;
    cout<<"enter a value" << endl;
    cin >> a;
    cout<<"enter b value" <<endl;
    cin >> b;
    cout<<"enter operation (+ - * / and % )" <<endl;
    cin>> ope;
    if (ope == '+')
    {
        c=a+b;    
        cout<<"Your Answer  =   ";
        cout<< c;         
    }
    else if (ope == '-')
     {
        c=a-b;
        cout<<"Your Answer  =   ";
        cout<< c;
        
     }
      else if (ope == '*')
      {
          c=a*b;
          
          cout<<"Your Answer  =   ";
      cout<< c;
        
      }
      else if (ope == '/')
      {
       c= a/b;cout<<"Your Answer  =   ";
       cout<< c;
       
      }
      else if (ope == '%')				
      {
        c=a%b;
        cout<<"Your Answer  =   ";
        cout<< c;
      }
    else cout<<"entered wrong input";
    return 0;

}

else{
    cout<<"Please Restart The Program!"<<endl;
}
        }
        
    else{
        cout<<"Please Restart The Program!"<<endl;
    }
        
        break;
        
        case 2:
         cout<<"Now We are Going to look at Syntax"<<endl;
    cout<<"switch (variable or an integer expression)\n{\ncase constant:\n C++ Statement ;\n break;\n case constant:\n C++ Statement;\ndefault:\nbreak;\n}"<<endl;
    cout<<"Learn The Syntax? (Y/N)"<<endl;
                char e1;
            cin >> e1;
            
            
            if(e1=='y'&&'Y'){
    cout<<"Now We are Going to look at Demo Program\n(Calculater)"<<endl;
    int a,b,c;
    char ope;
    cout<<"enter a value" << endl;
    cin >> a;
    cout<<"enter b value" <<endl;
    cin >> b;
    cout<<"enter operation (+ - * / and % )" <<endl;
    cin>> ope;
    if (ope == '+')
    {
        c=a+b;    
        cout<<"Your Answer  =   ";
        cout<< c;         
    }
    else if (ope == '-')
     {
        c=a-b;
        cout<<"Your Answer  =   ";
        cout<< c;
        
     }
      else if (ope == '*')
      {
          c=a*b;
          
          cout<<"Your Answer  =   ";
      cout<< c;
        
      }
      else if (ope == '/')
      {
       c= a/b;cout<<"Your Answer  =   ";
       cout<< c;
       
      }
      else if (ope == '%')				
      {
        c=a%b;
        cout<<"Your Answer  =   ";
        cout<< c;
      }
    else cout<<"entered wrong input";
    return 0;

}

else{
    cout<<"Please Restart The Program!"<<endl;
}
    
    
        break;
        
        // code done by faizan github @faizananjum23
        case 3:
        
        cout<<"Now We are Going to look at Demo Program\n(Calculater)"<<endl;
    int a,b,c;
    char ope;
    cout<<"enter a value" << endl;
    cin >> a;
    cout<<"enter b value" <<endl;
    cin >> b;
    cout<<"enter operation (+ - * / and % )" <<endl;
    cin>> ope;
    if (ope == '+')
    {
        c=a+b;    
        cout<<"Your Answer  =   ";
        cout<< c;         
    }
    else if (ope == '-')
     {
        c=a-b;
        cout<<"Your Answer  =   ";
        cout<< c;
        
     }
      else if (ope == '*')
      {
          c=a*b;
          
          cout<<"Your Answer  =   ";
      cout<< c;
        
      }
      else if (ope == '/')
      {
       c= a/b;cout<<"Your Answer  =   ";
       cout<< c;
       
      }
      else if (ope == '%')				
      {
        c=a%b;
        cout<<"Your Answer  =   ";
        cout<< c;
      }
    else cout<<"entered wrong input";
    return 0;
        
        break;
        
        default:
        cout<<"Please Restart The Program!"<<endl;
        break;
    }
    
    break;
    case 3:
    cout<<"Now We Are Going Learning Loop Statements"<<endl;
    cout<<"Where You Wanna Start?"<<endl<<" (1)Definaton\n (2)Syntax\n (3)Demo Program"<<endl;
int a2;
cin >> a2;
switch(a2){
    case 1:
    
    cout<<"Definaton:"<<endl;
        cout<<"A loop statement allows us to execute a statement or group of statements multiple times and following is the general from of a loop statement in most of the programming languages"
        <<"C++ programming language provides the following type of loops to handle looping requirements."<<endl;
        
        cout<<"Learn The Definaton? (Y/N)"<<endl;
        char c2;
        cin>>c2;
if (c2=='y'||'Y'){
    cout<<"Now We are Going to look at Syntax"<<endl;
    cout<<"While (condition){\nstatement(s);\nIncrementation;\n}"<<endl;
    cout<<"Learn The Syntax? (Y/N)"<<endl;
    
    char d2;
    cin >> d2;
    
    if(d2=='y'&&'Y'){
         cout<<"Now We are Going to look at Demo Program\n(Print From 1 Until You Want)"<<endl;
         
    
    int n = 1,b;
    cout<<"How Many Time You Want to Print From Starting From 1"<<endl;
    cin >> b;
    while( n <= b){
        cout << n << endl;
        n++;
    }
         
    }
    else{
        cout<<"Please! Restart The Program.";
    }

}
else{
    cout<<"Please Restart The Program.";
}
    
    break;
    
    
    case 2:
    
    cout<<"Now We are Going to look at Syntax"<<endl;
    cout<<"While (condition){\nstatement(s);\nIncrementation;\n}"<<endl;
    cout<<"Learn The Syntax? (Y/N)"<<endl;
    
    char d3;
    cin >> d3;
    
    if(d3=='y'&&'Y'){
         cout<<"Now We are Going to look at Demo Program\n(Print From 1 Until You Want)"<<endl;
         
    
    int n = 1,b;
    cout<<"How Many Time You Want to Print From Starting From 1"<<endl;
    cin >> b;
    while( n <= b){
        cout << n << endl;
        n++;
    }
         
    }
    else{
        cout<<"Please Restart The Program!";
    }

    
    break;
    
    
    case 3:
    
    cout<<"Now We are Going to look at Demo Program\n(Print From 1 Until You Want)"<<endl;

int n1,b;
n1=1;
    cout<<"How Many Time You Want to Print From Starting From 1"<<endl;
    cin >> b;
    while( n1 <= b){
        cout << n1 << endl;
        n1++;
    }
    
    break;
    
    default:
    cout<<"Please Check Your input!";
    break;
}

    
    break;
    
case 4:
cout<<"This Is Function";
break;
case 5:
cout<<"This is array";
break;
    
    default:
    cout<<"We Are Working On More Statements";
    break;
}




    return 0;
}

