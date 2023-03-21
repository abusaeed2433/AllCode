


lea si, stt

mov cx,n2

here:
    mov ax, 0
    mov al, [si]
    push ax
    inc si 
    loop here

call stackReverse



stackReverse proc near
    
    lea si, st
    mov cx, n1
    
    loop1:
        mov tmpcx, cx
        
        
        lea di, stt
        mov j,0
        
        mov cx, n2
        loop2:
            mov al, [si]
            mov bl, [di]
            cmp al, bl
            
            jne cont:
            inc si
            inc di
            inc j
        
            loop loop2
        
        ; replace here
        
        
        sub si, n2
        
        mov cx, n2
        mov bp, sp
        sub bp, 2
        
        loop3:
            mov bx,0
            mov bx, [bp]
            mov [si], 'A';bl
            sub bp,2
            inc si
            cmp cx, 0
            jge np:
                mov cx,1h
                
            np:
                loop loop3
        
        cont:
            sub si,j    
            mov cx, tmpcx
            sub cx, j
            cmp cx,0
            jg next:
                mov cx,1h
            
            next: 
                loop loop1            
    
    
    ret
    stackReverse endp



ret
st db  "KUET CSE KUETab 2k19 KUET"
n1 equ ($-st)

stt db "KUET"
n2 equ ($-stt)


i dw 0
j dw 0
tmpcx dw 0