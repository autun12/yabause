#include "glsym/glsym.h"

#if defined(HAVE_GLES)
RGLSYMGLMEMORYBARRIERPROC __rglgen_glMemoryBarrier;
RGLSYMGLBINDFRAGDATALOCATIONPROC __rglgen_glBindFragDataLocation;
RGLSYMGLPATCHPARAMETERIPROC __rglgen_glPatchParameteri;
#elif !defined(_OGLES3_)
RGLSYMGLTEXTUREBARRIERNVPROC __rglgen_glTextureBarrierNV;
#endif
