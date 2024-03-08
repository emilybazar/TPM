//
// Hash Test Vectors
//

TPM2B_TYPE(HASH_TEST_KEY, 128);  // Twice the largest digest size
TPM2B_HASH_TEST_KEY c_hashTestKey = {
    {128,
     {0xa0, 0xed, 0x5c, 0x9a, 0xd2, 0x4a, 0x21, 0x40, 0x1a, 0xd0, 0x81, 0x47, 0x39,
      0x63, 0xf9, 0x50, 0xdc, 0x59, 0x47, 0x11, 0x40, 0x13, 0x99, 0x92, 0xc0, 0x72,
      0xa4, 0x0f, 0xe2, 0x33, 0xe4, 0x63, 0x9b, 0xb6, 0x76, 0xc3, 0x1e, 0x6f, 0x13,
      0xee, 0xcc, 0x99, 0x71, 0xa5, 0xc0, 0xcf, 0x9a, 0x40, 0xcf, 0xdb, 0x66, 0x70,
      0x05, 0x63, 0x54, 0x12, 0x25, 0xf4, 0xe0, 0x1b, 0x23, 0x35, 0xe3, 0x70, 0x7d,
      0x19, 0x5f, 0x00, 0xe4, 0xf1, 0x61, 0x73, 0x05, 0xd8, 0x58, 0x7f, 0x60, 0x61,
      0x84, 0x36, 0xec, 0xbe, 0x96, 0x1b, 0x69, 0x00, 0xf0, 0x9a, 0x6e, 0xe3, 0x26,
      0x73, 0x0d, 0x17, 0x5b, 0x33, 0x41, 0x44, 0x9d, 0x90, 0xab, 0xd9, 0x6b, 0x7d,
      0x48, 0x99, 0x25, 0x93, 0x29, 0x14, 0x2b, 0xce, 0x93, 0x8d, 0x8c, 0xaf, 0x31,
      0x0e, 0x9c, 0x57, 0xd8, 0x5b, 0x57, 0x20, 0x1b, 0x9f, 0x2d, 0xa5}}};

TPM2B_TYPE(HASH_TEST_DATA, 256);  // Twice the largest block size
TPM2B_HASH_TEST_DATA c_hashTestData = {
    {256,
     {0x88, 0xac, 0xc3, 0xe5, 0x5f, 0x66, 0x9d, 0x18, 0x80, 0xc9, 0x7a, 0x9c, 0xa4,
      0x08, 0x90, 0x98, 0x0f, 0x3a, 0x53, 0x92, 0x4c, 0x67, 0x4e, 0xb7, 0x37, 0xec,
      0x67, 0x87, 0xb6, 0xbe, 0x10, 0xca, 0x11, 0x5b, 0x4a, 0x0b, 0x45, 0xc3, 0x32,
      0x68, 0x48, 0x69, 0xce, 0x25, 0x1b, 0xc8, 0xaf, 0x44, 0x79, 0x22, 0x83, 0xc8,
      0xfb, 0xe2, 0x63, 0x94, 0xa2, 0x3c, 0x59, 0x3e, 0x3e, 0xc6, 0x64, 0x2c, 0x1f,
      0x8c, 0x11, 0x93, 0x24, 0xa3, 0x17, 0xc5, 0x2f, 0x37, 0xcf, 0x95, 0x97, 0x8e,
      0x63, 0x39, 0x68, 0xd5, 0xca, 0xba, 0x18, 0x37, 0x69, 0x6e, 0x4f, 0x19, 0xfd,
      0x8a, 0xc0, 0x8d, 0x87, 0x3a, 0xbc, 0x31, 0x42, 0x04, 0x05, 0xef, 0xb5, 0x02,
      0xef, 0x1e, 0x92, 0x4b, 0xb7, 0x73, 0x2c, 0x8c, 0xeb, 0x23, 0x13, 0x81, 0x34,
      0xb9, 0xb5, 0xc1, 0x17, 0x37, 0x39, 0xf8, 0x3e, 0xe4, 0x4c, 0x06, 0xa8, 0x81,
      0x52, 0x2f, 0xef, 0xc9, 0x9c, 0x69, 0x89, 0xbc, 0x85, 0x9c, 0x30, 0x16, 0x02,
      0xca, 0xe3, 0x61, 0xd4, 0x0f, 0xed, 0x34, 0x1b, 0xca, 0xc1, 0x1b, 0xd1, 0xfa,
      0xc1, 0xa2, 0xe0, 0xdf, 0x52, 0x2f, 0x0b, 0x4b, 0x9f, 0x0e, 0x45, 0x54, 0xb9,
      0x17, 0xb6, 0xaf, 0xd6, 0xd5, 0xca, 0x90, 0x29, 0x57, 0x7b, 0x70, 0x50, 0x94,
      0x5c, 0x8e, 0xf6, 0x4e, 0x21, 0x8b, 0xc6, 0x8b, 0xa6, 0xbc, 0xb9, 0x64, 0xd4,
      0x4d, 0xf3, 0x68, 0xd8, 0xac, 0xde, 0xd8, 0xd8, 0xb5, 0x6d, 0xcd, 0x93, 0xeb,
      0x28, 0xa4, 0xe2, 0x5c, 0x44, 0xef, 0xf0, 0xe1, 0x6f, 0x38, 0x1a, 0x3c, 0xe6,
      0xef, 0xa2, 0x9d, 0xb9, 0xa8, 0x05, 0x2a, 0x95, 0xec, 0x5f, 0xdb, 0xb0, 0x25,
      0x67, 0x9c, 0x86, 0x7a, 0x8e, 0xea, 0x51, 0xcc, 0xc3, 0xd3, 0xff, 0x6e, 0xf0,
      0xed, 0xa3, 0xae, 0xf9, 0x5d, 0x33, 0x70, 0xf2, 0x11}}};

#if ALG_SHA1 == YES
TPM2B_TYPE(SHA1, 20);
TPM2B_SHA1 c_SHA1_digest = {
    {20, {0xee, 0x2c, 0xef, 0x93, 0x76, 0xbd, 0xf8, 0x91, 0xbc, 0xe6,
          0xe5, 0x57, 0x53, 0x77, 0x01, 0xb5, 0x70, 0x95, 0xe5, 0x40}}};
#endif

#if ALG_SHA256 == YES
TPM2B_TYPE(SHA256, 32);
TPM2B_SHA256 c_SHA256_digest = {
    {32, {0x64, 0xe8, 0xe0, 0xc3, 0xa9, 0xa4, 0x51, 0x49, 0x10, 0x55, 0x8d,
          0x31, 0x71, 0xe5, 0x2f, 0x69, 0x3a, 0xdc, 0xc7, 0x11, 0x32, 0x44,
          0x61, 0xbd, 0x34, 0x39, 0x57, 0xb0, 0xa8, 0x75, 0x86, 0x1b}}};
#endif

#if ALG_SHA384 == YES
TPM2B_TYPE(SHA384, 48);
TPM2B_SHA384 c_SHA384_digest = {
    {48, {0x37, 0x75, 0x29, 0xb5, 0x20, 0x15, 0x6e, 0xa3, 0x7e, 0xa3, 0x0d, 0xcd,
          0x80, 0xa8, 0xa3, 0x3d, 0xeb, 0xe8, 0xad, 0x4e, 0x1c, 0x77, 0x94, 0x5a,
          0xaf, 0x6c, 0xd0, 0xc1, 0xfa, 0x43, 0x3f, 0xc7, 0xb8, 0xf1, 0x01, 0xc0,
          0x60, 0xbf, 0xf2, 0x87, 0xe8, 0x71, 0x9e, 0x51, 0x97, 0xa0, 0x09, 0x8d}}};
#endif

#if ALG_SHA512 == YES
TPM2B_TYPE(SHA512, 64);
TPM2B_SHA512 c_SHA512_digest = {
    {64,
     {0xe2, 0x7b, 0x10, 0x3d, 0x5e, 0x48, 0x58, 0x44, 0x67, 0xac, 0xa3, 0x81, 0x8c,
      0x1d, 0xc5, 0x71, 0x66, 0x92, 0x8a, 0x89, 0xaa, 0xd4, 0x35, 0x51, 0x60, 0x37,
      0x31, 0xd7, 0xba, 0xe7, 0x93, 0x0b, 0x16, 0x4d, 0xb3, 0xc8, 0x34, 0x98, 0x3c,
      0xd3, 0x53, 0xde, 0x5e, 0xe8, 0x0c, 0xbc, 0xaf, 0xc9, 0x24, 0x2c, 0xcc, 0xed,
      0xdb, 0xde, 0xba, 0x1f, 0x14, 0x14, 0x5a, 0x95, 0x80, 0xde, 0x66, 0xbd}}};
#endif

TPM2B_TYPE(EMPTY, 1);

#if ALG_SM3_256 == YES
TPM2B_EMPTY c_SM3_256_digest = {{0, {0}}};
#endif

#if ALG_SHA3_256 == YES
TPM2B_EMPTY c_SHA3_256_digest = {{0, {0}}};
#endif

#if ALG_SHA3_384 == YES
TPM2B_EMPTY c_SHA3_384_digest = {{0, {0}}};
#endif

#if ALG_SHA3_512 == YES
TPM2B_EMPTY c_SHA3_512_digest = {{0, {0}}};
#endif
