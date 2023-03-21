
lea si, st
mov cx,n

here:
    mov al,[si]
    cmp al,48
    jl spc
    
    cmp al, 57
    jle dgt
    
    
    cmp al,65
    jl spc
    
    cmp al,92
    jle alp
    
    cmp al,97
    jl spc
    
    cmp al,122
    jle alp
    
    jmp spc
    
    
    alp:
        inc a
        jmp last
    
    dgt:
        inc d
        jmp last
    
    spc:
        inc s
        jmp last
        
   last:
       inc si
       loop here
        


ret
a db 0h
d db 0h
s db 0h

st db "123@gmail%"
n equ ($-st)
