// __ZN13codexmate_lib8platform13system_volume11device_name @ 0x1006a88d0 | 基线 same-set
void __fastcall codexmate_lib::platform::system_volume::device_name::hb85065e695927a9b(size_t *a1, AudioObjectID a2)
{
  OSStatus PropertyData; // eax
  Boolean CString; // r14
  __int64 v4; // rcx
  __m128i v5; // xmm0
  int v6; // edx
  __int64 v7; // rax
  __m128i v9; // xmm0
  unsigned __int8 epi8; // cl
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // dl
  unsigned __int8 v25; // dl
  __int64 v26; // rdx
  size_t v27; // rax
  const void *v28; // r15
  size_t v29; // r14
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // r12
  char buffer[16]; // [rsp+0h] [rbp-160h] BYREF
  _OWORD v34[15]; // [rsp+10h] [rbp-150h] BYREF
  _QWORD v35[2]; // [rsp+108h] [rbp-58h] BYREF
  size_t __n; // [rsp+118h] [rbp-48h]
  AudioObjectPropertyAddress inAddress; // [rsp+120h] [rbp-40h] BYREF
  UInt32 ioDataSize; // [rsp+12Ch] [rbp-34h] BYREF
  CFStringRef outData[6]; // [rsp+130h] [rbp-30h] BYREF

  *(_QWORD *)&inAddress.mSelector = 0x676C6F626C6E616DLL; /*0x1006a88fd*/
  inAddress.mElement = 0; /*0x1006a8901*/
  outData[0] = nullptr; /*0x1006a8908*/
  ioDataSize = 8; /*0x1006a8910*/
  PropertyData = AudioObjectGetPropertyData(a2, &inAddress, 0, nullptr, &ioDataSize, outData); /*0x1006a8929*/
  if ( PropertyData != 0 /*0x1006a89eb*/
    || outData[0] == nullptr
    || (memset(v34, 0, sizeof(v34)),
        *(_OWORD *)buffer = 0,
        CString = CFStringGetCString(outData[0], buffer, 256, 0x8000100u),
        CFRelease(outData[0]),
        !CString) )
  {
    *a1 = 0x8000000000000000LL; /*0x1006a8af7*/
  }
  else
  {
    v4 = 0xFFFFFFFFFFFFFFFLL; /*0x1006a89f1*/
    do /*0x1006a8a27*/
    {
      v5 = _mm_loadu_si128((const __m128i *)&v34[v4]); /*0x1006a8a00*/
      v6 = _mm_movemask_epi8(_mm_cmpeq_epi8(v5, (__m128i)0LL)); /*0x1006a8a11*/
      v7 = v4 * 16 + 16; /*0x1006a8a15*/
      if ( v6 ) /*0x1006a8a1b*/
        break; /*0x1006a8a1b*/
    }
    while ( v4++ != 14 ); /*0x1006a8a27*/
    if ( (_WORD)v6 ) /*0x1006a8a2c*/
    {
      v9 = _mm_and_si128(_mm_cmpeq_epi8(v5, (__m128i)0LL), (__m128i)xmmword_101601D80); /*0x1006a8a3a*/
      epi8 = _mm_extract_epi8(v9, 1); /*0x1006a8a42*/
      v11 = _mm_cvtsi128_si32(v9); /*0x1006a8a48*/
      if ( v11 > epi8 ) /*0x1006a8a4e*/
        epi8 = v11; /*0x1006a8a4e*/
      v12 = _mm_extract_epi8(v9, 2); /*0x1006a8a51*/
      if ( epi8 <= v12 ) /*0x1006a8a59*/
        epi8 = v12; /*0x1006a8a59*/
      v13 = _mm_extract_epi8(v9, 3); /*0x1006a8a5c*/
      if ( epi8 <= v13 ) /*0x1006a8a64*/
        epi8 = v13; /*0x1006a8a64*/
      v14 = _mm_extract_epi8(v9, 4); /*0x1006a8a67*/
      if ( epi8 <= v14 ) /*0x1006a8a6f*/
        epi8 = v14; /*0x1006a8a6f*/
      v15 = _mm_extract_epi8(v9, 5); /*0x1006a8a72*/
      if ( epi8 <= v15 ) /*0x1006a8a7a*/
        epi8 = v15; /*0x1006a8a7a*/
      v16 = _mm_extract_epi8(v9, 6); /*0x1006a8a7d*/
      if ( epi8 <= v16 ) /*0x1006a8a85*/
        epi8 = v16; /*0x1006a8a85*/
      v17 = _mm_extract_epi8(v9, 7); /*0x1006a8a88*/
      if ( epi8 <= v17 ) /*0x1006a8a90*/
        epi8 = v17; /*0x1006a8a90*/
      v18 = _mm_extract_epi8(v9, 8); /*0x1006a8a93*/
      if ( epi8 <= v18 ) /*0x1006a8a9b*/
        epi8 = v18; /*0x1006a8a9b*/
      v19 = _mm_extract_epi8(v9, 9); /*0x1006a8a9e*/
      if ( epi8 <= v19 ) /*0x1006a8aa6*/
        epi8 = v19; /*0x1006a8aa6*/
      v20 = _mm_extract_epi8(v9, 10); /*0x1006a8aa9*/
      if ( epi8 <= v20 ) /*0x1006a8ab1*/
        epi8 = v20; /*0x1006a8ab1*/
      v21 = _mm_extract_epi8(v9, 11); /*0x1006a8ab4*/
      if ( epi8 <= v21 ) /*0x1006a8abc*/
        epi8 = v21; /*0x1006a8abc*/
      v22 = _mm_extract_epi8(v9, 12); /*0x1006a8abf*/
      if ( epi8 <= v22 ) /*0x1006a8ac7*/
        epi8 = v22; /*0x1006a8ac7*/
      v23 = _mm_extract_epi8(v9, 13); /*0x1006a8aca*/
      if ( epi8 <= v23 ) /*0x1006a8ad2*/
        epi8 = v23; /*0x1006a8ad2*/
      v24 = _mm_extract_epi8(v9, 14); /*0x1006a8ad5*/
      if ( epi8 <= v24 ) /*0x1006a8add*/
        epi8 = v24; /*0x1006a8add*/
      v25 = _mm_extract_epi8(v9, 15); /*0x1006a8ae0*/
      if ( epi8 <= v25 ) /*0x1006a8ae8*/
        epi8 = v25; /*0x1006a8ae8*/
      v26 = v7 + (unsigned __int8)(16 - epi8); /*0x1006a8af2*/
    }
    else
    {
      v26 = 256; /*0x1006a8aff*/
    }
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v35, buffer, v26); /*0x1006a8b0f*/
    v27 = v35[0]; /*0x1006a8b14*/
    v28 = (const void *)v35[1]; /*0x1006a8b18*/
    v29 = __n; /*0x1006a8b1c*/
    if ( v35[0] == 0x8000000000000000LL ) /*0x1006a8b23*/
    {
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006a8b28*/
      {
        v30 = 0; /*0x1006a8b2a*/
        goto LABEL_43; /*0x1006a8b2a*/
      }
      if ( __n ) /*0x1006a8b38*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v35, buffer); /*0x1006a8b3a*/
        v30 = 1; /*0x1006a8b3f*/
        v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1); /*0x1006a8b4d*/
        if ( !v31 ) /*0x1006a8b55*/
LABEL_43:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v29); /*0x1006a8b2d*/
        v32 = v31; /*0x1006a8b57*/
      }
      else
      {
        v32 = 1; /*0x1006a8b5c*/
      }
      memcpy((void *)v32, v28, v29); /*0x1006a8b6b*/
      v27 = v29; /*0x1006a8b70*/
      v28 = (const void *)v32; /*0x1006a8b73*/
    }
    *a1 = v27; /*0x1006a8b76*/
    a1[1] = (size_t)v28; /*0x1006a8b79*/
    a1[2] = v29; /*0x1006a8b7d*/
  }
}