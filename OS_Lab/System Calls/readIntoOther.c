#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <dirent.h> 
 
#define MAX_FILENAME_LENGTH 256 
#define BUFFER_SIZE 1024 
 
 
int mergeTxtFiles(const char *outputFileName); 
 
 
int main() {  
 
const char *outputFileName = "merged_output.txt"; 
int fileDescriptor; 
 
 
fileDescriptor = mergeTxtFiles(outputFileName); 
 
 
printf("Merged output written to %s\n", outputFileName); 
 
 
 
 
 
return 0; 
} 
 
 
int mergeTxtFiles(const char *outputFileName) { 
DIR *dir; 
struct dirent *entry; 
FILE *outputFile; 
char buffer[BUFFER_SIZE]; 
 
 
dir = opendir("."); 
if (dir == NULL) { 
perror("Error opening directory"); 
return -1; 
} 
 
 
outputFile = fopen(outputFileName, "w"); 
if (outputFile == NULL) { 
perror("Error creating output file"); 
closedir(dir); 
return -1; 
 
} 
 
 
while ((entry = readdir(dir)) != NULL) { 
if (strstr(entry->d_name, ".txt") != NULL) { 
FILE *inputFile = fopen(entry->d_name, "r"); 
if (inputFile != NULL) { 
while (fgets(buffer, sizeof(buffer), inputFile) != NULL) { 
fputs(buffer, outputFile); 
 
} 
fclose(inputFile); 
} else { 
fprintf(stderr, "Error opening file: %s\n", entry->d_name); 
 
} 
} 
} 
 
 
fclose(outputFile); 
closedir(dir); 
 
 
return fileno(outputFile); 
}