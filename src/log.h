#ifndef LOG_H_
#define LOG_H_

#define Log_BUFFER_SIZE 8192
extern char Log_buffer[Log_BUFFER_SIZE];

#ifndef __QNXNTO__
void Log_print(char *format, ...);
#else
#define Log_print(...) fprintf(stderr,__VA_ARGS__)
#endif

void Log_flushlog(void);

#endif /* LOG_H_ */
