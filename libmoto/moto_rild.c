#include <stdint.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>
#include <utils/Log.h>
#include <cutils/jstring.h>

extern int _ZN7android6Parcel13writeString16EPKDsj(const char16_t* str, size_t len);
int _ZN7android6Parcel13writeString16EPKtj(uint16_t* str, size_t len){
    return _ZN7android6Parcel13writeString16EPKDsj((const char16_t*)str, len); 
}
