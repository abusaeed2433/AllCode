
call fact

ret

fact proc near
    mov ax, n
    cmp ax,0
    jle exit:
        
        mov ax, ans
            mul n
            mov ans, ax
        dec n
        call fact
        
    
    exit:
        ret
        fact endp

ret
n dw 7
ans dw 1
