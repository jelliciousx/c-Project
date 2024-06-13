#include <iostream>
#include <conio.h>
using namespace std;
string name [20],address[50],customer_id[20],customer_balance[50];
int value,total=0;
int a,b,d;
string c,e;
char morerecords;

void create();
void display();
void update();
void delete1();
int main()
{
	xy:
		cout<<"\n\n [ PRESENTED BY : SHAYAN - HASEEB- ALI - MOIZ - Mamoon ] \n\n\n"<<endl;
	cout<<"\n\n\t\t*********************************************************************************************\n";
	cout<<"\n\t\t\t\t\t\tCUSTOMER BILLING SYSTEM";
	cout<<"\n\n\t\t*********************************************************************************************";
	cout<<endl;
	cout<<endl;
	cout<<"\n\t\t\t\t\t--------------MAIN MENU--------------";
	cout << "\n\n\t\t\t\t\t\tPress 1 to Create Customer" << endl;
    cout << "\t\t\t\t\t\tPress 2 Display Customer" << endl;
    cout << "\t\t\t\t\t\tPress 3 to Update Customer" << endl;
    cout << "\t\t\t\t\t\tPress 4 to Delete Customers" << endl;
    cout << "\t\t\t\t\t\tPress 5 to Quit\n\n" << endl;
    cout<<" \t\t\t\t\t\tENTER HERE : ";
    cin>>value;
    

		cout<<endl;
		cout<<endl;
		
		
		
		system ("cls");
		
		
		do
		
		{
			
			switch (value)
			{
				case 1:
					    create();
					    goto xy;
			
		     	case 2:
					    display();
					    goto xy;
			
			    case 3:
					    update();
					    goto xy;
			
			    case 4:
					    delete1();
					    goto xy;
				case 5:
			            cout<<"\n\n \t\t\t\tThankyou for Checking !! <3\n\n";
			            exit(5);
			    			
					}
					if (value>5)
			    	{
			    			cout<<"\n\n \t\t\t\tINVALID INPUT PLEASE TRY AGAIN !! \n\nPress any key to contiue";
			    			getch ();
			    			system("cls");
			    			goto xy;
			    			
	}       
}

	while (value>5);
	
	

}

void create ()
{
	cout<<" \n\n\n\n\t\t\t\tPLEASE TELL US HOW MANY CUSTOMERS YOU WANT TO ADD ?\n\n\n";
	cout<<" \t\t\t\tENTER HERE :";
	cin>>total;
	
	system ("cls");
	
	if(total==0)
	{
		cout<<"\n\n\t\t\t\t NO DATA HERE!!\n";
	}
	else 
	{
		for(int i=0;i<total;i++)
		{
			cout<<" \n\n\t\t\t\tENTER NAME OF NO"<< i+1<<" CUSTOMER\n";
			cout<<"\t\t\t\t";
			cin>>name[i];
			cout<<" \n\n\t\t\t\tENTER ADDRESS OF NO"<< i+1<<" CUSTOMER\n";
			cout<<"\t\t\t\t";
			cin>>address[i];
			cout<<" \n\n\t\t\t\tENTER ID OF NO"<< i+1<<" CUSTOMER\n";
			cout<<"\t\t\t\t";
			cin>>customer_id[i];
			cout<<" \n\n\t\t\t\tENTER BALANCE OF NO"<< i+1<<" CUSTOMER\n";
			cout<<"\t\t\t\t";
			cin>>customer_balance[i];
			if (total>1)
			{
				cout<<"\n\t\t\t\tENTER DATA\n";
				
			}
			system ("cls");
					cout<<"\n\t\t\t\t\tDATA ENTERED SUCCESSFULLY\n";
					
					
		}
		
		
		
	}
	
}
	
	void display()
	{
		ab:
			cout << "\n\n\t\t\t\tENTER 1 TO DISPLAY ALL DATA" << endl;
	        cout << "\t\t\t\tENTER 2 TO DISPLAY SPECIFIC CUSTOMER DATA" << endl;
            cout << "\t\t\t\tENTER 3 TO GO BACK TO MAIN MENU " << endl;
            cout << "\n\t\t\t\tENTER YOUR CHOICE" << endl;
            cout <<"\t\t\t\t";
			cin>>a;
			system ("cls");
    
    if(a==1)
    {
    	for (int i=0;i<total;i++)
    	{
    		cout<<"\n\n\n\n\t\t\t\tDATA OF CUSTOMER\t"<< i+1<<endl;
    		cout<<endl;
    		cout<<"\t\t\t\tNAME\t\t"<<"\t"<<name[i]<<endl;
    		cout<<"\t\t\t\tID\t\t"<<"\t "<<customer_id[i]<<endl;
    		cout<<"\t\t\t\tBALANCE\t\t"<<"\t "<<customer_balance[i]<<" $ \n\n"<<endl;
    		cout<<"\n\n\t\t----------------------------------------------------------------------------------------------\n";
    		
		}
		goto ab;
	}

	if(a==2)
	{
		ac:
			cout<<"\n\n\n\t\t\t\t ENTER 1 TO CHECK WITH NAME :"<<endl;
			cout<<"\t\t\t\t ENTER 2 TO CHECK WITH CUSTOMER ID :"<<endl;
	        cout<<"\t\t\t\t ENTER 3 TO GO BACK : "<<endl;
	        cout<<"\t\t\t\t";
			cin>>b;
			system ("cls");
	        if(b==1)
	        {
	        	cout<<"\n\n\n\n\t\t\t\tENTER NAME OF CUSTOMER : " ;
	        	cin>>c;
	        	system ("cls");
	        	
	        	for(int i=0;i<total;i++)
	        	{
	        		if(c==name[i])
	        		{
	        			cout<<"\n\n\n\t\t\t\tDATA OF COSTUMER IS\n";
	        			cout<<"\n\n\t\t----------------------------------------------------------------------------------------------\n";
						cout<<"\t\t\t\tNAME    : "<<name[i]<<endl;
	        			cout<<"\t\t\t\tADDRESS : "<<address[i]<<endl;
	        			cout<<"\t\t\t\tID      : "<<customer_id[i]<<endl;
	        			cout<<"\t\t\t\tBALANCE : "<<customer_balance[i]<<" $"<<endl;
	        			cout<<endl;
	        			cout<<endl;
	        			
	        			goto ac;
					}
					else  
					{	cout<<"\n\n\t\t\t\t\tNO DATA FOUND....!"<<endl;
					
					}
				
					
					
				} 
			
			}
			if (b==2)
			{
				cout<<"\n\n\n\t\t\t\tENTER CUSTOMER ID : ";
				cin>>c;
				system ("cls");
				for(int i=0;i<total;i++)
				{
					if (c==customer_id[i])
					{
						cout<<"\n\n\n\t\t\t\tDATA OF COSTUMER IS\n ";
	        			cout<<"\n\t\t----------------------------------------------------------------------------------------------\n\n";
						cout<<"\t\t\t\tNAME    : "<<name[i]<<endl;
	        			cout<<"\t\t\t\tADDRESS : "<<address[i]<<endl;
	        			cout<<"\t\t\t\tID      : "<<customer_id[i]<<endl;
	        			cout<<"\t\t\t\tBALANCE : "<<customer_balance[i]<<" $"<<endl;
	        			cout<<endl;
	        			cout<<endl;
	        			
	        			goto ac;
					}
					else 	
					{	cout<<"\n\n\t\t\t\t\tNO DATA FOUND....!"<<endl;
					
					}
					
			
				}
			}
			if (b==3)
			{
				goto ab;
			}
			if (b>=4)
			{
				cout<<"\n\n\n\n\n\t\t\t\t*****INVALID INPUT !!!!***** \n";
				goto ab;
			}
			if (a==3)
			{
				cout<<endl;
			}
	}   }
	
	
	void update()
	{
		{
			ad:
			cout<<"\t\t\t\t ENTER 1 TO UPDATE SPECIFIC CUSTOMER DATA."<<endl;
			cout<<"\t\t\t\t ENTER 2 TO UPDATE ALL CUSTOMER DATA."<<endl;
	        cout<<"\t\t\t\t ENTER 3 TO GO BACK."<<endl;
	        cout<<endl;
	        cout<<"\t\t\t\t ENTER YOUR CHOICE : "<<endl;
	        cout<<"\t\t\t\t";
			cin>>d;
			system ("cls");
		
	        
	        if (d==1)
	        {
	        	cout<<"\t\t\t\tENTER NAME : \t";
				cin>>e;
				system ("cls");
	        	for (int i=0;i<total;i++)
	        	if(e==name[i])
	        	{
	        		cout<<"\n\n\n\n\t\t\t\tENTER PREVIOUS DATA. \t\n\n ";
	        		cout<<"\t\t\t\tNAME    : "<<name[i]<<endl;
	        		cout<<"\t\t\t\tADDRESS : "<<address[i]<<endl;
	        		cout<<"\t\t\t\tID      : "<<customer_id[i]<<endl;
	        		cout<<"\t\t\t\tBALANCE : "<<customer_balance[i]<<" $"<<endl;
	        		cout<<endl;
	        		cout<<"\t\t\t\tENTER NEW DATA.\n";
	        		
	        		cout<<" \n\n\n\t\t\t\tENTER NEW NAME : ";
					cin>>name[i];
			        cout<<" \n\n\t\t\t\tENTER NEW ADDRESS : ";
					cin>>address[i];
			        cout<<" \n\n\t\t\t\tENTER NEW ID : ";
					cin>>customer_id[i];
			        cout<<" \n\n\t\t\t\tENTER NEW BALANCE : ";
					cin>>customer_balance[i];
			        cout<<endl;
			        cout<<"\n\n\t\t\t\tYOUR SELECTED DATA HAS BEEN UPDATED....!"<<endl;
			        
			       			        
				}
			}
			if (d==2)
			{
				for (int i=0;i<total;i++)
				{
					cout<<"\n\n\n\n\t\t\t\tENTER PREVIOUS DATA. \t\n\n ";
	        		cout<<"\t\t\t\tNAME    : "<<name[i];
	        		cout<<"\t\t\t\tADDRESS : "<<address[i];
	        		cout<<"\t\t\t\tID      : "<<customer_id[i];
	        		cout<<"\t\t\t\tBALANCE : "<<customer_balance[i]<<" $";
	        		cout<<endl;
				}
				cout<<"\t\t\t\tENTER NEW DATA.\n";
				for (int i=0;i<total;i++)
				{
					cout<<" \n\n\t\t\t\tENTER NAME OF NO."<<i+1<<" CUSTOMER : ";
					cin>>name[i];
			        cout<<" \n\n\t\t\t\tENTER ADDRESS OF NO."<<i+1<<" CUSTOMER : ";
					cin>>address[i];
			        cout<<" \n\n\t\t\t\tENTER ID OF N0."<<i+1<<" CUSTOMER : ";
					cin>>customer_id[i];
			        cout<<" \n\n\t\t\t\tENTER BALANCE OF NO."<<i+1<<" CUSTOMER : ";
					cin>>customer_balance[i];
					cout<<"\n\n\t\t\t\tYOUR ALL DATA HAS BEEN UPDATED....!"<<endl;
					
				}
			}
				
		}
		
		if (d==3)
		goto ad;
		{
			cout<<endl;
		}
	}
	
	void delete1()
	{
		    cout<<"\n\n\n\n\t\t\t\t ENTER 1 TO DELETE ALL DATA."<<endl;
			cout<<"\t\t\t\t ENTER 2 TO DELETE SPECIFIC DATA."<<endl;
	        cout<<"\t\t\t\t ENTER 3 TO GO BACK."<<endl;
	        cout<<"\n\n\t\t\t\tENTER HERE : ";
			cin>>d;
			system ("cls");
	        if (d==1)
	        {
			
	        			
						total=0;
						
							{
				cout<<"\n\n\t\t\t\t ******ALL RECORD IS DELETED...!!!******"<<endl;}
			}
					
			
				
			
	        		 
	        
	        	if (d==2)
	        	{
	        		{
	        			string x;
	        			cout<<"\n\n\n\n\t\t\t\tENTER THE CUSTOMER ID YOU WANT TO DELETE."<<endl;
	        			cout<<"\n\n\t\t\t\tENTER HERE : ";
						cin>>x;
						system ("cls");
	        			for (int i=0;i<total;i++)
	        			{
	        				
	        				if(x==customer_id[i])
	        				{
	        					for(int j=i;j<total;j++)
								{
									name[j]=name[j+i];
									address[j]=address[j+i];
									customer_id[j]=customer_id[j+i];
									customer_balance[j]=customer_balance[j+i];
								}
								total--;
								{
								
								cout<<"\n\n\n\n\t\t\t\tYOUR SELECTED DATA IS DELETED.....!!!!! "<<endl;
							}
								
								
							}
						}
						
					}
				}
    }   
