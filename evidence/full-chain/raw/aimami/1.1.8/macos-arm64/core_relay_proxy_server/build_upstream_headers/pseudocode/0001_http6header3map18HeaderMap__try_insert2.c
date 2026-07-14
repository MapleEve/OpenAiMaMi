// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1005f41c0 depth=1
__int64 __fastcall http::header::map::HeaderMap$LT$T$GT$::try_insert2::hbabe0e5ec6db380c(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 result; // rax
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // r13
  unsigned __int64 i; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int16 v16; // ax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int16 v30; // r14
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  bool v33; // bl
  bool v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r14
  bool v38; // bl
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  __int16 v42; // r9
  bool v43; // r8
  __int16 v44; // di
  __int16 v45; // r8
  char **v46; // rdx
  __int64 v47; // [rsp+0h] [rbp-90h] BYREF
  __int64 v48; // [rsp+8h] [rbp-88h]
  __int64 v49; // [rsp+10h] [rbp-80h]
  __int64 v50; // [rsp+18h] [rbp-78h]
  __int64 v51; // [rsp+20h] [rbp-70h] BYREF
  __int64 v52; // [rsp+28h] [rbp-68h]
  __int64 v53; // [rsp+30h] [rbp-60h]
  __int64 v54; // [rsp+38h] [rbp-58h]
  __int64 v55; // [rsp+40h] [rbp-50h]
  __int64 v56; // [rsp+48h] [rbp-48h]
  __int64 *v57; // [rsp+50h] [rbp-40h]
  unsigned int v58; // [rsp+5Ch] [rbp-34h]
  __int64 *v59; // [rsp+60h] [rbp-30h]

  if ( (unsigned __int8)http::header::map::HeaderMap$LT$T$GT$::try_reserve_one::hf53f395e7cfa8488(a2) ) /*0x1005f41e0*/
  {
    *(_BYTE *)(a1 + 32) = 3; /*0x1005f41e9*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a4 + 32))(a4 + 3, a4[1], a4[2]); /*0x1005f4202*/
    result = *a3; /*0x1005f4205*/
    if ( *a3 ) /*0x1005f4205*/
      return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(result + 32))(a3 + 3, a3[1], a3[2]); /*0x1005f422f*/
    return result; /*0x1005f422f*/
  }
  v8 = http::header::map::hash_elem_using::h264a804aff6cac0b(a2, a3); /*0x1005f4237*/
  v57 = a4; /*0x1005f423c*/
  v59 = a3; /*0x1005f4240*/
  v56 = a1; /*0x1005f4244*/
  v11 = *(_WORD *)(a2 + 88); /*0x1005f4248*/
  v58 = v8; /*0x1005f424d*/
  v12 = v8 & v11; /*0x1005f4253*/
  for ( i = 0; ; ++i ) /*0x1005f4257*/
  {
    if ( v12 >= *(_QWORD *)(a2 + 80) ) /*0x1005f427a*/
    {
      while ( !*(_QWORD *)(a2 + 80) ) /*0x1005f4283*/
        ; /*0x1005f4280*/
      v12 = 0; /*0x1005f4285*/
    }
    v14 = *(_QWORD *)(a2 + 72); /*0x1005f4288*/
    v15 = *(unsigned __int16 *)(v14 + 4 * v12); /*0x1005f428c*/
    if ( v15 == 0xFFFF ) /*0x1005f4298*/
    {
      v27 = *(_QWORD *)(a2 + 40); /*0x1005f4416*/
      v50 = v59[3]; /*0x1005f4422*/
      v49 = v59[2]; /*0x1005f442a*/
      v28 = *v59; /*0x1005f442e*/
      v48 = v59[1]; /*0x1005f4435*/
      v47 = v28; /*0x1005f443c*/
      v55 = v57[4]; /*0x1005f444b*/
      v54 = v57[3]; /*0x1005f4453*/
      v53 = v57[2]; /*0x1005f445b*/
      v29 = *v57; /*0x1005f445f*/
      v52 = v57[1]; /*0x1005f4466*/
      v51 = v29; /*0x1005f446a*/
      v30 = v58; /*0x1005f447c*/
      if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64 *))http::header::map::HeaderMap$LT$T$GT$::try_insert_entry::he020b61bf8b0dc5e)( /*0x1005f4483*/
                              a2,
                              v58,
                              &v47,
                              &v51) )
      {
LABEL_29:
        result = v56; /*0x1005f453d*/
        *(_BYTE *)(v56 + 32) = 3; /*0x1005f4541*/
        return result; /*0x1005f4541*/
      }
      v31 = *(_QWORD *)(a2 + 80); /*0x1005f4490*/
      if ( v12 >= v31 ) /*0x1005f4497*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v12, v31, (__int64)&off_101534998); /*0x1005f4618*/
      v32 = *(_QWORD *)(a2 + 72); /*0x1005f449d*/
      *(_WORD *)(v32 + 4 * v12) = v27; /*0x1005f44a1*/
      *(_WORD *)(v32 + 4 * v12 + 2) = v30; /*0x1005f44a6*/
LABEL_27:
      result = v56; /*0x1005f44ac*/
      *(_BYTE *)(v56 + 32) = 2; /*0x1005f44b0*/
      return result; /*0x1005f44b4*/
    }
    v16 = *(_WORD *)(v14 + 4 * v12 + 2); /*0x1005f429e*/
    if ( (*(unsigned __int16 *)(a2 + 88) & ((unsigned int)v12 - (unsigned __int16)(*(_WORD *)(a2 + 88) & v16))) < i ) /*0x1005f42b7*/
    {
      v33 = i >= 0x200; /*0x1005f44c0*/
      v34 = *(_QWORD *)a2 != 2; /*0x1005f44c7*/
      v50 = v59[3]; /*0x1005f44d3*/
      v49 = v59[2]; /*0x1005f44db*/
      v35 = *v59; /*0x1005f44df*/
      v48 = v59[1]; /*0x1005f44e6*/
      v47 = v35; /*0x1005f44ed*/
      v55 = v57[4]; /*0x1005f44fc*/
      v54 = v57[3]; /*0x1005f4504*/
      v53 = v57[2]; /*0x1005f450c*/
      v36 = *v57; /*0x1005f4510*/
      v52 = v57[1]; /*0x1005f4517*/
      v51 = v36; /*0x1005f451b*/
      v37 = *(_QWORD *)(a2 + 40); /*0x1005f451f*/
      if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64 *, __int64, __int64))http::header::map::HeaderMap$LT$T$GT$::try_insert_entry::he020b61bf8b0dc5e)( /*0x1005f4534*/
                              a2,
                              v58,
                              &v47,
                              &v51,
                              v9,
                              v10) )
        goto LABEL_29; /*0x1005f453b*/
      v38 = v34 && v33; /*0x1005f4554*/
      v39 = *(_QWORD *)(a2 + 72); /*0x1005f4557*/
      v40 = *(_QWORD *)(a2 + 80); /*0x1005f455b*/
      v41 = 0; /*0x1005f4561*/
      v42 = v58; /*0x1005f4563*/
      while ( 1 ) /*0x1005f457a*/
      {
        v43 = v12 < v40; /*0x1005f457a*/
        if ( v12 >= v40 ) /*0x1005f457e*/
          v12 = 0; /*0x1005f457e*/
        if ( v40 == 0 && !v43 ) /*0x1005f4582*/
        {
          while ( 1 ) /*0x1005f45c0*/
            ; /*0x1005f45c0*/
        }
        v44 = *(_WORD *)(v39 + 4 * v12); /*0x1005f4587*/
        if ( v44 == -1 ) /*0x1005f4590*/
          break; /*0x1005f4590*/
        ++v41; /*0x1005f4592*/
        v45 = *(_WORD *)(v39 + 4 * v12 + 2); /*0x1005f4595*/
        *(_WORD *)(v39 + 4 * v12) = v37; /*0x1005f459b*/
        *(_WORD *)(v39 + 4 * v12++ + 2) = v42; /*0x1005f45a0*/
        v42 = v45; /*0x1005f45a9*/
        LOWORD(v37) = v44; /*0x1005f45ac*/
      }
      *(_WORD *)(v39 + 4 * v12) = v37; /*0x1005f45c2*/
      *(_WORD *)(v39 + 4 * v12 + 2) = v42; /*0x1005f45c7*/
      if ( (v41 > 0x7F || v38) && !*(_QWORD *)a2 ) /*0x1005f45df*/
        *(_QWORD *)a2 = 1; /*0x1005f45e9*/
      goto LABEL_27; /*0x1005f45f0*/
    }
    if ( v16 != (_WORD)v58 ) /*0x1005f42c1*/
      goto LABEL_6; /*0x1005f42c1*/
    v17 = *(_QWORD *)(a2 + 40); /*0x1005f42c3*/
    if ( v17 <= v15 ) /*0x1005f42ca*/
      core::panicking::panic_bounds_check::h56740b1198b22635(v15, v17, (__int64)&off_101534980); /*0x1005f4607*/
    v18 = *(_QWORD *)(a2 + 32); /*0x1005f42d0*/
    v19 = 104 * v15; /*0x1005f42d4*/
    v20 = *(_QWORD *)(v18 + 104 * v15 + 64); /*0x1005f42d8*/
    if ( (v20 != 0) == (*v59 == 0) ) /*0x1005f42f2*/
      goto LABEL_6; /*0x1005f42f2*/
    if ( v20 ) /*0x1005f4300*/
      break; /*0x1005f4300*/
    if ( *(_BYTE *)(v18 + v19 + 72) == *((_BYTE *)v59 + 8) ) /*0x1005f4267*/
      goto LABEL_18; /*0x1005f4267*/
LABEL_6:
    ++v12; /*0x1005f4273*/
  }
  if ( !(unsigned __int8)_$LT$bytes..bytes..Bytes$u20$as$u20$core..cmp..PartialEq$GT$::eq::hc013bcb6963d9103( /*0x1005f4311*/
                           v18 + v19 + 64,
                           v59) )
    goto LABEL_6; /*0x1005f4311*/
  v17 = *(_QWORD *)(a2 + 40); /*0x1005f4317*/
LABEL_18:
  v55 = v57[4]; /*0x1005f431b*/
  v54 = v57[3]; /*0x1005f432b*/
  v53 = v57[2]; /*0x1005f4333*/
  v21 = *v57; /*0x1005f4337*/
  v52 = v57[1]; /*0x1005f433e*/
  v51 = v21; /*0x1005f4342*/
  if ( v17 <= v15 ) /*0x1005f4349*/
  {
    v46 = &off_1015349B0; /*0x1005f461d*/
    goto LABEL_45; /*0x1005f4624*/
  }
  v22 = *(_QWORD *)(a2 + 32); /*0x1005f434f*/
  v23 = v56; /*0x1005f4358*/
  if ( *(_BYTE *)(v22 + 104 * v15) ) /*0x1005f4353*/
  {
    http::header::map::HeaderMap$LT$T$GT$::remove_all_extra_values::hf7fb0f0adc1b950f(a2, *(_QWORD *)(v19 + v22 + 8)); /*0x1005f4368*/
    v17 = *(_QWORD *)(a2 + 40); /*0x1005f436d*/
  }
  if ( v17 <= v15 ) /*0x1005f4374*/
  {
    v46 = &off_1015349C8; /*0x1005f4626*/
LABEL_45:
    core::panicking::panic_bounds_check::h56740b1198b22635(v15, v17, (__int64)v46); /*0x1005f462d*/
  }
  v24 = *(_QWORD *)(a2 + 32); /*0x1005f437a*/
  *(_QWORD *)(v56 + 24) = *(_QWORD *)(v24 + v19 + 48); /*0x1005f4383*/
  *(_QWORD *)(v23 + 16) = *(_QWORD *)(v24 + v19 + 40); /*0x1005f438d*/
  v25 = *(_QWORD *)(v24 + v19 + 24); /*0x1005f4392*/
  *(_QWORD *)(v23 + 8) = *(_QWORD *)(v24 + v19 + 32); /*0x1005f439c*/
  *(_QWORD *)v23 = v25; /*0x1005f43a1*/
  LOBYTE(v25) = *(_BYTE *)(v24 + v19 + 56); /*0x1005f43a5*/
  *(_DWORD *)(v23 + 36) = *(_DWORD *)(v24 + v19 + 60); /*0x1005f43b0*/
  *(_DWORD *)(v23 + 33) = *(_DWORD *)(v24 + v19 + 57); /*0x1005f43ba*/
  v26 = v52; /*0x1005f43c3*/
  *(_QWORD *)(v24 + v19 + 24) = v51; /*0x1005f43c7*/
  *(_QWORD *)(v24 + v19 + 32) = v26; /*0x1005f43cc*/
  *(_QWORD *)(v24 + v19 + 40) = v53; /*0x1005f43d5*/
  *(_QWORD *)(v24 + v19 + 48) = v54; /*0x1005f43de*/
  *(_QWORD *)(v24 + v19 + 56) = v55; /*0x1005f43e7*/
  *(_BYTE *)(v23 + 32) = v25; /*0x1005f43ec*/
  result = *v59; /*0x1005f43f5*/
  if ( *v59 ) /*0x1005f43f5*/
    return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(result + 32))(v59 + 3, v59[1], v59[2]); /*0x1005f4411*/
  return result; /*0x1005f4221*/
}