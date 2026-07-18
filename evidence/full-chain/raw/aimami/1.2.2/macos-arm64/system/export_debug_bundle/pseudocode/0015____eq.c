// mac 1.2.2 NEW export_debug_bundle 0x100460450 d=1
int __fastcall _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // r14
  size_t v9; // r15
  void *v10; // rbx
  __int64 v11; // r12
  _QWORD v13[2]; // [rsp+0h] [rbp-170h] BYREF
  char v14; // [rsp+10h] [rbp-160h]
  __int64 v15; // [rsp+11h] [rbp-15Fh]
  __int64 v16; // [rsp+19h] [rbp-157h]
  __int64 v17; // [rsp+21h] [rbp-14Fh]
  _BYTE v18[15]; // [rsp+29h] [rbp-147h]
  unsigned __int16 v19; // [rsp+38h] [rbp-138h]
  unsigned __int8 v20; // [rsp+3Ah] [rbp-136h]
  _QWORD v21[2]; // [rsp+40h] [rbp-130h] BYREF
  char v22; // [rsp+50h] [rbp-120h]
  __int64 v23; // [rsp+51h] [rbp-11Fh]
  __int64 v24; // [rsp+59h] [rbp-117h]
  __int64 v25; // [rsp+61h] [rbp-10Fh]
  _BYTE v26[15]; // [rsp+69h] [rbp-107h]
  __int16 v27; // [rsp+78h] [rbp-F8h]
  char v28; // [rsp+7Ah] [rbp-F6h]
  void *__s2; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v30; // [rsp+88h] [rbp-E8h]
  char v31; // [rsp+90h] [rbp-E0h]
  __int64 v32; // [rsp+91h] [rbp-DFh]
  __int64 v33; // [rsp+99h] [rbp-D7h]
  __int64 v34; // [rsp+A1h] [rbp-CFh]
  _BYTE v35[15]; // [rsp+A9h] [rbp-C7h]
  unsigned __int16 v36; // [rsp+B8h] [rbp-B8h]
  unsigned __int8 v37; // [rsp+BAh] [rbp-B6h]
  void *__s1; // [rsp+C0h] [rbp-B0h] BYREF
  size_t __n; // [rsp+C8h] [rbp-A8h]
  char v40; // [rsp+D0h] [rbp-A0h]
  __int64 v41; // [rsp+D1h] [rbp-9Fh]
  __int64 v42; // [rsp+D9h] [rbp-97h]
  __int64 v43; // [rsp+E1h] [rbp-8Fh]
  _BYTE v44[15]; // [rsp+E9h] [rbp-87h]
  __int16 v45; // [rsp+F8h] [rbp-78h]
  char v46; // [rsp+FAh] [rbp-76h]
  __int64 v47; // [rsp+100h] [rbp-70h]
  __int64 v48; // [rsp+108h] [rbp-68h]
  __int64 v49; // [rsp+110h] [rbp-60h]
  _BYTE v50[15]; // [rsp+118h] [rbp-58h]
  __int64 v51; // [rsp+128h] [rbp-48h]
  __int64 v52; // [rsp+130h] [rbp-40h]
  __int64 v53; // [rsp+138h] [rbp-38h]
  _BYTE v54[15]; // [rsp+140h] [rbp-30h]

  std::path::Path::components::he8b0f71a48373be5(&__s1, a1, a2); /*0x100460475*/
  std::path::Path::components::he8b0f71a48373be5(&__s2, a3, a4); /*0x100460487*/
  v8 = __s1; /*0x10046048c*/
  v9 = __n; /*0x100460493*/
  v10 = __s2; /*0x10046049a*/
  v11 = v30; /*0x1004604a1*/
  if ( __n == v30 && (_BYTE)v45 == (_BYTE)v36 && HIBYTE(v45) == 2 && HIBYTE(v36) == 2 && !memcmp(__s1, __s2, __n) ) /*0x1004604d8*/
    return 1; /*0x100460648*/
  if ( v40 != 6 ) /*0x1004604e7*/
  {
    *(_QWORD *)&v54[7] = *(_QWORD *)&v44[7]; /*0x1004604ed*/
    *(_QWORD *)v54 = *(_QWORD *)v44; /*0x1004604f8*/
    v53 = v43; /*0x100460503*/
    v52 = v42; /*0x100460515*/
    v51 = v41; /*0x100460519*/
  }
  v21[0] = v8; /*0x100460525*/
  v21[1] = v9; /*0x10046052c*/
  v22 = v40; /*0x100460533*/
  v23 = v51; /*0x100460541*/
  v24 = v52; /*0x100460548*/
  v25 = v53; /*0x100460553*/
  *(_QWORD *)v26 = *(_QWORD *)v54; /*0x10046055e*/
  *(_QWORD *)&v26[7] = *(_QWORD *)&v54[7]; /*0x100460569*/
  v27 = v45; /*0x100460570*/
  v28 = v46; /*0x100460577*/
  if ( v31 != 6 ) /*0x100460586*/
  {
    *(_QWORD *)&v50[7] = *(_QWORD *)&v35[7]; /*0x10046058f*/
    *(_QWORD *)v50 = *(_QWORD *)v35; /*0x10046059a*/
    v49 = v34; /*0x1004605a5*/
    v48 = v33; /*0x1004605b7*/
    v47 = v32; /*0x1004605bb*/
  }
  v13[0] = v10; /*0x1004605cd*/
  v13[1] = v11; /*0x1004605d4*/
  v14 = v31; /*0x1004605db*/
  v15 = v47; /*0x1004605e9*/
  v16 = v48; /*0x1004605f0*/
  v17 = v49; /*0x1004605fb*/
  *(_QWORD *)v18 = *(_QWORD *)v50; /*0x100460606*/
  *(_QWORD *)&v18[7] = *(_QWORD *)&v50[7]; /*0x100460611*/
  v19 = v36; /*0x100460618*/
  v20 = v37; /*0x10046061f*/
  return ((__int64 (__fastcall *)(_QWORD *, _QWORD *, _QWORD, _QWORD, __int64, __int64))core::iter::traits::iterator::Iterator::eq_by::h503c0ee61ddcdabe)( /*0x100460638*/
           v21,
           v13,
           v36,
           v37,
           v6,
           v7);
}