cmd_/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux/include/drm/.install := perl scripts/headers_install.pl /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux/include/drm x86   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/drm_fourcc.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/drm_mode.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/drm_sarea.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/exynos_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/i810_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/i915_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/mga_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/nouveau_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/r128_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/radeon_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/savage_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/sis_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/via_drm.h   /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux-3.9.4/include/uapi/drm/vmwgfx_drm.h ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux/include/drm/$$F; done; touch /home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/linux/include/drm/.install