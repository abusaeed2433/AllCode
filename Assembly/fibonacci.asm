
lea si, ans
mov ax,0 
    mov [si], ax
    add si,2

mov ax,1 
    mov [si], ax
    

call fibo

lea si, ans
add si, nth
    add si, nth
    sub si, 2
   
    
mov ax, [si]
ret
    


fibo proc near
    
    mov ax,i
    
    cmp ax, nth
    jg exit:
    
    lea si, ans
    add si, i
    add si, i
    
    sub si,2
        mov ax, [si]

    sub si,2
        mov bx, [si]

    add si,4
        add ax,bx
        mov [si],ax
    
    inc i
    call fibo
    
    
    exit:
    
    ret
    fibo endp


ret

nth dw 10
i dw 2
ans dw dup(0)

; 0 1 1 2 '3' 5 8 13 21