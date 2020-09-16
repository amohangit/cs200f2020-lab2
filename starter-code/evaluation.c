#include <stdio.h>
/* prompt total number of classes here */
int prompt_classes(){
	int res = 0;
	printf("Enter number of classes: ");
	scanf("%d", &res);
	return res;
} 
/* prompt total number of sequences here, note: each sequence will 
	have a multiple classes based on the earlier prompt.  */
int prompt_sequences(){
	int res = 0;
	printf("Enter number of sequences: ");
	scanf("%d", &res);
	return res;
} 
/* for each sequence in class, prompt instruction count here */
int prompt_inscount_perclass(){
	int res = 0;
	printf("Enter number of instructions: ");
	scanf("%d", &res);
	return res;
} 
/* for each sequence in a class, prompt cpi here */
int prompt_cpi_perclass(){
	int res = 0;
	printf("Enter number of clock cycles per instruction: ");
	scanf("%d", &res);
	return res;
} 
/* prompt clock rate here */
int prompt_clockrate(){
	int res = 0;
	printf("Enter clock rate (in Giga Hertz): ");
	scanf("%d", &res);
	return res;
} 
/* this method should output the sequence number 
	and the cpu time. */
void start_clock(){
	int no_of_classes = prompt_classes();
	int no_of_sequence = prompt_sequences();
	int clockrate = prompt_clockrate();
	/* find the average cpi for each sequence, 
		by invoking the prompt_cpi_perclass
		and invoking the prompt_inscount_perclass.
		Hint: we need to use a nested for-loop 
		Here we need to compute average cpi for each sequence 
		next we need to find the total cpu time for that sequence. 
		finally, find the sequence that took the longest cpu time 
		and the sequence that took the shortest cpu time. */

	
	
}
int main(){
	start_clock();
	return 0;
}