
// FILE GENERATED BY TpmExtractCode: DO NOT EDIT

#if CC_AC_GetCapability  // Command must be enabled

#  ifndef _TPM_INCLUDE_PRIVATE_PROTOTYPES_AC_GETCAPABILITY_FP_H_
#    define _TPM_INCLUDE_PRIVATE_PROTOTYPES_AC_GETCAPABILITY_FP_H_

// Input structure definition
typedef struct
{
    TPMI_RH_AC ac;
    TPM_AT     capability;
    UINT32     count;
} AC_GetCapability_In;

// Output structure definition
typedef struct
{
    TPMI_YES_NO          moreData;
    TPML_AC_CAPABILITIES capabilitiesData;
} AC_GetCapability_Out;

// Response code modifiers
#    define RC_AC_GetCapability_ac         (TPM_RC_H + TPM_RC_1)
#    define RC_AC_GetCapability_capability (TPM_RC_P + TPM_RC_1)
#    define RC_AC_GetCapability_count      (TPM_RC_P + TPM_RC_2)

// Function prototype
TPM_RC
TPM2_AC_GetCapability(AC_GetCapability_In* in, AC_GetCapability_Out* out);

#  endif  // _TPM_INCLUDE_PRIVATE_PROTOTYPES_AC_GETCAPABILITY_FP_H_
#endif    // CC_AC_GetCapability
