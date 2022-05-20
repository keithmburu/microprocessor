//
// Created by Keith_Mburu on 5/14/2021.
//

#include <HERA.h>
#include <HERA-print.h>

void HERA_main() {
    OPCODE(0x8802) // initialize thread 1
    OPCODE(0x8802) // initialize thread 2

    // task (Fibonacci sequence)
    SET(R1, 1)
    SET(R2, 1)
    ADD(R3, R1, R2)
    LABEL(loop)
    MOVE(R1, R2)
    MOVE(R2, R3)
    ADD(R3, R1, R2)
    BR(loop)
}
