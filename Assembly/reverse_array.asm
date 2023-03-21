
lea si, ans
lea di, arr
add di,12

mov cx,7
here:      
    mov ax,[di]
    mov [si], ax
    add si,2
    sub di,2
    loop here


ret
ans dw 7 dup(0)
arr dw 1,3,5,7,9,11,12