#include <iostream>
#include "Stack.h"
using namespace std;

void menu(){
	cout << "\nStack Linked-List"<< endl;
	cout << "1. Push\n2. Pop\n3. Display\n4. Quit";	
}

int main() {
	Stack s;
	char choice;
	menu();
	
	while(true){
    	do{					
	        cout<<"\n\nMasukkan salah satu pilihan di atas: ";
	        cin>>choice;
	        if(choice=='1'){	        	
				s.push();
				system("cls");
				menu();
			}else if(choice=='2'){				
				system("cls");
				menu();
				s.pop();				
			}else if(choice=='3'){
				system("cls");
				menu();				
				s.display();				
			}else if(choice=='4'){
				exit(0);
			}else{
				system("cls");
				menu();
				cout<<endl<<endl<<"Maaf, pilihan tidak tersedia!"<<endl<<endl;
			}
		}
		while(
				(choice!='1')&&(choice!='2')&&(choice!='3')&&(choice!='4')
		);    
	}			
	return 0;
}
