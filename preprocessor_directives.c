/*
PREPROCESSOR DIRECTIVES:
-all preprocesseors commands begin with a hash symbol.
-->it must be the non-blank character and for readability,pre-processor directives should begin in the 1st column conventionally

-->tpes:
    -->Macros
    -->File Inclusion
    -->conditional compilation
    -->other Ditectivve
    
-->Macro:
    -->piece of code the =at has been given a name
    -->during pre-processing, it substitutes the name in the code
    -->#define directive is used to define a macro.
    -->doesnt judge anything
    no memeory allocation for macro
    -->can define
         str using macro
         macro with expression
         macro with pparameter
    -->Macro can be used in another macro

    
-->macros v/s Enum:
    -Macro doesnt not have a tyoe but enum has type int
    -macro is substituted at pre=processing stage and enum are not
    -macro can f=be redefined using #define but enum  cannot 
    -enum follows scope rules and macro doesnt
    -*
    
-->File Inclusive
-->Conditional compilation:
    -->a few blocks of code will be compiled in a particular program based on the result of some condition.
    -->
-->other Directives:
    -->undef
    -->*/