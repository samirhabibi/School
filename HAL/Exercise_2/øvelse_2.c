#include<errno.h>
#include <stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
# define BUF_SIZE 1024

int main (int argc, char *argv[]){

    int fd_sw1;
    int fd_led;
    char buf[128];
    int num_wr;
    int num_read;
    
    
    
    fd_sw1= open("/sys/class/gpio/gpio16/value", O_RDWR);
    fd_led= open("/sys/class/gpio/gpio20/value", O_RDWR);
    
    num_read = read(fd_sw1, buf, 16);
    
if(num_read==-1){
        
    printf("Failed to read with err: %s", strerror(errno));
    
    return num_read;


}

else if (num_read<16){
    
    printf("read less than requsted only %i byte",num_read);
    buf[num_read];
    printf("read: %s",buf);

    while(num_read==20){
        
        
        num_read= read(fd_sw1, buf,strlen(buf));
        
        num_wr= write(fd_led,buf,strlen(buf));
        
        printf("buf %s", buf);
        
        
        close(fd_sw1);
        close(fd_led);
        
    
    }
}
    
    
}












