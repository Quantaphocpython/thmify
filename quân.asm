name "hi-world"

; this example prints out  "hello world!"
; by writing directly to video memory.
; in vga memory: first byte is ascii character, byte that follows is character attribute.
; if you change the second byte, you can change the color of
; the character even after it is printed.
; character attribute is 8 bit value,
; high 4 bits set background color and low 4 bits set foreground color.

; hex    bin        color
; 
; 0      0000      black
; 1      0001      blue
; 2      0010      green
; 3      0011      cyan
; 4      0100      red
; 5      0101      magenta
; 6      0110      brown
; 7      0111      light gray
; 8      1000      dark gray
; 9      1001      light blue
; a      1010      light green
; b      1011      light cyan
; c      1100      light red
; d      1101      light magenta
; e      1110      yellow
; f      1111      white
 


org 100h

; set video mode    
mov ax, 3     ; text mode 80x25, 16 colors, 8 pages (ah=0, al=3)
int 10h       ; do it!

; cancel blinking and enable all 16 colors:
mov ax, 1003h
mov bx, 0
int 10h


; set segment register:
mov     ax, 0b800h
mov     ds, ax

; print "hello world"
; first byte is ascii code, second byte is color code.

mov [102h], 072

mov [106h], 101

mov [10ah], 108

mov [10eh], 108

mov [112h], 111

mov [116h], 044

mov [11Ah], 84
 
mov [11Eh], 114
           
mov [122h], 97

mov [126h], 110

mov [12Ah], 72

mov [12Eh], 111 

mov [132h], 97

mov [136h], 110

mov [13Ah], 103

mov [13Eh],  32

mov [142h], 81

mov [146h], 117

mov [14Ah], 97  

mov [14Eh], 110





; color all characters:
mov cx, 40  ; number of characters.
mov di, 103h ; start from byte after 'h'  
mov dl, 10h

c:  mov [di], 11111001b   ; light red(1100) on yellow(1110)
    add di, 2 ; skip over next ascii code in vga memory. 
    add DL, 4
    loop c

; wait for any key press:
mov ah, 0
int 16h

ret

