#ifndef UTILS_H

#ifndef __WIN32
#define clean "clear"
#else
#define clean "cls"
#endif // !__WIN32

#define LIN 10
#define COL 10

void clear(void);
void iniciaTabuleiro(char[LIN][COL], unsigned char);
void display(char[LIN][COL], int, int);
int menuInicial(void);
void sobre(void);

#endif /*UTILS_H */
