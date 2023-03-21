

call reverse

mov dx, offset st

mov ah, 09H
int 21H

ret

reverse proc near
    mov cx, n
    lea si, st
    mov di,sp

    loop1:
        mov ax,0h
        mov ax,[si]
        push ax
        inc si
        loop loop1

    mov cx, n
    mov bp, sp
    lea si, st
    
    loop2:
        mov ax, [bp]
        mov [si],al
        inc si
        add bp,2
        loop loop2
    
    
    mov [si],'$'
    mov sp,di
    reverse endp


ret

st db "hello from CSE19"
n equ ($-st)
