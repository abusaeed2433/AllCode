mov ax,n1
cmp ax,n2
jne res

lea si, st
lea di, stt
mov cx,n1
cld
repe cmpsb

dec si
dec di
cmp cx,0
jne res

mov al,[si]
cmp al,[di]
jne res

mov ax, 'E'
ret

res:
    mov ax,'N'

ret
st db "kuet"
n1 equ ($-st)

stt db "kuet"
n2 equ ($-stt)
