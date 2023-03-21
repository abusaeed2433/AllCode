
st db "ABC"
n equ ($-st)

ans db dup(0)


lea si, st
lea di, ans
mov cx, n

loop1:
    push [si]
    inc si
    loop loop1


mov cx, n
mov bp, sp
loop2:
    mov al, [bp]
    mov [di], al
    inc di
    add bp,2
    loop loop2


