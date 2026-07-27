// __ZN13codexmate_lib4core5relay17proxy_passthrough32copy_response_headers_to_builder @ 0x1002710d0 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::proxy_passthrough::copy_response_headers_to_builder::hd61c366e5f16a0e6(
        void *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  char *v12; // r12
  char *v13; // r12
  void *v14; // r15
  size_t v15; // rdx
  size_t v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int8 v19; // cl
  char v20; // al
  void *result; // rax
  _BYTE v22[112]; // [rsp+8h] [rbp-1D8h] BYREF
  _QWORD v23[14]; // [rsp+78h] [rbp-168h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-F8h] BYREF
  __int64 *v25; // [rsp+F0h] [rbp-F0h]
  __int64 *v26; // [rsp+F8h] [rbp-E8h]
  __int64 *v27; // [rsp+100h] [rbp-E0h]
  _QWORD *v28; // [rsp+108h] [rbp-D8h]
  __int64 *v29; // [rsp+110h] [rbp-D0h]
  __int64 v30; // [rsp+118h] [rbp-C8h]
  __int64 v31; // [rsp+120h] [rbp-C0h]
  __int64 v32; // [rsp+128h] [rbp-B8h]
  __int64 *v33; // [rsp+130h] [rbp-B0h]
  void *v34; // [rsp+138h] [rbp-A8h]
  __int64 v35; // [rsp+140h] [rbp-A0h]
  __int64 v36; // [rsp+148h] [rbp-98h]
  __int64 *v37; // [rsp+150h] [rbp-90h]
  __int64 *v38; // [rsp+158h] [rbp-88h]
  __int64 *v39; // [rsp+160h] [rbp-80h] BYREF
  _QWORD *v40; // [rsp+168h] [rbp-78h] BYREF
  __int64 *v41; // [rsp+170h] [rbp-70h]
  __int64 v42; // [rsp+178h] [rbp-68h]
  __int64 v43; // [rsp+180h] [rbp-60h] BYREF
  __int64 v44; // [rsp+188h] [rbp-58h]
  __int64 v45; // [rsp+190h] [rbp-50h]
  unsigned __int64 v46; // [rsp+198h] [rbp-48h]
  unsigned __int64 v47; // [rsp+1A0h] [rbp-40h]
  char **v48; // [rsp+1A8h] [rbp-38h]
  unsigned __int64 v49; // [rsp+1B0h] [rbp-30h]

  v34 = a1; /*0x1002710e7*/
  qmemcpy(v22, a3, sizeof(v22)); /*0x1002710fd*/
  v7 = a3 + 14; /*0x1002710fd*/
  v45 = a2[4]; /*0x100271104*/
  v49 = a2[5]; /*0x10027110f*/
  v8 = a2[8]; /*0x10027111a*/
  v47 = v8; /*0x10027111e*/
  v33 = (__int64 *)a2[7]; /*0x100271126*/
  v9 = 2 * (unsigned int)(v49 == 0); /*0x10027112d*/
  v10 = 0; /*0x100271130*/
  v48 = &off_101960160; /*0x10027113a*/
  while ( v9 != 2 ) /*0x1002711db*/
  {
    if ( v10 >= v49 ) /*0x100271204*/
      goto LABEL_34; /*0x100271204*/
    v11 = v45 + 104 * v10; /*0x10027120e*/
    if ( (v9 & 1) == 0 ) /*0x100271216*/
      goto LABEL_13; /*0x100271216*/
    v8 = v46; /*0x100271218*/
    if ( v46 >= v47 ) /*0x100271220*/
    {
      v10 = v46; /*0x100271420*/
      v49 = v47; /*0x100271427*/
      v48 = &off_101960178; /*0x100271432*/
LABEL_34:
      core::panicking::panic_bounds_check::h56740b1198b22635(v10, v49, v48, v8); /*0x100271436*/
    }
    v8 = 9 * v46; /*0x100271226*/
    a3 = v33; /*0x10027122a*/
    v12 = (char *)&v33[9 * v46]; /*0x100271231*/
    v9 = 2; /*0x100271235*/
    if ( v12[16] ) /*0x10027123b*/
    {
      v8 = *((_QWORD *)v12 + 3); /*0x100271242*/
      v46 = v8; /*0x100271247*/
      v9 = 1; /*0x10027124b*/
    }
    v13 = v12 + 32; /*0x100271251*/
    if ( *(_QWORD *)(v11 + 64) ) /*0x100271255*/
    {
LABEL_16:
      v14 = *(void **)(v11 + 72); /*0x100271294*/
      v16 = *(_QWORD *)(v11 + 80); /*0x100271298*/
      goto LABEL_17; /*0x100271298*/
    }
LABEL_12:
    v14 = (void *)http::header::name::StandardHeader::as_str::h29c468d187218f48( /*0x10027125c*/
                    *(unsigned int *)(v11 + 72),
                    v7,
                    a3,
                    v8,
                    a5,
                    a6);
    v16 = v15; /*0x100271267*/
LABEL_17:
    v7 = (__int64 *)v16; /*0x10027129c*/
    if ( (unsigned __int8)codexmate_lib::core::relay::proxy_passthrough::is_hop_by_hop_or_internal::h3ed1789462754bdd( /*0x1002712a2*/
                            v14,
                            v16) )
      continue; /*0x1002712a9*/
    http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(&v24, v14, v16, v8, a5, a6); /*0x1002712bc*/
    v17 = *((_QWORD *)v13 + 1); /*0x1002712c1*/
    a3 = *((__int64 **)v13 + 2); /*0x1002712c6*/
    if ( !a3 ) /*0x1002712ce*/
    {
LABEL_25:
      bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(v23, v17, a3); /*0x100271300*/
      v20 = 0; /*0x10027130c*/
      goto LABEL_26; /*0x10027130c*/
    }
    v18 = 0; /*0x1002712d0*/
    while ( 1 ) /*0x1002712ed*/
    {
      v19 = *(_BYTE *)(v17 + v18); /*0x1002712ed*/
      if ( v19 > 0x1Fu ) /*0x1002712f4*/
        break; /*0x1002712f4*/
      if ( v19 != 9 ) /*0x1002712e3*/
        goto LABEL_24; /*0x1002712e3*/
LABEL_21:
      if ( a3 == (__int64 *)++v18 ) /*0x1002712eb*/
        goto LABEL_25; /*0x1002712eb*/
    }
    if ( v19 != 127 ) /*0x1002712f9*/
      goto LABEL_21; /*0x1002712f9*/
LABEL_24:
    v20 = 2; /*0x1002712fb*/
LABEL_26:
    LOBYTE(v23[4]) = v20; /*0x10027130e*/
    v35 = v24; /*0x100271322*/
    v36 = (__int64)v25; /*0x100271329*/
    v37 = v26; /*0x100271337*/
    v38 = v27; /*0x100271345*/
    v39 = v28; /*0x100271353*/
    v7 = (__int64 *)&v40; /*0x10027135e*/
    v43 = v23[3]; /*0x100271362*/
    v42 = v23[2]; /*0x10027136d*/
    v41 = (__int64 *)v23[1]; /*0x10027137f*/
    v40 = (_QWORD *)v23[0]; /*0x100271383*/
    v44 = v23[4]; /*0x10027138d*/
    v8 = (unsigned __int8)v24; /*0x100271391*/
    LOBYTE(a3) = v24 | (v20 == 2); /*0x1002713a1*/
    if ( (_BYTE)a3 == 1 ) /*0x1002713a6*/
    {
      if ( !(_BYTE)v24 ) /*0x1002713ae*/
      {
        v8 = v36; /*0x1002713b0*/
        if ( v36 ) /*0x1002713ba*/
        {
          v7 = v37; /*0x1002713bc*/
          (*(void (__fastcall **)(__int64 **, __int64 *, __int64 *))(v36 + 32))(&v39, v37, v38); /*0x1002713ce*/
          v20 = v44; /*0x1002713d1*/
        }
      }
      if ( v20 != 2 ) /*0x1002713d7*/
      {
        v7 = v41; /*0x1002713e1*/
        ((void (__fastcall *)(__int64 *, __int64 *, __int64))v40[4])(&v43, v41, v42); /*0x1002713ed*/
      }
    }
    else
    {
      v27 = v39; /*0x100271154*/
      v26 = v38; /*0x10027115f*/
      v25 = v37; /*0x10027116e*/
      v24 = v36; /*0x100271175*/
      v32 = v44; /*0x100271187*/
      v31 = v43; /*0x10027118f*/
      v30 = v42; /*0x100271197*/
      v29 = v41; /*0x1002711a2*/
      v28 = v40; /*0x1002711a6*/
      http::response::Builder::and_then::h9467106c3dd9e2be(v23, v22, &v24); /*0x1002711c4*/
      qmemcpy(v22, v23, sizeof(v22)); /*0x1002711d4*/
      v7 = &v24; /*0x1002711d4*/
      v8 = 0; /*0x1002711d4*/
    }
  }
  if ( ++v10 < v49 ) /*0x1002711e4*/
  {
    v11 = v45 + 104 * v10; /*0x1002711ee*/
LABEL_13:
    v9 = 2; /*0x100271270*/
    if ( (*(_BYTE *)v11 & 1) != 0 ) /*0x100271279*/
    {
      v8 = *(_QWORD *)(v11 + 8); /*0x10027127b*/
      v46 = v8; /*0x10027127f*/
      v9 = 1; /*0x100271283*/
    }
    v13 = (char *)(v11 + 24); /*0x100271289*/
    if ( *(_QWORD *)(v11 + 64) ) /*0x10027128d*/
      goto LABEL_16; /*0x100271292*/
    goto LABEL_12; /*0x100271292*/
  }
  result = v34; /*0x100271401*/
  qmemcpy(v34, v22, 0x70u); /*0x10027140b*/
  return result; /*0x10027140e*/
}