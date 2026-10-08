/*
 * student_stats.c
 *
 *  Template for Descriptive Statistics Calculator
 *
 */
#include <stdio.h>
#include <string.h>
#include "dpio.h"

/* These are the functions you will implement, below the main() function */


int bubbleSort(double *dataPoints, unsigned int size){
	for(unsigned int i=0; i< size-1;++i){
		for(unsigned int j=0; j<size-1-i;++j){
			if(dataPoints[j] > dataPoints[j+1]){
				double temp = dataPoints[j];
				dataPoints[j] = dataPoints[j+1];
				dataPoints[j+1] = temp;
			
		}
	}
}
return 0;
}
int printStats(double *dataPoints, unsigned int size){
	if(bubbleSort(dataPoints,size) != 0){
		return -1;
	}
	double min=dataPoints[0];
	double max=dataPoints[size -1];
	double median;
	if(size%2 ==1){
		median=dataPoints[size/2];
	}else{
		median=(dataPoints[size/2-1] +dataPoints[size/2]/2.0);
	}
	double sum=0.0;
	double mean;
	for(unsigned int i = 0;i <size;++i){
	sum+=dataPoints[i];
	}
	mean = sum /size;
	printf("min=%.4f \n",min);
	printf("max=%.4f \n",max);
	printf("mean=%.4f \n",mean);
	printf("median=%.4f \n",median);
	return 0;
}

/*
 * main()
 * 
 * Operates the CLI for the Data Management System and invokes functions to execute
 * commands. Some of those functions are in DPIO and some are defined in this file.
 *
 */
int main()
{
	char commandStr[100];
	char *commandVal;
	char fileName[50];
	double dataPoints[1000];
	unsigned int numDataPoints = 0;

	printf("\n***************************************************************");
	printf("\n************ Welcome to the Data Management System ************");
	printf("\n***************************************************************\n");
	printf("Type \"help\" to see a list of commands\n");

	// Operate the command loop indefinitely
	while(1)
	{
		printf("--> ");
		scanf("%c", &commandStr);
		//printf("%s", commandStr);

		commandVal = strtok(commandStr, " \t");
		if(strcmp(commandVal, "print") == 0)
		{
			// Print data command
			printDataPoints(dataPoints, numDataPoints);
		}
		else if(strcmp(commandVal, "add") == 0)
		{
			// Add data command
			numDataPoints = addDataPoints(dataPoints, numDataPoints, 1000);
		}
		else if(strcmp(commandVal, "clear") == 0)
		{
			// Clear data command
			numDataPoints = 0;
		}
		else if(strcmp(commandVal, "save") == 0)
		{
			// Save data command
			scanf("%c", &fileName);
			saveDataPoints(fileName, dataPoints, numDataPoints);
		}
		else if(strcmp(commandVal, "load") == 0)
		{
			// Load data command
			scanf("%c", &fileName);
			numDataPoints = loadDataPoints(fileName, dataPoints, numDataPoints, 1000);
		}
		else if(strcmp(commandVal, "sort") == 0)
		{
			// Sort data command
	
			bubbleSort(dataPoints, numDataPoints);
		}
		else if(strcmp(commandVal, "stats") == 0)
		{
			// Stats command
			printStats(dataPoints, numDataPoints);
		}
		else if(strcmp(commandVal, "help") == 0)
		{
			// Help command
			printf("Available commands: \n");
			printf("print - prints data\n");
			printf("add - adds data to current base of data\n");
			printf("clear - clears all data in the current base of data\n");
			printf("save filename - saves current base of data to filename\n");
			printf("load filename - loads data from filename and adds it to current base of data\n");
			printf("sort - sorts the base of data in ascending order\n");
			printf("stats - computes and prints descriptive statistics on base of data\n");
			printf("help - displays this help message\n");
			printf("exit - exits the system\n");
		}
		else if(strcmp(commandVal, "exit") == 0)
		{
			// Exit command
			printf("Goodbye!\n");
			return 0;
		}
		else
		{
			printf("Invalid command!\n");
		}
	}
}

