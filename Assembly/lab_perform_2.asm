             
lea si, str
mov cx,n

here:
    mov al,[si]
    cmp al,' '
    je cont
    
    cmp al,'a'
    je vowel
    
    cmp al, 'e'
    je vowel
    
    cmp al, 'i'
    je vowel
    
    cmp al, 'o'
    je vowel
    
    cmp al, 'u'
    je vowel
    
    jmp other
    
    vowel:
        lea di,arr
        inc [di]
        jmp cont
    other:
        lea di, arr
        inc di
        inc [di]
   cont:
        inc si
        loop here
      


ret
arr db 2 dup(0)
str db "this is kuet"
;str db "aaaaaa"
n equ ($-str)
