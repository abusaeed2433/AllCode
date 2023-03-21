
; --- int output ---
mov dl, 'a'

mov ah, 2h
int 21h


; --- int input ---
mov ah, 1h
int 21h ; al = input in ascii


; --- string output --
mov dx, offset notice

mov ah, 09H
INT 21H
    
mov ah, 00h
INT 21H

ret
notice db "Hello world abc"