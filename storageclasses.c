/*
Local Diclaration: variable created inside function, cant be accessed outside.
Global Diclaration: under header, above int main, can be accessed anywhere.

Four Types:
-->Auto:Automatic>>goes to stack segment of memory in cpu
-->Register: Similar to auto, the only difference>>it goes to register memory in cpu
-->Extern:like global
-->Static:cannot be changed, until program/function finishes

Storage Classes:
-->used to describe the features of a variable/function.
-->Features include:
    *scope
    *lifetime
    *visibility
-->Which helps us to track the existance of a variable in a programme.

-->Auto:
    *default storage class for all variables declared inside a function/block.
    *Keyword is rarely used.
    *it can be accessed only within the block/function where they have been declared.(defines scope)
    *however, they ccan be accessed outside of their scope using the concept of pointers
    *Default value:Garbage Value.
    
-->Extern:
    *variable is declared elsewhere(not within same block) where it is being used.
    *This value can be overwritten/changes in different block.
    *A normal global variable ca be made "extern" using the keyword-which signifies we are accessing/useing the same variable.
    *Main use: They can be accessed between 2 different files which are part of a large programme
    
-->Static:
    *These variables have th eproperty of preserving their value even after they are out of their scope.
    *No new memory is allocated, beacause they are not re-declared.
    *Based on Scope--Local Static/Global Static
    *Default value: 0(Zero) by the compiler.
    
-->Register:
    same function as auto variables.
    *Compiler stores the variables in the register of the microprocessor-if 'free'regidter is available.
    *If 'free'-not available, then it is stored in memory only.
    *This makes the use of it be much faster than variables stored in memory.
    NOTE:We cannot get address of register variables using pointers.(like enum and bitfields)
    

STORAGE CLASS           STORAGE            INITIAL VALUE         SCOPE               LIFETIME
AUTO                    stack              Garbage value        Within Block         End of Block
EXTERN                  Data segment          Zero           Global-multiple files   End of program
STATIC                  Data segment          Zero             Within Block          End of program
REGISTER                CPU register       Garbage value       Within Block          End of Block
*/     