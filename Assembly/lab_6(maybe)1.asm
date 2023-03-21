


call btd

;prime
mov al, ln


sub al,fn
mov cl,al

mov bl,fn
lea si,ans

here:
    mov tmp, bl
    mov cxtmp, cl
    call prime
    
    mov bl, tmp
    inc bl
    mov cl, cxtmp
    loop here
    
ret    


prime proc near
    ; data is in bx
    ;dec bx
    
    mov cl, bl
    mov bl,2
    
    start:
        mov al, tmp
        div bl
        cmp ah,0
        je exit
        
        inc bl
        loop start
    
    mov al,tmp
    mov [si],al
    inc si
    
    exit:
        ret
        prime endp


btd proc near
    
    lea si,st
       add si,n
    dec si
    mov ax,1
    
    mov cx, n

    lp:
    mov bl,[si]
    sub bl,48
   
    mov mlt,ax
    mul bl
    add bAns,ax
    mov ax,mlt
   
    mov bl,2
    mul bl
    dec si
    loop lp
    
    ret
    btd endp

ret

fn db 3
ln db 15
tmp db 0
cxtmp db 0
i db 0
ind db 0
;extra above

st db "10011001"
n equ ($-st)

ans db 15 dup(0)

bAns dw 0
mlt dw 0