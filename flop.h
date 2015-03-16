#ifndef __FLOP_H__
#define __FLOP_H__

int fd;
unsigned short bytes_per_sector;
unsigned short num_of_sectors;
unsigned short fatbytes;
unsigned short cluster;
char *fat_buffer;

void help(void);
void fmount(const char *);
void fumount();
void structure();
void traverse(char*);
void show_sector();
void show_fat();
void output_redirection(int, char, char*, void);
void output_redirection2(int, char, char*, void);
void output_redirection3(int, char, char*, void);

#endif
