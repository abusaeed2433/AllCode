    
call maxOccurrence    
call caseChange    
ret


maxOccurrence proc near
    lea si,st
    mov cx,n
    
    here:
        mov al,[si]
        sub al,65
        cmp al,0
        jl cont:
        
        lea di,ans
        mov ah,0
        add di,ax
        inc [di]
        
        cont:
            inc si
        loop here
    
    lea si,ans
    
    h2:
        mov al,[si]
        cmp al,mx
        jle cont2:
        mov mx,al
        mov al,i
        add al,65
        mov mxCh,al
        
        cont2:
            inc si
            inc i
    
    ret
    maxOccurrence endp



caseChange proc near
    
    lea si, stt
    mov cx, n1
    he:
        mov al,[si]
        cmp al,' '
        je cont3:
        cmp al,'a'
        jl stoc:
        
        sub al,32
        mov [si],al
        jmp cont3:
        
        
        stoc:
            add al,32
            mov [si],al
            jmp cont3:
        
        cont3:
            inc si
            loop he
            
    ret
    caseChange endp


ret
st db "AB CDEF AAAAAA"
n equ ($-st)

ans db 26 dup(0)
i db 0
mx db 0
mxCh db 0

stt db "AB abcd CD"
n1 equ ($-stt)


    