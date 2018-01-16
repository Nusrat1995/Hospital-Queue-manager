#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>
struct regularPatientDetail {
    char firstInput[6];
	char PatientName[50];
	char PatientAddress[50];
	char OnEmergency[50];
	struct regularPatientDetail* next;
};
struct regularPatientDetail* head = NULL;
struct regularPatientDetail* tail = NULL;
struct criticalPatientDetail {
    char firstInput[6];
	char PatientName[50];
	char PatientAddress[50];
	char OnEmergency[50];
	struct criticalPatientDetail* next;
};

struct criticalPatientDetail* head1 = NULL;
struct criticalPatientDetail* tail1 = NULL;

struct emergencyPatientDetail {
    char firstInput[6];
	char PatientName[50];
	char PatientAddress[50];
	char OnEmergency[50];
	struct emergencyPatientDetail* next;
};

struct emergencyPatientDetail* head2 = NULL;
struct emergencyPatientDetail* tail2 = NULL;

void welcome(){
printf("\n\n\n\t  ----------HOSPITAL MANAGEMENT SYSTEM(DIU)------------\n\n\n");
}

int addPatient(){
    system("cls");
    welcome();
printf("\t\t\t1. Add Regular Patient\n");
printf("\t\t\t2. Add Critical Patient\n");
printf("\t\t\t3. Add Emergency patient\n");
int type;
scanf("%d", &type);
return type;
}
void Enqueue(int choice) {
    if(choice==1){
	struct regularPatientDetail* regularPatient =(struct regularPatientDetail*)malloc(sizeof(struct regularPatientDetail));

	gets(regularPatient->firstInput);
	printf("\t\t\tName : ");
    gets(regularPatient->PatientName);
    printf("\t\t\tAddress : ");
	gets(regularPatient->PatientAddress);
	printf("\t\t\tMobile Number : ");
	gets(regularPatient->OnEmergency);
		system("cls");
	welcome();
printf("\t\t\tDone!!!\n\n\n------------\n");
	regularPatient->next = NULL;
	if(head == NULL && tail == NULL){
    head = tail = regularPatient;
    return;
	}
	tail->next = regularPatient;
	tail = regularPatient;
}

 if(choice==2){
	struct criticalPatientDetail* criticalPatient =
		(struct criticalPatientDetail*)malloc(sizeof(struct criticalPatientDetail));
    gets(criticalPatient->firstInput);
    printf("\t\t\tName : ");
	gets(criticalPatient->PatientName);
	printf("\t\t\tAddress : ");
	gets(criticalPatient->PatientAddress);
	printf("\t\t\tMobile Number : ");
	gets(criticalPatient->OnEmergency);
		system("cls");
	welcome();
printf("\t\t\tDone!!!\n\n\n------------\n");
	criticalPatient->next = NULL;
	if(head1 == NULL && tail1 == NULL){
		head1 = tail1 = criticalPatient;
		return;
	}
	tail1->next = criticalPatient;
	tail1 = criticalPatient;

}

if(choice==3){
	struct emergencyPatientDetail* emergencyPatient =
		(struct emergencyPatientDetail*)malloc(sizeof(struct emergencyPatientDetail));
		gets(emergencyPatient->firstInput);
		printf("\t\t\tName : ");
	gets(emergencyPatient->PatientName);
	printf("\t\t\tAddress : ");
	gets(emergencyPatient->PatientAddress);
	printf("\t\t\tMobile Number : ");
	gets(emergencyPatient->OnEmergency);
		system("cls");
	welcome();
printf("\t\t\tDone!!!\n\n\n------------\n");
	emergencyPatient->next = NULL;
	if(head2 == NULL && tail2 == NULL){
		head2 = tail2 = emergencyPatient;
		return;
	}
	tail2->next = emergencyPatient;
	tail2 = emergencyPatient;

}
}

int choiceDequeue(){
    system("cls");
    welcome();
printf("\t\t\t1. Release Regular Patient\n");
printf("\t\t\t2. Release Critical Patient\n");
printf("\t\t\t3. Release Emergency patient\n");
int type;
scanf("%d", &type);
return type;
}
void Dequeue(int choice) {
    system("cls");
        welcome();
    if(choice==1){
	struct regularPatientDetail* regularPatient = head;
	printf("\t\t\tDone!!!-------------");
	if(head == NULL) {
		printf("\n\t\t\tThere is No Regular Patient Now\n");
		return;
	}
	if(head == tail) {
		head = tail = NULL;
	}
	else {
		head = head->next;
	}
	free(regularPatient);
}

   if(choice==2){
	struct criticalPatientDetail* criticalPatient = head1;
	printf("Done!!!-------------");
	if(head1 == NULL) {
		printf("\n\t\t\tThere is No Critical Patient Now\n");
		return;
	}
	if(head1 == tail1) {
		head1 = tail1 = NULL;
	}
	else {
		head1 = head1->next;
	}
	free(criticalPatient);
}


 if(choice==3){
	struct emergencyPatientDetail* emergencyPatient = head2;
	printf("Done!!!-----------");
	if(head2 == NULL) {
		printf("\n\t\t\tThere is no Emergency Patient Now\n");
		return;
	}
	if(head2 == tail2) {
		head2 = tail2 = NULL;
	}
	else {
		head2 = head2->next;
	}
	free(emergencyPatient);
}

}
/*char head() {
	if(head == NULL) {
		printf("Queue is empty\n");
		return 0;
	}
	return head->PatientName[];
}*/
int printChoice(){
    system("cls");
    welcome();

printf("\t\t\t1. Display Regular Patient\n");
printf("\t\t\t2. Display Critical Patient\n");
printf("\t\t\t3. Display Emergency patient\n");
int type;
scanf("%d", &type);
return type;

}
void Display(int choice) {
                int counter=1;
    if (choice==1){
            system("cls");
            welcome();
            printf("\t\t\tREGULAR PATIENT LIST :\n");
            if(head == NULL) {
		printf("\n\n\t\t\tThere is No Regular Patient Now\n");
		return;
	}
	struct regularPatientDetail* regularPatient = head;
	while(regularPatient != NULL) {


        printf("\n\t\t\t%dth Patient is:\n",counter);
		printf("\t\t\tName: %s \n",regularPatient->PatientName);
		printf("\t\t\tAddress: %s \n",regularPatient->PatientAddress);
		printf("\t\t\tMobile: %s \n\n\t\t\t----------\n",regularPatient->OnEmergency);
		regularPatient = regularPatient->next;
		counter++;
	}
	printf("\n");
}

 if (choice==2){
        system("cls");
 welcome();
 printf("\t\t\tCRITICAL PATIENT LIST :\n");
        if(head1 == NULL) {
		printf("\n\n\t\t\tThere is No Critical Patient Now\n");
		return;
	}
	struct criticalPatientDetail* criticalPatient = head1;
	while(criticalPatient != NULL) {

        printf("\n\t\t\t%dth Patient is:\n",counter);
		printf("\t\t\tName: %s \n",criticalPatient->PatientName);
		printf("\t\t\tAddress: %s \n",criticalPatient->PatientAddress);
		printf("\t\t\tMobile: %s \n\n\t\t\t----------\n",criticalPatient->OnEmergency);
		criticalPatient = criticalPatient->next;
		counter++;
	}
	printf("\n");
}



if (choice==3){
        system("cls");
        welcome();
        printf("\t\t\tEMERGENCY PATIENT LIST :\n");
        if(head2 == NULL) {
		printf("\n\n\t\t\tThere is No Emergency Patient Now\n");
		return;
	}
	struct emergencyPatientDetail* emergencyPatient= head2;
	while(emergencyPatient != NULL) {

        printf("\n\t\t\t%dth Patient is:\n",counter);
		printf("\t\t\tName: %s \n",emergencyPatient->PatientName);
		printf("\t\t\tAddress: %s \n",emergencyPatient->PatientAddress);
		printf("\t\t\tMobile: %s \n\n\t\t\t----------\n",emergencyPatient->OnEmergency);
		emergencyPatient = emergencyPatient->next;
		counter++;
	}
	printf("\n");
}

}

int main(){
    welcome();
    while(1){
printf("\n\t\t\tPlease Enter The Choice: \n\n\t\t\t------------------------\n");
printf("\t\t\t1. Add Patient\n");
printf("\t\t\t2. Release Patient\n");
printf("\t\t\t3. View Patient\n");
printf("\t\t\t4.Exit\n");
int choice;
scanf("%d", &choice);
if(choice==1){
        system("cls");
        welcome();
    Enqueue(addPatient());
}
    if(choice==2){
            system("cls");
            welcome();
        Dequeue(choiceDequeue());
    }
if(choice==3){
        system("cls");
        welcome();
    Display(printChoice());
}
    if(choice==4)
        exit(1);
}
}
