/* WARNING! All changes made to this file will be lost! */

#ifndef W_CONFIG_H_WAF
#define W_CONFIG_H_WAF

#define DEFAULT_DVD_DEVICE "/dev/sr0"
#define DEFAULT_CDROM_DEVICE "/dev/sr0"
#define HAVE_LGPL 0
#define HAVE_GPL 1
#define HAVE_CPLAYER 1
#define HAVE_LIBMPV_SHARED 0
#define HAVE_LIBMPV_STATIC 0
#define HAVE_STATIC_BUILD 0
#define HAVE_BUILD_DATE 1
#define HAVE_OPTIMIZE 1
#define HAVE_DEBUG_BUILD 1
#define HAVE_TESTS 0
#define HAVE_TA_LEAK_REPORT 0
#define HAVE_HTML_BUILD 0
#define HAVE_PDF_BUILD 0
#define HAVE_LIBDL 1
#define HAVE_CPLUGINS 1
#define HAVE_ASM 1
#define HAVE_CLANG_DATABASE 0
#define HAVE_SWIFT_STATIC 0
#define HAVE_NOEXECSTACK 0
#define HAVE_LIBM 1
#define HAVE_MINGW 0
#define HAVE_POSIX 1
#define HAVE_ANDROID 0
#define HAVE_TVOS 0
#define HAVE_EGL_ANDROID 0
#define HAVE_POSIX_OR_MINGW 1
#define HAVE_SWIFT 0
#define HAVE_UWP 0
#define HAVE_WIN32_DESKTOP 0
#define HAVE_WIN32_INTERNAL_PTHREADS 0
#define HAVE_PTHREADS 1
#define HAVE_PTHREAD_DEBUG 0
#define HAVE_STDATOMIC 1
#define HAVE_LIBRT 1
#define HAVE_ICONV 1
#define HAVE_DOS_PATHS 0
#define HAVE_GLOB_POSIX 1
#define HAVE_GLOB_WIN32 0
#define HAVE_GLOB 1
#define HAVE_VT_H 1
#define HAVE_CONSIO_H 0
#define HAVE_GBM_H 1
#define HAVE_GLIBC_THREAD_NAME 1
#define HAVE_OSX_THREAD_NAME 0
#define HAVE_BSD_THREAD_NAME 0
#define HAVE_BSD_FSTATFS 0
#define HAVE_LINUX_FSTATFS 1
#define HAVE_LINUX_INPUT_EVENT_CODES 1
#define HAVE_LUA 0
#define HAVE_JAVASCRIPT 0
#define HAVE_LIBASS 1
#define HAVE_ZLIB 1
#define HAVE_LIBBLURAY 1
#define HAVE_DVDNAV 0
#define HAVE_CDDA 0
#define HAVE_UCHARDET 1
#define HAVE_RUBBERBAND 1
#define HAVE_ZIMG 0
#define HAVE_LCMS2 1
#define HAVE_VAPOURSYNTH 0
#define HAVE_LIBARCHIVE 0
#define HAVE_DVBIN 0
#define HAVE_SDL2 0
#define HAVE_SDL2_GAMEPAD 0
#define HAVE_FFMPEG 1
#define HAVE_LIBAVDEVICE 1
#define HAVE_FFMPEG_STRICT_ABI 0
#define HAVE_SDL2_AUDIO 0
#define HAVE_PULSE 1
#define HAVE_JACK 1
#define HAVE_OPENAL 0
#define HAVE_OPENSLES 0
#define HAVE_ALSA 1
#define HAVE_COREAUDIO 0
#define HAVE_AUDIOUNIT 0
#define HAVE_WASAPI 0
#define HAVE_SDL2_VIDEO 0
#define HAVE_COCOA 0
#define HAVE_DRM 1
#define HAVE_GBM 1
#define HAVE_WAYLAND_PROTOCOLS 1
#define HAVE_WAYLAND 1
#define HAVE_MEMFD_CREATE 1
#define HAVE_X11 1
#define HAVE_XV 1
#define HAVE_GL_COCOA 0
#define HAVE_GL_X11 0
#define HAVE_RPI 0
#define HAVE_EGL 1
#define HAVE_EGL_X11 1
#define HAVE_EGL_DRM 1
#define HAVE_GL_WAYLAND 1
#define HAVE_GL_WIN32 0
#define HAVE_GL_DXINTEROP 0
#define HAVE_EGL_ANGLE 0
#define HAVE_EGL_ANGLE_LIB 0
#define HAVE_EGL_ANGLE_WIN32 0
#define HAVE_VDPAU 1
#define HAVE_VDPAU_GL_X11 0
#define HAVE_VAAPI 1
#define HAVE_VAAPI_X11 1
#define HAVE_VAAPI_WAYLAND 1
#define HAVE_VAAPI_DRM 1
#define HAVE_VAAPI_X_EGL 1
#define HAVE_VAAPI_EGL 1
#define HAVE_CACA 1
#define HAVE_JPEG 1
#define HAVE_DIRECT3D 0
#define HAVE_SHADERC_SHARED 0
#define HAVE_SHADERC_STATIC 0
#define HAVE_SHADERC 0
#define HAVE_SPIRV_CROSS_SHARED 0
#define HAVE_SPIRV_CROSS_STATIC 0
#define HAVE_SPIRV_CROSS 0
#define HAVE_D3D11 0
#define HAVE_IOS_GL 0
#define HAVE_PLAIN_GL 0
#define HAVE_GL 1
#define HAVE_LIBPLACEBO 0
#define HAVE_VULKAN 0
#define HAVE_VAAPI_VULKAN 0
#define HAVE_EGL_HELPERS 1
#define HAVE_SIXEL 0
#define HAVE_VIDEOTOOLBOX_HWACCEL 0
#define HAVE_VIDEOTOOLBOX_GL 0
#define HAVE_D3D_HWACCEL 0
#define HAVE_D3D9_HWACCEL 0
#define HAVE_GL_DXINTEROP_D3D9 0
#define HAVE_FFNVCODEC 0
#define HAVE_CUDA_HWACCEL 0
#define HAVE_CUDA_INTEROP 0
#define HAVE_RPI_MMAL 0
#define HAVE_WIN32_EXECUTABLE 0
#define HAVE_MACOS_TOUCHBAR 0
#define HAVE_MACOS_10_11_FEATURES 0
#define HAVE_MACOS_10_12_2_FEATURES 0
#define HAVE_MACOS_10_14_FEATURES 0
#define HAVE_MACOS_MEDIA_PLAYER 0
#define HAVE_MACOS_COCOA_CB 0
#define CONFIGURATION "./waf configure --disable-lua"
#define MPV_CONFDIR "/usr/local/etc/mpv"
#define FULLCONFIG "alsa asm build-date caca cplayer cplugins debug-build drm egl egl-drm egl-helpers egl-x11 ffmpeg gbm gbm.h gl gl-wayland glibc-thread-name glob glob-posix gpl iconv jack jpeg lcms2 libass libavdevice libbluray libdl libm librt linux-fstatfs linux-input-event-codes memfd_create optimize posix posix-or-mingw pthreads pulse rubberband stdatomic uchardet vaapi vaapi-drm vaapi-egl vaapi-wayland vaapi-x-egl vaapi-x11 vdpau vt.h wayland wayland-protocols x11 xv zlib"

//lmh
//#include <math.h>
//# define SA_RESTART   0x10000000
//# define RTLD_DEFAULT   ((void *) 0)
//# define O_CLOEXEC   02000000
//# define M_SQRT2	1.41421356237309504880	/* sqrt(2) */
//# define M_LN10		2.30258509299404568402	/* log_e 10 */
//# define M_PI		3.14159265358979323846	/* pi */
#endif /* W_CONFIG_H_WAF */
