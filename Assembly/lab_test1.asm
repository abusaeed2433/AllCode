lea si, arr
lea di, ans
add si,18

mov bx,3
mov cx,10
lab:
    mov ax, [si]
    mov dx, 0h
    div bx
    
    cmp dx,0h
    jne next 
    mov ax, [si]
    mov [di],ax
    add di,2
    
    next:
        sub si,2
    loop lab
        
ret
ans dw 10 dup(0)
arr dw 1,4,3,7,9,12,16,15,13,27


