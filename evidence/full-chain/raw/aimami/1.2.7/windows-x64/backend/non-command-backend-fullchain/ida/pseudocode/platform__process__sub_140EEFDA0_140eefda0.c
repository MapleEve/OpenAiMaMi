// win 1.2.7 | module src/platform/process.rs | ea 0x140eefda0 | name sub_140EEFDA0
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EEFDA0(__int64 a1, __m128i *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // edx
  unsigned __int64 v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rbx
  __m128i *v11; // rsi
  __m128i *v12; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __m128i *v16; // r8
  __m128i *v17; // r9
  unsigned __int64 v18; // rdi
  __m128i *v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdx
  bool v29; // cl
  char *v30; // rax
  unsigned int v31; // r10d
  __int64 v32; // r9
  __m128i *v33; // r11
  unsigned __int64 v34; // rax
  __int32 v35; // ecx
  __int32 v36; // edx
  __int64 result; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int64 v41; // [rsp+28h] [rbp-58h] BYREF
  __m128i *v42; // [rsp+30h] [rbp-50h]
  __m128i *v43; // [rsp+38h] [rbp-48h]
  unsigned __int64 v44; // [rsp+40h] [rbp-40h]
  __int128 v45; // [rsp+48h] [rbp-38h]
  __int128 v46; // [rsp+58h] [rbp-28h]
  __int128 v47; // [rsp+68h] [rbp-18h]
  __int128 v48; // [rsp+78h] [rbp-8h]
  __m128i *v49; // [rsp+88h] [rbp+8h]
  __m128i *v50; // [rsp+90h] [rbp+10h]
  unsigned __int64 v51; // [rsp+98h] [rbp+18h]
  unsigned __int64 v52; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int v53; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v54; // [rsp+B0h] [rbp+30h]
  __m128i *v55; // [rsp+B8h] [rbp+38h]
  __m128i *v56; // [rsp+C0h] [rbp+40h] BYREF
  __m128i *v57; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v58; // [rsp+D0h] [rbp+50h]
  unsigned int v59; // [rsp+DCh] [rbp+5Ch]
  __int64 v60; // [rsp+E0h] [rbp+60h]
  __m128i *v61; // [rsp+E8h] [rbp+68h]
  char v62; // [rsp+F7h] [rbp+77h] BYREF
  __m128i *v63; // [rsp+F8h] [rbp+78h]
  __int64 v64; // [rsp+100h] [rbp+80h]

  v64 = -2;
  v5 = a4;
  v54 = a3;
  v55 = a2;
  v60 = a1;
  v6 = sub_14167FC00(a1, a2, a3, a4);
  v8 = sub_1416A1240(v6, v7, v5, a5, (__int64)&off_141A56078);
  v52 = v8;
  v59 = v9;
  v53 = v9;
  while ( 1 )
  {
    sub_140EE8460((__int64)&v41);
    v10 = v41;
    v11 = v42;
    v12 = v43;
    v13 = v44;
    if ( v41 != -1 )
    {
      v38 = v45;
      v39 = v46;
      v40 = v47;
      result = v60;
      *(_OWORD *)(v60 + 80) = v48;
      *(_OWORD *)(result + 64) = v40;
      *(_OWORD *)(result + 48) = v39;
      *(_OWORD *)(result + 32) = v38;
      goto LABEL_55;
    }
    v49 = v42;
    v50 = v43;
    v51 = v44;
    v41 = (__int64)v43;
    v42 = &v43[2 * v44];
    v43 = v55;
    v44 = v54;
    sub_1403E3800(&v56, &v41);
    v63 = v57;
    v18 = v58;
    if ( v58 < 2 )
      goto LABEL_4;
    if ( v58 >= 0x15 )
    {
      sub_140EA2490(v63, v58, (__int64)&v62);
LABEL_35:
      v14 = 0;
      while ( 1 )
      {
        v16 = v63;
        v15 = v63->m128i_u32[v14 + 1];
        if ( (_DWORD)v15 == v63->m128i_i32[v14] )
          break;
        if ( v18 - 1 == ++v14 )
          goto LABEL_4;
      }
      v15 = v14 + 2;
      v34 = v14 + 1;
      if ( v14 + 2 >= v18 )
        goto LABEL_45;
      if ( (((_BYTE)v18 - (_BYTE)v14) & 1) != 0 )
      {
        v35 = v63->m128i_i32[v14 + 2];
        if ( v35 != v63->m128i_i32[v14] )
        {
          v63->m128i_i32[v14 + 1] = v35;
          v34 = v14 + 2;
        }
        v15 = v14 + 3;
      }
      v16 = (__m128i *)(v18 - 3);
      if ( v18 - 3 == v14 )
      {
LABEL_45:
        v18 = v34;
        goto LABEL_4;
      }
      while ( 1 )
      {
        v16 = v63;
        v36 = v63->m128i_i32[v15];
        if ( v36 == v63->m128i_i32[v34 - 1] )
        {
          v14 = v63->m128i_u32[v15 + 1];
          if ( (_DWORD)v14 != v63->m128i_i32[v34 - 1] )
            goto LABEL_51;
        }
        else
        {
          v63->m128i_i32[v34++] = v36;
          v14 = v16->m128i_u32[v15 + 1];
          if ( (_DWORD)v14 != v16->m128i_i32[v34 - 1] )
LABEL_51:
            v16->m128i_i32[v34++] = v14;
        }
        v15 += 2;
        if ( v18 == v15 )
          goto LABEL_45;
      }
    }
    v30 = &v63->m128i_i8[4 * v58];
    v15 = (__int64)v63->m128i_i64 + 4;
    v14 = 4;
    do
    {
      v31 = *(_DWORD *)(v15 - 4);
      v16 = (__m128i *)*(unsigned int *)v15;
      if ( (unsigned int)v16 < v31 )
      {
        v32 = v14;
        v33 = v63;
        do
        {
          *(__int32 *)((char *)v33->m128i_i32 + v32) = v31;
          if ( v32 == 4 )
          {
            v17 = v33;
            goto LABEL_27;
          }
          v31 = *(unsigned __int32 *)((char *)&v33->m128i_u32[-2] + v32);
          v32 -= 4;
        }
        while ( (unsigned int)v16 < v31 );
        v17 = (__m128i *)((char *)v33 + v32);
LABEL_27:
        v17->m128i_i32[0] = (int)v16;
      }
      v15 += 4;
      v14 += 4;
    }
    while ( (char *)v15 != v30 );
    v63 = v57;
    v18 = v58;
    if ( v58 >= 2 )
      goto LABEL_35;
LABEL_4:
    v61 = v56;
    if ( v13 )
    {
      v19 = v12 + 1;
      do
      {
        v14 = v19[-1].m128i_i64[1];
        if ( v14 )
          sub_140001660(v19->m128i_i64[0], v14, 1);
        v19 += 2;
        --v13;
      }
      while ( v13 );
    }
    if ( v11 )
      sub_140001660(v12, 32LL * (_QWORD)v11, 8);
    v10 = -1;
    if ( !v18 )
      break;
    v20 = sub_14167FC00(v15, v14, v16, v17);
    if ( v20 == v8 )
    {
      if ( (unsigned int)v21 >= v59 )
        break;
    }
    else if ( v20 >= v8 )
    {
      break;
    }
    v25 = sub_14167FC00(v22, v21, v23, v24);
    v27 = sub_14167FA50(&v52, v25, v26);
    v29 = v27 == 0 && (unsigned int)v28 < 0x2FAF080;
    if ( !v29 )
      v28 = 50000000;
    if ( (_DWORD)v28 )
    {
      if ( !v29 )
        v27 = 0;
      sub_141696800(v27, v28);
    }
    if ( v61 )
      sub_140001660(v63, 4LL * (_QWORD)v61, 4);
  }
  v11 = v61;
  v12 = v63;
  v13 = v18;
  result = v60;
LABEL_55:
  *(_QWORD *)(result + 8) = v11;
  *(_QWORD *)(result + 16) = v12;
  *(_QWORD *)(result + 24) = v13;
  *(_QWORD *)result = v10;
  return result;
}
