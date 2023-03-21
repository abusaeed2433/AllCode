;copy string & replace 'o' with '0'

lea si, st
lea di, ans
mov cx, n1

;way-1
;cld
;rep movsb

;way-2
;cld idiot, not working
here:
    mov al,[si]
    cmp al, 'o'
    jne cont
        mov al,'0'
    cont:
        mov [di],al
    inc si
    inc di
    loop here
    


ret
st db "kuetos"
n1 equ ($-st)
ans db n1 dup(0)
