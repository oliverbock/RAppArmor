#include <R.h>
#include <Rinternals.h>
#include <Rinterface.h>
#include <R_ext/Rdynload.h>
#include <sys/apparmor.h>
#include <errno.h>

void aa_revert_hat_wrapper (int *ret, unsigned long* magic_token) {
  printf("Trying to revert AppArmor Hat...\n");
  char *nothing;    
  *ret = aa_change_hat (nothing,  (long) magic_token);  
  if(ret != 0){
    *ret = errno;
  }  
}


