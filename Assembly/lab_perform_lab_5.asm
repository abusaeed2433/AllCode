

lea si, st
lea di, sb

mov cl, n1

here:
    mov al, [si]
    cmp al, [di]
    jne cont
    
    mov [si], ' '
    inc di
    
    inc cnt
    cmp cnt,n2
    jne cont
    
    mov cnt,0
    lea di,sb
    
    
    
    
    
    cont:
        inc si
        loop here



ret
st db "we love kuet"
n1 equ ($-st)

sb db "ou"
n2 equ ($-sb)

cnt db 0
