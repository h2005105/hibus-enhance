#ifndef __HIBUS_BUSYBOX_HELPER__
#define __HIBUS_BUSYBOX_HELPER__

#define SOCKET_PATH				"/var/tmp/hibus.sock"
#define APP_NAME_HIBUS       	"cn.fmsoft.hybridos.hibus"
#define RUNNER_NAME_BUSYBOX    	"busybox"


// structure for user
struct _hibus_user
{
    int fd;
	hibus_conn *context;
    void *data;
};

typedef struct _hibus_user	hibus_user;

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#endif  // __HIBUS_BUSYBOX_HELPER__
