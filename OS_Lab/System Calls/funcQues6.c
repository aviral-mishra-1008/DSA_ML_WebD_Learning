#include <stdio.h> 
#include <stdlib.h> 
#include <fcntl.h> 
#include <unistd.h> 
int main() { 
void removeNonAlphabets(const char *inputFileName, const char *outputFileName); 
const char *inputFile = "input.txt"; 
const char *outputFile = "output.txt"; 
 
 
removeNonAlphabets(inputFile, outputFile); 
 
 
printf("Non-alphabets removed and written to %s.\n", outputFile); 
 
 
return 0; 
} 
 
 
void removeNonAlphabets(const char *inputFileName, const char *outputFileName) { 
int inputFileDescriptor, outputFileDescriptor; 
char buffer; 
 
 
// Open the input file in read-only mode 
inputFileDescriptor = open(inputFileName, O_RDONLY); 
if (inputFileDescriptor == -1) { 
perror("Error opening input file"); 
exit(1); 
} 
 
 
// Open or create the output file in write-only mode, with permissions rw-r--r-- 
outputFileDescriptor = open(outputFileName, O_WRONLY | O_CREAT | O_TRUNC, 
0644); 
if (outputFileDescriptor == -1) { 
perror("Error opening or creating output file"); 
close(inputFileDescriptor); 
exit(1); 
 
} 
 
 
// Read from the input file and remove non-alphabets 
 
 
OUTPUT: 
 
while (read(inputFileDescriptor, &buffer, 1) > 0) { 
if ((buffer >= 'A' && buffer <= 'Z') || (buffer >= 'a' && buffer <= 'z')) { 
// If the character is an alphabet, write it to the output file 
write(outputFileDescriptor, &buffer, 1); 
} 
} 
 
 
close(inputFileDescriptor); 
close(outputFileDescriptor); 
}