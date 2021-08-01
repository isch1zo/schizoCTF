#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int Bofy() {
	char hackergyInput[500];
	int numberOfBytes;
	printf("\nOverFLow the buffer:\n");
	fflush(stdout);
	numberOfBytes = read(0,hackergyInput,900);
	printf("\nYour Input is: %s\n",hackergyInput);
	fflush(stdout);
	return 0;
}

void help(){
	asm("jmp esp");
}

int main(int argc, char *argv[]) {
	char flag2[20];
	printf("Great to see you here Hackergy\nI hope you can find your final parts of the flag !\nEnter The Second Part of the flag:\n");
	fflush(stdout);
	scanf("%s",flag2);
	int flagsize = strlen(flag2);
	if((flagsize == 17) && (flag2[0] == 'I') && (flag2[1] == '_') && (flag2[2] == 'A')){
		if ((flag2[3] == 'M') && (flag2[4] == '_')){
			if((flag2[5] == 'A') && (flag2[6] == '_')){
				if((flag2[7] == 'C') && (flag2[8] == 'e') && (flag2[9] == 'r')){
					if((flag2[10] == 't') && ((flag2[11] == 'i')) && (flag2[12] == 'f')){
						if((flag2[13] == 'i') && (flag2[14] == 'e') && (flag2[15] == 'd') && (flag2[16] == '_')){
							Bofy();
						}else{
							printf("R U kid'n me..!???\n");
							exit(0);
						}
					}else{
						printf("R U kid'n me..!???\n");
						exit(0);
					}
				}else{
					printf("R U kid'n me..!???\n");
					exit(0);
				}

			}else{
				printf("R U kid'n me..!???\n");
				exit(0);
			}
		} else{
		printf("R U kid'n me..!???\n");
		exit(0);
		}

	
	} else{
		printf("R U kid'n me..!???\n");
		exit(0);
	}
	return 0;
}
// gcc -fno-stack-protector -z execstack BufferOverFlow.c -m32 -o BufferOverFlow -no-pie -masm=intel
