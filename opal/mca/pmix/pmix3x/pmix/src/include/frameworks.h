/*
 * This file is autogenerated by autogen.pl. Do not edit this file by hand.
 */
#ifndef PMIX_FRAMEWORKS_H
#define PMIX_FRAMEWORKS_H

#include <pmix/mca/base/mca_base_framework.h>

extern pmix_mca_base_framework_t pmix_src_base_framework;
extern pmix_mca_base_framework_t pmix_pdl_base_framework;
extern pmix_mca_base_framework_t pmix_pinstalldirs_base_framework;

static pmix_mca_base_framework_t *pmix_frameworks[] = {
    &pmix_src_base_framework,
    &pmix_pdl_base_framework,
    &pmix_pinstalldirs_base_framework,
    NULL
};

#endif /* PMIX_FRAMEWORKS_H */

