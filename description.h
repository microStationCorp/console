#ifndef description
#define description
#include<stdio.h>

void author()
{
	printf("\n\tAUTHOR INFORMATION ::"
	"\n\tSUJAN MONDAL\n\tstudent of APC RAY POLYTECHNIC"
	"\n\tDiploma in Electrical Engineering"
	"\n\tFounder of microStation Corporation.\n");
}

void about()
{
	printf("\tmicroStation Xervis [Version 1.0.5]\n"
"\t(c) 2017 microStation Corporation. All rights reserved.\n"
	"\n\tIt is an application to help students in Number system ."
	"\n\tIt will also helps students to work with 8085 microprocessor"
	"\n\ttype 'help' for know how to use, \n\ttype 'author' to know about author\n");
}
void help()
{
	printf("\n\t:::: User Help Section ::::\n"
	"\nMAIN CODES ::\n"
	"\n\tCVT \t go to number system conversion process"
	"\n\tFILE \t to use file functions"
	"\n\tMOP \t go to Mathematical operation process of different number system"
	"\n\tMP \t go to 8085 microProcessor page\n"
	"\nOTHERS ::\n"
	"\n\tABOUT \t about the application"
	"\n\tAUTHOR \t Author Information"
	"\n\tBACK \t to go to the previous page"
	"\n\tCLS \t use to clear the screen"
	"\n\tHELP \t list of useful commands to use this application"
	"\n\tHOME \t to go to the home page"
	"\n\n\tEXIT \t to exit from the application\n");
}
void helpfp()
{
	printf("\n\t:: User Help Section ::\n"
	"\nMAIN CODES ::\n"
	"\nCreate a text file ::"
	"\n\tCRT <new file name with .txt extension>"
	"\n\nDelete a text file ::"
	"\n\tRMV <existing file name with .txt extension>"
	"\n\nOpen a text file ::"
	"\n\tOPN <existing file name with .txt extension>\n"
	"\nOTHERS ::\n"
	"\n\tABOUT \t about the application"
	"\n\tAUTHOR \t Author Information"
	"\n\tBACK \t to go to the previous page"
	"\n\tCLS \t use to clear the screen"
	"\n\tHELP \t list of useful commands to use this application"
	"\n\tHOME \t to go to the home page"
	"\n\n\tEXIT \t to exit from the application\n");
}
void helpCvt()
{
	printf("\n\t:::: User Help Section ::::\n"
	"\nGeneral Syntax ::"
	"\n\n\t<source number system> <destination number system> <number> and then press ENTER\n"
	"\nShort Codes ::\n"
	"\n\tB D \t binary to decimal conversion"
	"\n\tB H \t binary to hexa-decimal conversion"
	"\n\tB O \t binary to octal conversion\n"
	"\n\tD B \t decimal to binary conversion"
	"\n\tD O \t decimal to octal conversion"
	"\n\tD H \t decimal to hexa-decimal conversion\n"
	"\n\tH O \t hexa-decimal to octal conversion"
	"\n\tH D \t hexa-decimal to decimal conversion"
	"\n\tH B \t hexa-decimal to binary conversion\n"
	"\n\tO B \t octal to binary conversion"
	"\n\tO H \t octal to hexa-decimal conversion"
	"\n\tO D \t octal to decimal conversion\n"
	"\nEXAMPLE ::\n"
	"\n\tB H 101010 "
	"\n\tIt will finds the Hexa-Decimal value , equivalent to Binary value 101010\n"
	"\nOTHERS ::\n"
	"\n\tABOUT \t about the application"
	"\n\tAUTHOR \t Author Information"
	"\n\tBACK \t to go to the previous page"
	"\n\tCLS \t use to clear the screen"
	"\n\tHELP \t list of useful commands to use this application"
	"\n\tHOME \t to go to the home page"
	"\n\n\tEXIT \t to exit from the application\n");
}
void cmpmnc()
{
	printf("\n\nCMP r. (Compare register to accumulator)"
	"\n-------------------------------------"
	"\n\t[A] - [r]\n"
	"\n\tThe content of register is subtracted from the content of the accumulator and status flags are set according to th result of"
	"\n\tthe subtraction. But the result is discarded. The content of the accumulator remains unchanged\n"
	"\n\t* T-state : 4"
	"\n\t* Flags : All flags are affected"
	"\n\t* Addressing : register"
	"\n\t* Machine Cycle : 1\n"
	"\n\tMnemonics -> CMP\tOperand -> A\tOpcode -> BF"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> CMP\tOperand -> B\tOpcode -> B8"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> CMP\tOperand -> C\tOpcode -> B9"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> CMP\tOperand -> D\tOpcode -> BA"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> CMP\tOperand -> E\tOpcode -> BB"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> CMP\tOperand -> H\tOpcode -> BC"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> CMP\tOperand -> L\tOpcode -> BD"
	"\n\t------------------------------------------------------\n"
	"\nCMP M (Compare memory to accumulator)"
	"\n------------------------------------"
	"\n\t[A] - [[H-L]]\n"
	"\n\tThe content of the memory location addressed by H-L pair is subtracted from the content of the accumulator and status"
	"\n\t flags are set according to th result ofthe subtraction. But the result is discarded. The content of the accumulator remains unchanged\n"
	"\n\t* T-state : 7"
	"\n\t* Flags : All flags are affected"
	"\n\t* Machines cycle : 2\n"
	"\n\t* Addressing : register indirect"
	"\n\tMnemonics -> CMP\tOperand -> M\tOpcode -> BE"
	"\n\t------------------------------------------------------\n");
}
void helpmp()
{
	printf("\n\t:::: User Help Section ::::\n"
	"\nMAIN CODES ::\n"
	"\n\tMNC \t to learn about mnemonics\n"
	"\nOTHERS ::\n"
	"\n\tABOUT \t about the application"
	"\n\tAUTHOR \t Author Information"
	"\n\tBACK \t to go to the previous page"
	"\n\tCLS \t use to clear the screen"
	"\n\tHELP \t list of useful commands to use this application"
	"\n\tHOME \t to go to the home page"
	"\n\n\tEXIT \t to exit from the application\n");
}
void helpmn()
{
	printf("\n\t:::: User Help Section ::::\n"
	"\nMAIN CODES ::\n"
	"\n\tACI\tADC\tADD\tADI\tANA\tCALL\tCMA\tCMC\tCMP"
	"\n\tCPI\tDAD\tDCR\n"
	"\nOTHERS ::\n"
	"\n\tABOUT \t about the application"
	"\n\tAUTHOR \t Author Information"
	"\n\tBACK \t to go to the previous page"
	"\n\tCLS \t use to clear the screen"
	"\n\tHELP \t list of useful commands to use this application"
	"\n\tHOME \t to go to the home page"
	"\n\n\tEXIT \t to exit from the application\n");
}
void dcrmnc()
{
	printf("\n\nDCR r (decrement register content)"
	"\n----------------------------------------\n"
	"\n\t[r] <- [r] - 1\n"
	"\n\tThe content of register r is decremented by one. All flags , except CS effected\n"
	"\n\t* T-state : 4"
	"\n\t* Flags : All flags , except carry flag"
	"\n\t* Addressing : register"
	"\n\t* Machine cycle : 1\n"
	"\n\tMnemonics -> DCR\tOperand -> A\t\tOpcode -> 3D"
	"\n\t------------------------------------------------------------"
	"\n\tMnemonics -> DCR\tOperand -> B\t\tOpcode -> 05"
	"\n\t------------------------------------------------------------"
	"\n\tMnemonics -> DCR\tOperand -> C\t\tOpcode -> 0D"
	"\n\t------------------------------------------------------------"
	"\n\tMnemonics -> DCR\tOperand -> D\t\tOpcode -> 15"
	"\n\t------------------------------------------------------------"
	"\n\tMnemonics -> DCR\tOperand -> E\t\tOpcode -> 1D"
	"\n\t------------------------------------------------------------"
	"\n\tMnemonics -> DCR\tOperand -> H\t\tOpcode -> 25"
	"\n\t------------------------------------------------------------"
	"\n\tMnemonics -> DCR\tOperand -> L\t\tOpcode -> 2D"
	"\n\t------------------------------------------------------------\n"
	"\n\nDCR M (decrement memory content)"
	"\n----------------------------------------\n"
	"\n\t[[H-L]] <- [[H-L]] - 1\n"
	"\n\tThe content of register r is decremented by one. All flags , except CS effected\n"
	"\n\t* T-state : 10"
	"\n\t* Flags : All flags , except carry flag"
	"\n\t* Addressing : register indirect"
	"\n\t* Machine cycle : 3\n"
	"\n\tMnemonics -> DCR\tOperand -> M\t\tOpcode -> 35"
	"\n\t------------------------------------------------------------\n");
}
void dadmnc()
{
	printf("\n\nDAD rp. (Add register pair to H-L pair)"
	"\n----------------------------------------\n"
	"\n\t[H-L] <- [H-L] + rp.\n"
	"\n\tthe contents of register pair rp are added to the contents of H-L pair and the result is placed in the"
	"\n\tH-L pair. Only carry flag is affected\n"
	"\n\t* T-state : 10"
	"\n\t* Flags : CS"
	"\n\t* Addressing : register"
	"\n\t* Machine cycle : 1\n"
	"\n\tMnemonics -> DAD\tOperand -> B\t\tOpcode -> 09"
	"\n\t------------------------------------------------------------\n"
	"\n\tMnemonics -> DAD\tOperand -> C\t\tOpcode -> 19"
	"\n\t------------------------------------------------------------\n"
	"\n\tMnemonics -> DAD\tOperand -> D\t\tOpcode -> 29"
	"\n\t------------------------------------------------------------\n"
	"\n\tMnemonics -> DAD\tOperand -> sp\t\tOpcode -> 39"
	"\n\t------------------------------------------------------------\n");
}
void cpimnc()
{
	printf("\n\nCPI data (Compare immediate data to accumulator)"
	"\n-----------------------------------------------\n"
	"\n\t[A] - data\n"
	"\n\tThe 2nd byte of the instruction is data, and it is subtracted from the content of the accumulator. The"
	"\n\tstatus flags are set according the result of subtraction. But the result is discarded. The contents of"
	"\n\tthe accumulator remains unchanged.\n"
	"\n\t* T-state : 7"
	"\n\t* Flags : All flags are affected"
	"\n\t* Addressing : immediate"
	"\n\t* Machine cycle : 2\n"
	"\n\tMnemonics -> CPI\tOperand -> data\t\tOpcode -> FE"
	"\n\t------------------------------------------------------------\n");
}
void addmnc()
{
	printf("\n\nADD r. (Add register to accumulator)"
	"\n-------------------------------------"
	"\n\t[A] <- [A] + [r]\n"
	"\n\tThe content of the register r is added to the content of accumulator, the sum is placed in the accumulator\n"
	"\n\t* T-state : 4"
	"\n\t* Flags : All flags are affected"
	"\n\t* Addressing : register"
	"\n\t* Machine Cycle : 1\n"
	"\n\tMnemonics -> ADD\tOperand -> A\tOpcode -> 87"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADD\tOperand -> B\tOpcode -> 80"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADD\tOperand -> C\tOpcode -> 81"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADD\tOperand -> D\tOpcode -> 82"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADD\tOperand -> E\tOpcode -> 83"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADD\tOperand -> H\tOpcode -> 84"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADD\tOperand -> L\tOpcode -> 85"
	"\n\t------------------------------------------------------\n"
	"\nADD M (Add memory to accumulator)"
	"\n------------------------------------"
	"\n\t[A] <- [A] + [[H-L]]\n"
	"\n\tThe content of the memory location addressed by H-L pair is Added to the content of Accumulator.\n\tThe sum is placed in the accumulator\n"
	"\n\t* T-state : 7"
	"\n\t* Flags : All flags are affected"
	"\n\t* Machines cycle : 2\n"
	"\n\t* Addressing : register indirect"
	"\n\tMnemonics -> ADD\tOperand -> M\tOpcode -> 86"
	"\n\t------------------------------------------------------\n");
}
void adimnc()
{
	printf("\n\nADI data (Add immediate data to accumulator)"
	"\n-----------------------------------------------\n"
	"\n\t[A] <- [A] + data\n"
	"\n\tThe immediate data is added to the content of accumulator. The 1st byte of the instruction is its"
	"\n\tOpcode. The 2nd byte of the instruction is data, and it is added to the content of the accumulator"
	"\n\tThe sum is placed in the accumulator. \n"
	"\n\t* T-state : 7"
	"\n\t* Flags : All flags are affected"
	"\n\t* Addressing : immediate"
	"\n\t* Machine cycle : 2\n"
	"\n\tMnemonics -> ADI\tOperand -> data\t\tOpcode -> C6"
	"\n\t------------------------------------------------------------\n");
}
void acimnc()
{
	printf("\n\nACI data (Add with carry immediate data to Accumulator)"
	"\n-----------------------------------------------------------"
	"\n\t[A] <- [A] + data + [CS]\n"
	"\n\tThe 2nd byte of the instruction (which is data) and the carry status are added to the content of"
	"\n\tthe accumulator. The sum is placed in the accumulator.\n"
	"\n\t* T-state : 7"
	"\n\t* Addressing : immediate"
	"\n\t* Flags : All flags are affected"
	"\n\t* Machine cycle : 2\n"
	"\n\tMnemonics -> ACI\tOperand -> data\t\tOpcode -> CE"
	"\n\t-------------------------------------------------------------\n");
}
void adcmnc()
{
	printf("\n\nADC r. (Add register with carry to accumulator)"
	"\n-------------------------------------------------"
	"\n\t[A] <- [A] + [r] + [CS]\n"
	"\n\tThe content of the register r and carry status are added to the content of the Accumulator"
	"\n\tThe sum is placed in the accumulator.\n"
	"\n\t* T-state : 4"
	"\n\t* Flags : All flags are affected"
	"\n\t* Addressing : register"
	"\n\t* Machine Cycle : 1\n"
	"\n\tMnemonics -> ADC\tOperand -> A\tOpcode -> 8F"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADC\tOperand -> B\tOpcode -> 88"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADC\tOperand -> C\tOpcode -> 89"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADC\tOperand -> D\tOpcode -> 8A"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADC\tOperand -> E\tOpcode -> 8B"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADC\tOperand -> H\tOpcode -> 8C"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ADC\tOperand -> L\tOpcode -> 8D"
	"\n\t------------------------------------------------------\n"
	"\nADC M (Add memory with carry to accumulator)"
	"\n----------------------------------------------"
	"\n\t[A] <- [A] + [[H-L]] + [CS]\n"
	"\n\tThe content of the memory location addressed by H-L pair and carry status are added is Added to the content of\n"
	"\n\tAccumulator.The sum is placed in the accumulator\n"
	"\n\t* T-state : 7"
	"\n\t* Flags : All flags are affected"
	"\n\t* Addressing : register indirect"
	"\n\t* Machines cycle : 2\n"
	"\n\tMnemonics -> ADC\tOperand -> M\t\tOpcode -> 8E"
	"\n\t--------------------------------------------------------------\n");
}
void anamnc()
{
	printf("\n\nANA r. (AND register with accumulator)"
	"\n----------------------------------------"
	"\n\t[A] <- [r] ^ [A]\n"
	"\n\tThe content of register r is ANDed with content of the accumulator, and the result is placed in the accumulator"
	"\n\t"
	"\n\t* T-state : 4"
	"\n\t* Flags : All flags are affected"
	"\n\t* Machine cycle : 1\n"
	"\n\tMnemonics -> ANA\tOperand -> A\tOpcode -> A7"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ANA\tOperand -> B\tOpcode -> A0"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ANA\tOperand -> C\tOpcode -> A1"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ANA\tOperand -> D\tOpcode -> A2"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ANA\tOperand -> E\tOpcode -> A3"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ANA\tOperand -> H\tOpcode -> A4"
	"\n\t------------------------------------------------------"
	"\n\tMnemonics -> ANA\tOperand -> L\tOpcode -> A5"
	"\n\t------------------------------------------------------\n"
	"\nANA M (AND memory with accumulator)"
	"\n----------------------------------------------"
	"\n\t[A] <- [A] ^ [[H-L]]\n"
	"\n\tThe content of the memory location addressed by H-L pair is ANDed with the accumulator. The result is placed"
	"\n\tin the accumulator. All flags are affected. The CS flag is set to 0 and AC to 1\n"
	"\n\t* T-state : 7"
	"\n\t* Flags : CS flag is set to 0 and AC to 1 and other flags are affected"
	"\n\t* Addressing : register indirect"
	"\n\t* Machines cycle : 1\n"
	"\n\tMnemonics -> ANA\tOperand -> M\t\tOpcode -> A6"
	"\n\t--------------------------------------------------------------\n");
}

void animnc()
{
	printf("\n\nANI data (AND immediate data with accumulator)"
	"\n-----------------------------------------------\n"
	"\n\t[A] <- [A] ^ data\n"
	"\n\tThe 2nd byte of the instruction is data, and it is ANDed with the content of the accumulator. the result is "
	"\n\tplaced in the accumulator.\n"
	"\n\t* T-state : 7"
	"\n\t* Flags : CS flag is set to 0 and AC to 1 and other flags are affected"
	"\n\t* Addressing : immediate"
	"\n\t* Machine cycle : 2\n"
	"\n\tMnemonics -> ANI\tOperand -> data\t\tOpcode -> E6"
	"\n\t------------------------------------------------------------\n");
}

void callmnc()
{
	char n=254;
	printf("\n\nCALL lebel (call the subroutine identified by the address)"
	"\n-----------------------------------------------------------------\n"
	"\n\t%c Unconditional CALL : "
	"\n\t--------------------\n"
	"\n\t[[SP] - 1] <- [PCH] , Save the address of the next instruction of the program in the stack."
	"\n\t[[SP] - 2] <- [PCL],"
	"\n\t      [SP] <- ([SP] - 2)"
	"\n\t      [PC] <- addr (lebel)\n"
	"\n\tCALL instruction is used to call a subrouting. Before the control is transfered to the subroutine, the address\n"
	"\tof the next instruction of the main program is saved in the stack. the content of the stack pointer is decremented\n"
	"\tby two to indicate the new stacktop. Then the program jumps to the subroutine starting at address specified by the\n"
	"\tlebel\n"
	"\n\t* T-States : 18"
	"\n\t* Flags : No flags are affected"
	"\n\t* Machine cycles : 5\n"
	"\n\tMnemonics -> CALL\tOperand -> lebel\t\tOpcode -> CD"
	"\n\t------------------------------------------------------------------------\n"
	"\n\n\t%c Conditional CALL : "
	"\n\t--------------------\n"
	"\n\tIf the condition is true and program calls the specified subroutine, the execution of a conditional call instruction\n"
	"\ttakes 5 machine cycles; 18 T-states. If condition is not true, only 2 machine cycles; 9 T-states are required for the\n"
	"\texecution of the instruction\n"
	"\n\t* T-States : 9/18"
	"\n\t* Flags : No flags are affected"
	"\n\t* Machine cycles : 2/5\n"
	"\n\t1. CC addr(lebel) :: Call subroutine if carry status CS=1"
	"\n\t2. CNC addr(lebel) :: CALL subroutine if carry status CS=1"
	"\n\t3. CZ addr(lebel) :: Call subroutine if the result is Zero; the zero status Z=1"
	"\n\t4. CNZ addr(lebel) :: CALL subroutine if the result is not Zero; the zero status Z=0"
	"\n\t5. CP addr(lebel) :: Call subroutine if the result is plus; the sign status S=0"
	"\n\t6. CM addr(lebel) :: Call subroutine if the result is minus; the signe ststus S=1"
	"\n\t7. CPE addr(lebel) :: Call subroutine if even parity; the parity status P=1"
	"\n\t8. CPO addr(lebel) :: Call subroutine if odd parity; the parity status P=0\n"
	"\n\tMnemonics -> CC\t\tOperand -> lebel\t\tOpcode -> DC"
	"\n\t------------------------------------------------------------------------\n"
	"\n\tMnemonics -> CNC\tOperand -> lebel\t\tOpcode -> D4"
	"\n\t------------------------------------------------------------------------\n"
	"\n\tMnemonics -> CZ\t\tOperand -> lebel\t\tOpcode -> CC"
	"\n\t------------------------------------------------------------------------\n"
	"\n\tMnemonics -> CNZ\tOperand -> lebel\t\tOpcode -> C4"
	"\n\t------------------------------------------------------------------------\n"
	"\n\tMnemonics -> CP\t\tOperand -> lebel\t\tOpcode -> F4"
	"\n\t------------------------------------------------------------------------\n"
	"\n\tMnemonics -> CM\t\tOperand -> lebel\t\tOpcode -> FC"
	"\n\t------------------------------------------------------------------------\n"
	"\n\tMnemonics -> CPE\tOperand -> lebel\t\tOpcode -> EC"
	"\n\t------------------------------------------------------------------------\n"
	"\n\tMnemonics -> CPO\tOperand -> lebel\t\tOpcode -> E4"
	"\n\t------------------------------------------------------------------------\n",n,n);
}
void cmamnc()
{
	printf("\n\nCMA (Complement of Accumulator)\n"
	"-------------------------------\n"
	"\n\t[A] <- [~ A]"
	"\n\n\t1's complement of the content of the accumulator is obtained, and the result is placed in the accumulator"
	"\n\tTo obtain 1's complement of a binary number 0 is replaced by 1, and 1 by 0. For example, 1's complement of"
	"\n\t1100 is 0011\n"
	"\n\t* T-states : 4"
	"\n\t* Flags : no flags are affected"
	"\n\t* Addressing : implicit"
	"\n\t* Machine cycle : 1\n"
	"\n\tMnemonics -> CMA\t\tOpcode -> 2F"
	"\n\t--------------------------------------------------\n");
}
void cmcmnc()
{
	printf("\n\nCMC (Complement of the carry status flag)\n"
	"-------------------------------\n"
	"\n\t[CS] <- [~ CS]"
	"\n\n\tThe CS flag is complemented. Other flags are not effected\n"
	"\n\t* T-states : 4"
	"\n\t* Flags : CS flag is affected"
	"\n\t* Machine cycle : 1\n"
	"\n\tMnemonics -> CMC\t\tOpcode -> 3F"
	"\n\t---------------------------------------------------\n");
}
void helpmop()
{
	printf("\n\t:::: User Help Section ::::\n"
	"\nMAIN CODES ::"
	"\n\nADDITION ::"
	"\n------------"
	"\n\tADD <number system> <1st number> <2nd number> then press enter."
	"\n\nSUBTRACTION ::"
	"\n------------"
	"\n\tSUB <number system> <1st number> <2nd number> then press enter."
	"\n\nMULTIPLICATION ::"
	"\n-----------------"
	"\n\tMUL <number system> <1st number> <2nd number> then press enter."
	"\n\nDIVISION ::"
	"\n------------"
	"\n\tDIV <number system> <Dividend> <Divisor> then press enter."
	"\n\n\tB \t Binary"
	"\n\tD \t Decimal"
	"\n\tH \t Hexa-Decimal"
	"\n\tO \t Octal"
	"\n\nExample ::"
	"\n\tADD B 1001 1100"
	"\n\tSUB D 12 10"
	"\n\tMUL O 13 7"
	"\n\tDIV H FA 12\n"
	"\nOTHERS ::\n"
	"\n\tABOUT \t about the application"
	"\n\tAUTHOR \t Author Information"
	"\n\tBACK \t to go to the previous page"
	"\n\tCLS \t use to clear the screen"
	"\n\tHELP \t list of useful commands to use this application"
	"\n\tHOME \t to go to the home page"
	"\n\n\tEXIT \t to exit from the application\n");
}
#endif
