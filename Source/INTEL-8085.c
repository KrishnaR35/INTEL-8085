//  INTEL-8085 ---->

//  Header Fies ---->

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

//  Local Headers ---->

#include "../Functions/Func.h"
#include "../Library/OPCODE.h"
#include "../Library/INS_SET.h"
#include "../Library/INS_FUN.h"
#include "../Components/Memory.h"
#include "../Components/Architecture.h"

//  Main Function ---->

int main()
{
    //  Initialize Opcode Mapping -->

    init_Opcode();

    //  Initialize Architecture -->

    uint8_t Accumulator = 0;

    FLAG Flag;

    init_Flag(&Flag);

    //  Initializing General Purpose Registers -->

    uint8_t REG_B = 0;
    uint8_t REG_C = 0;
    uint8_t REG_D = 0;
    uint8_t REG_E = 0;
    uint8_t REG_H = 0;
    uint8_t REG_L = 0;

    //  Initializing Special Purpose Registers -->

    uint16_t StackPointer = 0;
    uint16_t ProgramCounter = 0;

    //  Initializing Instruction Decoder -->

    uint8_t InstructionDecoder = 0;

    //  Main Menu -->
    
    Main_Menu:

        mainMenu();
    
        printf("\n-->\t");
        getChoice();

    return 0;
}