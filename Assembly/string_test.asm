

mov cx, n
mov si, offset st
mov di, offset st2

cld
repe cmpsb

cmp cx,0
jg exit

mov dl,'E'
jmp print

exit:
    mov dl,'N'

print:    
    mov ah,2h
    int 21h


ret
st db "kuet"
n equ ($-st)

st2 db 'keet'
n2 equ ($-st2)