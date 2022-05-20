//
// Created by Keith_Mburu on 5/14/2021.
//

#include <HERA.h>
#include <HERA-print.h>

void HERA_main() {
    OPCODE(0x8803) // initialize thread 1
    OPCODE(0x8807) // initialize thread 2
    OPCODE(0x880b) // initialize thread 3

    // thread 1's task
    LABEL(task_1)
    INC(R1, 1)
    BR(task_1)  // repeat

    // thread 2's task
    LABEL(task_2)
    DEC(R2, 1)
    BR(task_2)  // repeat

    // thread 3's task
    LABEL(task_3)
    INC(R3, 1)
    BR(task_3)  // repeat
}
