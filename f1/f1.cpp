/*============================================================================================*/
/* FILE : f1.cpp                                                                              */
/* PROJECT : SENG1050- focused assignment 1                                                   */
/* PROGRAMMER : Bhawanjeet Kaur Gill                                                          */
/* FIRST VERSION : 2024-05-13                                                                 */
/* DESCRIPTION : Write a program that takes in information about flights and stores the       */
/*               destination and date in an array of structs to be displayed.                 */
/*============================================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#pragma warning(disable: 4996)
const int kMaxLoop = 10;
const int kMaxInput = 30;
struct FlightInfo
{
	char* destination;
	char* date;
};
int fillFlightInfo(FlightInfo* myFlight, char* destination, char* date);
void printFlightInfo(FlightInfo* myFlight);
void replaceNewlineWithNull(char* inputString);
int main(void)
{
	struct FlightInfo myFlight[kMaxLoop];
	for (int index = 0; index < kMaxLoop; index++)
	{
		//prompt the destination
		printf("Enter the destination for flight %d: \n", index + 1);
		char destination[kMaxInput] = "";
		fgets(destination, sizeof destination, stdin);
		replaceNewlineWithNull(destination);

		//propmt the date
		printf("Enter the date for flight %d (DD-MM-YYYY): \n", index + 1);
		char date[kMaxInput] = "";
		fgets(date, sizeof date, stdin);
		replaceNewlineWithNull(date);

		fillFlightInfo(&myFlight[index], destination, date);
	}
	return 0;
}
/*============================================================================================*/
/* NAME: fillFlightInfo()                                                                     */
/* DESCRIPTION: This function takes three parameters, uses malloc to allocate dynamic memory  */
/*              and if succesful, put those inputs in the struct varibale.                    */
/* PARAMETERS: FlightInfo* myFlight, char* destination, char* date.                           */
/* RETURNS: 1 if memory allocation failed, 0 if succesful.                                    */
/*============================================================================================*/
int fillFlightInfo(FlightInfo* myFlight, char* destination, char* date)
{
	return 0;
}
/*============================================================================================*/
/* NAME: printFlightInfo()                                                                    */
/* DESCRIPTION: This function takes one parameter, and displays the destination and date(the  */
/*              fields) in a proper format.                                                   */
/* PARAMETERS: FlightInfo* myFlight.                                                          */
/* RETURNS: Nothing.                                                                          */
/*============================================================================================*/
void printFlightInfo(FlightInfo* myFlight)
{

}
/*============================================================================================*/
/* NAME: replaceNewlineWithNull()                                                             */
/* DESCRIPTION: This function takes one parameter, and replaces the new line with the null    */
/*              terminator.                                                                   */
/* PARAMETERS: FlightInfo* myFlight.                                                          */
/* RETURNS: Nothing.                                                                          */
/*============================================================================================*/
void replaceNewlineWithNull(char* inputString)
{
	for (int index = 0; inputString[index] != '\0'; index++)
	{
		if (inputString[index] == '\n')
		{
			inputString[index] = '\0';
		}
	}
}