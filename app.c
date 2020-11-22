#include <stdio.h>
int main(){

//Headding	
	printf("\n\n\t  -------------------------------------------------\n");
	printf("---------- SRI LANKA TELECOME PHONE NUMBER LOCATION FINDER ----------\n");
	printf("\t  ------------------------------------------------- \n\n");


//Input first three digits  of phone number

int num;

printf("Enter first three digits in number :");
scanf("%d",&num);


//Check the area codes
	switch(num){

	case 63:
	printf("\nThis number is located in \"AMPARA\".\n\n");
	break;	
	

	case 25:
	printf("\nThis number is located in \"ANURADHAPURA\".\n\n");
	break;	
	

	case 36:
	printf("\nThis number is located in \"AWISSAWELLA\".\n\n");
	break;	
	

	case 55:
	printf("\nThis number is located in \"BADULLA\".\n\n");	
	break;
	

	case 57:
	printf("\nThis number is located in \"BANDARAWELA\".\n\n");
	break;	
	

	case 65:
	printf("\nThis number is located in \"BATTICALOA\".\n\n");
	break;	
	

	case 32:
	printf("\nThis number is located in \"CHILAW\".\n\n");
	break;	
	

	case 11:
	printf("\nThis number is located in \"COLOMBO\".\n\n");
	break;	
	

	case 91:
	printf("\nThis number is located in \"GALLE\".\n\n");
	break;	
	

	case 33:
	printf("\nThis number is located in \"GAMPAHA\".\n\n");	
	break;
	

	case 47:
	printf("\nThis number is located in \"HAMBANTHOTA\".\n\n");
	break;	
	

	case 51:
	printf("\nThis number is located in \"HATTON\".\n\n");
	break;	
	

	case 21:
	printf("\nThis number is located in \"JAFFNA\".\n\n");
	break;	
	

	case 67:
	printf("\nThis number is located in \"KALMUNAI\".\n\n");
	break;	
	

	case 34:
	printf("\nThis number is located in \"KALUTARA\".\n\n");
	break;	
	

	case 81:
	printf("\nThis number is located in \"KANDY\".\n\n");
	break;	
	

	case 35:
	printf("\nThis number is located in \"KAGELLA\".\n\n");
	break;	
	

	case 37:
	printf("\nThis number is located in \"KURUNEGALA\".\n\n");
	break;	
	

	case 23:
	printf("\nThis number is located in \"MANNAR\".\n\n");	
	break;
	

	case 66:
	printf("\nThis number is located in \"MATALE\".\n\n");	
	break;
	

	case 54:
	printf("\nThis number is located in \"NAWALAPITIYA\".\n\n");
	break;	
	

	case 31:
	printf("\nThis number is located in \"NEGAMBO\".\n\n");	
	break;
	

	case 52:
	printf("\nThis number is located in \"NUWARA ELIYA\".\n\n");	
	break;
	

	case 38:
	printf("\nThis number is located in \"PANADURA\".\n\n");	
	break;
	

	case 27:
	printf("\nThis number is located in \"POLONNARUWA\".\n\n");
	break;	
	

	case 45:
	printf("\nThis number is located in \"RATHNAPURA\".\n\n");
	break;	
	

	case 26:
	printf("\nThis number is located in \"TRINCOMALEE\".\n\n");
	break;	
	

	case 24:
	printf("\nThis number is located in \"VAVUNIYA\".\n\n");	
	break;
	

	default:
	printf("\nYou entered invalid sri lankan phone number..!!\n\n");	
	}


return 0;
}
