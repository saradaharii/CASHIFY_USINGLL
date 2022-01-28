#include<stdio.h>
#include<stdlib.h>
int apple();
int samsung();
int oneplus();
int xiaomi();
int realme();
int estimation();
int linked_list();
int create();
int display();
int insert_end();
int delete_specific();
int search(int value);
int menu();
int total();
int price;
struct node
{
	int data;//data part of the node
	struct node *next;//address of the next node
}*start=NULL;
int main()
{
	int brand;
	printf("\n**************************************************************************\n");
	printf("\n                                  WELCOME                                 \n");
	printf("\n**************************************************************************\n");
	printf("\n\nPlease select your brand:");
	printf("\n1. APPLE \t\t\t2. SAMSUNG \t\t\t3. ONEPLUS \t\t\t4. XIAOMI \t\t\t5. REALME");
	printf("\nEnter your choice:\t\t");
	scanf("%d",&brand);
	switch(brand)
	{
		case 1:apple();
		break;
		case 2:samsung();
		break;
		case 3:oneplus();
		break;
		case 4:xiaomi();
		break;
		case 5:realme();
		break;
		default:printf("\n\nWRONG CHOICE!!\n");
		break;
	}
	
}
int apple()
	{
		int model,variant;
		printf("\n\nPlease select your model:");
		printf("\n1.APPLE 11 pro max\n2.apple 11 pro\n3.apple 11\n4.apple xr\n5.apple xs max");
		printf("Enter your choice:\t\t");
		scanf("%d",&model);
		if(model==1)
		{
			printf("\nSelect your variant:");
			printf("\n1.512gb\t\t2.256gb");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=120000;
			}
			else if(variant==2)
			{
				price==105000;
			}
			else
			{
				printf("\nENTER A VALID OPTION");
			}
			
		}
		else if(model==2)
		{
			printf("\nSelect your variant");
			printf("\n1.256\n2.128");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=100000;
			}
			else if(variant==2)
			{
				price=95000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==3)
		{
		printf("\nSelect your variant");
			printf("\n1.128\n2.256");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=90000;
			}
			else if(variant==2)
			{
				price==75000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==4)
		{
		printf("\nSelect your variant");
			printf("\n1.64\n2.128");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=70000;
			}
			else if(variant==2)
			{
				price=65000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==5)
		{
			printf("\nSelect your variant");
			printf("\n1.64gb\n2.128gb");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=50000;
			}
			else if(variant==2)
			{
				price=450000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else
		{
			printf("\nwrong choice");
		}
		estimation();
	}
int samsung()
	{
		int model,variant;
		printf("\nplease select yoyr model");
		printf("\n1.samsung galaxy s21 ultra\n2.samsung galaxy s21\n3.samsung galaxy fold 2\n4.samsung gaaxy note 20\n5.samsung galaxy s20 fe");
		printf("\nEnter your choice:\t\t");
		scanf("%d",&model);
		if(model==1)
		{
				printf("\nSelect your variant");
			printf("\n1.256gb\n2.512gb");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=120000;
			}
			else if(variant==2)
			{
				price=105000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==2)
		{
				printf("\nSelect your variant");
			printf("\n1.128gb\n2.256gb");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=110000;
			}
			else if(variant==2)
			{
				price=98000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==3)
		{
			printf("\nSelect your variant");
			printf("\n1.128gb\n2.256gb");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=90000;
			}
			else if(variant==2)
			{
				price=82000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==4)
		{
			printf("\nSelect your variant");
			printf("\n1.256gb\n2.128gb");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=78000;
			}
			else if(variant==2)
			{
				price=73000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==5)
		{
			printf("\nSelect your variant");
			printf("\n1.256gb\n2.128gb");
			printf("\nEnter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=70000;
			}
			else if(variant==2)
			{
				price=65000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else
		{
			printf("\nWrong choice");
		}
		estimation();
	}
int oneplus()
	{
		int model,variant;
		printf("\nplease select yoyr model");
		printf("\n1.oneplus 9 pro\n2.oneplus 9\n3.oneplus 8t pro\n4.oneplus 8t\n5.oneplus 9r");
		printf("Enter your choice:\t\t");
		scanf("%d",&model);
		if(model==1)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			printf("Enter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=70000;
			}
			else if(variant==2)
			{
				price=65000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==2)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			printf("Enter your choice:\t\t");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=80000;
			}
			else if(variant==2)
			{
				price=72000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==3)
		{
			printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=60000;
			}
			else if(variant==2)
			{
				price=50000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==4)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=45000;
			}
			else if(variant==2)
			{
				price=40000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==5)
		{
				printf("\nselect your variant");
			printf("\n1.64gb\n2.128gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=50000;
			}
			else if(variant==2)
			{
				price=45000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else
		{
			printf("\nwrong choice");
		}
		estimation();
	}
int xiaomi()
	{
		int model,variant;
		printf("\nplease select yoyr model");
		printf("\n1.xiaomi mi 10\n2.xiaomi mi 11x\n3.xiaomi redmi note 10 pro\n4.xiaomi mi 10t\n5.xiaomi redmi k20 pro");
		printf("Enter your choice:\t\t");
		scanf("%d",&model);
		if(model==1)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=45000;
			}
			else if(variant==2)
			{
				price=42000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==2)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=40000;
			}
			else if(variant==2)
			{
				price=38000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==3)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=35000;
			}
			else if(variant==2)
			{
				price=32000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==4)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=30000;
			}
			else if(variant==2)
			{
				price=28000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==5)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=25000;
			}
			else if(variant==2)
			{
				price=22000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else
		{
			printf("\nwrong choice");
		}
		estimation();
	}
int realme()
	{
		int model,variant;
		printf("\nplease select yoyr model");
		printf("\n1.realme x50 pro\n2.realme x2 pro\n3.realme x3\n4.reakme x7 pro\n5.reakme x");
		printf("Enter your choice:\t\t");
		scanf("%d",&model);
		if(model==1)
		{
			printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=50000;
			}
			else if(variant==2)
			{
				price=47000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==2)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=42000;
			}
			else if(variant==2)
			{
				price=38000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==3)
		{
				printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=35000;
			}
			else if(variant==2)
			{
				price=32000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==4)
		{
			printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=32000;
			}
			else if(variant==2)
			{
				price=28000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else if(model==5)
		{
			printf("\nselect your variant");
			printf("\n1.128gb\n2.64gb");
			scanf("%d",&variant);
			if(variant==1)
			{
				price=30000;
			}
			else if(variant==2)
			{
				price=27000;
			}
			else
			{
				printf("\nwrong choice");
			}
		}
		else
		{
			printf("\nwrong choice");
		}
		estimation();
	}
int estimation()
	{
		int a,b,c,d,e;
		printf("\n\nAre you able to make and recieve calls?");
		printf("\n1.yes\n2.no");
		printf("Enter your choice:\t\t");
		scanf("%d",&a);
		if(a==2)
			price=price-(0.02*price);
		printf("\nis mobile under warenty?");
		printf("\n1.yes\n2.no");
		printf("Enter your choice:\t\t");
		scanf("%d",&b);
		if(b==2)
		    price=price-(0.02*price);
		printf("\nIs original charger of mobile available");
		printf("\n1.yes\n2.no");
		printf("Enter your choice:\t\t");
		scanf("%d",&c);  
		if(c==2)
		    price=price-(0.03*price);
		printf("\nis box with bill available?");
		printf("\n1.yes\n2.no");
		printf("Enter your choice:\t\t");
		scanf("%d",&d);
		if(d==2)
		    price=price-(0.03*price);
		printf("\nhow long it has been you purchased the phone?");
		printf("\n1.<=1 year\n2.2 years\n3.3 years");
		printf("Enter your choice:\t\t");
		scanf("%d",&e);
		if(e==1)
		    price=price-(0.03*price);
		else if(e==2)
			price=price-(0.6*price);
		else if(e==3)
			price=price-(0.1*price);
		else
			printf("\nWrong choice");	
			linked_list();
					}
int linked_list()
{ 
    int issue;
	do
	{
		printf("\n\n\n");
	    printf("Choose 1 to select issues.                   Choose 2 to display selected issues.");
		printf("\nChoose 3 to add new issues.                Choose 4 to deselected selected issues.");
		printf("\nChoose 5 to exit.");
		printf("\nEnter your choice:\t");
		scanf("%d",&issue);
		switch(issue)
		{
			case 1:create();
			       break;
			case 2:{
			display();
			total();
		}
			       break;
			case 3:insert_end();
			       break;
			case 4:delete_specific();
			       break;
			case 5:exit(0);
			       break;
			default:printf("\n\nPlease refer the table above and enter a correct option.");
			       break;
		}
	}while(1);
}
int create()
{ 
    struct node *new;
    int value;
	menu();
	new =(struct node*)malloc(sizeof(struct node));
	printf("Enter your issue:\t");
	scanf("%d",&value);
	new->data=value;
	new->next=NULL;
	if(start->next==NULL)
	start=new;
	else
	start->next=new;
    switch(value)
	{
    	case 1: price=price-(0.03*price);
		break;
		case 2: price=price-(0.15*price); ///review
		break;
		case 3: price=price-(0.03*price);
		break;
		case 4: price=price-(0.07*price);
		break;
		case 5: price=price-(0.025*price);
		break;
		case 6: price=price-(0.1*price);
		break;
		case 7: price=price-(0.05*price);
		break;
		case 8: price=price-(0.02*price);
		break;
		case 9: price=price-(0.05*price);
		break;
		case 10: price=price-(0.08*price);
		break;
		case 11: price=price-(0.015*price);
		break;
		case 12: price=price-(0.1*price);
		break;
		case 13: price=price-(0.07*price);
		break;
		case 14: price=price-(0.05*price);
		break;
		case 15: price=price-(0.04*price);
		break;
		case 16: price=price-(0.2*price);
		break;
		default: printf("\nENTER A CORRECT OPTION!!\n");
	}
    printf("\n\nISSUE SELECTED.");
}
int display()
{
	struct node *current;
	current=start;
	printf("\n\n");
	while(current!=NULL)
	{
		switch(current->data)
		{
	case 1: printf("\n>>>>>Front Camera not working"); break;
	case 2: printf("\n>>>>>Back Camera not working");break;
	case 3: printf("\n>>>>>Volume Button not working");break;
	case 4: printf("\n>>>>>Finger Touch not working"); break;
	case 5: printf("\n>>>>>WiFi not working");break;
	case 6: printf("\n>>>>>Battery Faulty");break;
	case 7: printf("\n>>>>>Speaker Faulty");break;
	case 8: printf("\n>>>>>Power Button not working");break;
	case 9: printf("\n>>>>>Charging Port not working");break;
	case 10: printf("\n>>>>>Face Sensor not working");break;
	case 11: printf("\n>>>>>Silent Button not working");break;
	case 12: printf("\n>>>>>Audio Receiver not working");break;
	case 13: printf("\n>>>>>Camera Glass Broken");break;
	case 14: printf("\n>>>>>Bluetooth not working");break;
	case 15: printf("\n>>>>>Vibrator is not working");break;
	case 16: printf("\n>>>>>Screen Damage or Touch screen is not working");break;
		}
		current=current->next;
	}
}
int insert_end()
{
	struct node *new;
	struct node *current;
	menu();
    int value,a;
	new=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter your issue:\t");
	scanf("%d",&value);
	a=search(value);
	if(a==1){
	current=start;
	while(current->next!=NULL)
	{
		if(current->data!=value)
		current=current->next;
		switch(value)
	{
    	case 1: price=price-(0.03*price);
		break;
		case 2: price=price-(0.15*price); ///review
		break;
		case 3: price=price-(0.03*price);
		break;
		case 4: price=price-(0.07*price);
		break;
		case 5: price=price-(0.025*price);
		break;
		case 6: price=price-(0.1*price);
		break;
		case 7: price=price-(0.05*price);
		break;
		case 8: price=price-(0.02*price);
		break;
		case 9: price=price-(0.05*price);
		break;
		case 10: price=price-(0.08*price);
		break;
		case 11: price=price-(0.015*price);
		break;
		case 12: price=price-(0.1*price);
		break;
		case 13: price=price-(0.07*price);
		break;
		case 14: price=price-(0.05*price);
		break;
		case 15: price=price-(0.04*price);
		break;
		case 16: price=price-(0.2*price);
		break;
		default: printf("\nENTER A CORRECT OPTION!!\n");
	}	
	}
	new->data=value;
	current->next=new;
	new->next=NULL;
	printf("\n\nANOTHER ISSUE SELECTED!\n");
    }
} 
int delete_specific()
{
	display();
    struct node *ptr,*ptr1;  
    int x,i;    
    printf("\nENTER THE ISSUE THAT YOU WANT TO DELETE: \n");  
    scanf("%d",&x);  
    ptr=start;  
    for(i=0;i<x;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
    }  
    ptr1->next = ptr->next;   
    switch(x)
	{
    	case 1: price=price+(0.03*price);
		break;
		case 2: price=price+(0.15*price); ///review
		break;
		case 3: price=price+(0.03*price);
		break;
		case 4: price=price+(0.07*price);
		break;
		case 5: price=price+(0.025*price);
		break;
		case 6: price=price+(0.1*price);
		break;
		case 7: price=price+(0.05*price);
		break;
		case 8: price=price+(0.02*price);
		break;
		case 9: price=price+(0.05*price);
		break;
		case 10: price=price+(0.08*price);
		break;
		case 11: price=price+(0.015*price);
		break;
		case 12: price=price+(0.1*price);
		break;
		case 13: price=price+(0.07*price);
		break;
		case 14: price=price+(0.05*price);
		break;
		case 15: price=price+(0.04*price);
		break;
		case 16: price=price+(0.2*price);
		break;
		default: printf("\nENTER A CORRECT OPTION!!\n");
	}
    free(ptr);
printf("\nISSUE DELETED SUCCESSFULLY!");

}
int search(int value)  
{  
    struct node *ptr;  
    int i=0;  
    ptr = start;    
        while (ptr!=NULL)  
        {  
        if(i>1)
        break;
        if(ptr->data == value) 
                i++; 
            ptr = ptr->next;  
        }  
        if(i!=0){
        printf("\nISSUE ALREADY EXITS PLEASE SELECT ANOTHER ISSUE");
        return 0;
                }
        else
		return 1;  
    }      
int menu()
{
	
	printf("\nselect if any issue present in the mobile");
	printf("\n1. Front Camera not working");
	printf("\n2. Back Camera not working");
	printf("\n3. Volume Button not working");
	printf("\n4. Finger Touch not working");
	printf("\n5. WiFi not working");
	printf("\n6. Battery Faulty");
	printf("\n7. Speaker Faulty");
	printf("\n8. Power Button not working");
	printf("\n9. Charging Port not working");
	printf("\n10. Face Sensor not working");
	printf("\n11. Silent Button not working");
	printf("\n12. Audio Receiver not working");
	printf("\n13. Camera Glass Broken");
	printf("\n14. Bluetooth not working");
	printf("\n15. Vibrator is not working");
	printf("\n16. Screen Damage or Touch screen is not working");
}
int total()
{
		printf("\n");
	printf("\n********************\nYOUR TOTAL IS= Rs. %d\n********************\n",price);
}
