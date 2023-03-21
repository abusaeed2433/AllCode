mov cl,n1
lea si, st
lea di,ans

here:
    mov al,cnt
    cmp al,ind
    je exit:
  
    mov al, [si]
    mov [di],al
    inc di
    inc si
    
    inc cnt
    loop here

exit:

mov [di], ' '
inc di
mov cl, n2
lea si, sb
her:
    mov al, [si]
    mov [di], al
    inc si
    inc di
    loop her

mov [di], ' '
inc di

lea si, st
mov cnt,0


mov cl, n1
her2:
    mov al,cnt
    
    cmp al,ind
    jl cont
    mov al, [si]
    mov [di], al
    inc di
    
    cont:
        inc si
        inc cnt
        loop her2 
        
        

ret
st db "wekuet"
n1 equ ($-st)

sb db "love"
n2 equ ($-sb)

cnt db 0
ind db 4

mov al,n1
add al,n2
add al,ind

n db 0
mov n,al

ans db n dup(0)
