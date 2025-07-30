// init: The initial user-level program

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

char *argv[] = { "sh", 0 };

int
main(void)
{
  if(open("console", O_RDWR) < 0){
    mknod("console", 1, 1);
    open("console", O_RDWR);
  }
  dup(0);  // stdout
  dup(0);  // stderr

  char *argv[] = { "audit", 0 };

  // Jalankan audit sebagai PID 1 (tanpa fork)
  exec("audit", argv);
  printf(1, "exec audit failed\n");

  // Jika berhasil, proses PID 1 sekarang adalah audit
  // Setelah selesai, audit harus langsung exec ke sh
  // (JANGAN call exit())

  argv[0] = "sh";
  exec("sh", argv);
  printf(1, "exec sh failed\n");
  while(1); // jangan exit
}


