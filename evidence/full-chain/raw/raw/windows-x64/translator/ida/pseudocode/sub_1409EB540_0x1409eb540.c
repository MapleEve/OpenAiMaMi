// module: codexmate_lib/core/relay/translator
// addr: 0x1409eb540
// name: sub_1409EB540
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 *__fastcall sub_1409EB540(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 *v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // r14
  unsigned __int64 v21; // r8
  __int64 v22; // rbx
  int v23; // eax
  char v24; // cl
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  __int64 v27; // r14
  __int128 v28; // xmm0
  unsigned __int64 *result; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  _OWORD *v33; // rdi
  __int64 v34; // rax
  __int128 v35; // xmm0
  _BYTE *v36; // rdx
  _BYTE v37[24]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v38; // [rsp+38h] [rbp-48h] BYREF
  __int128 v39; // [rsp+48h] [rbp-38h]
  _BOOL8 v40; // [rsp+58h] [rbp-28h]
  __int64 v41; // [rsp+60h] [rbp-20h]
  __int64 v42; // [rsp+68h] [rbp-18h]
  __int64 v43; // [rsp+70h] [rbp-10h]
  __int64 v44; // [rsp+78h] [rbp-8h]
  __int64 v45; // [rsp+80h] [rbp+0h] BYREF
  __int64 *v46; // [rsp+88h] [rbp+8h]
  unsigned __int64 v47; // [rsp+90h] [rbp+10h]
  __int128 v48; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 *v49; // [rsp+A8h] [rbp+28h]
  __int64 v50; // [rsp+B0h] [rbp+30h]
  __int64 v51; // [rsp+B8h] [rbp+38h]
  __int64 v52; // [rsp+C0h] [rbp+40h]
  __int64 *v53; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v54; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v55; // [rsp+D8h] [rbp+58h]
  unsigned __int64 v56; // [rsp+E0h] [rbp+60h]
  __int64 *v57; // [rsp+F0h] [rbp+70h]
  __int64 v58; // [rsp+F8h] [rbp+78h]
  __int64 v59; // [rsp+100h] [rbp+80h]
  __int64 v60; // [rsp+108h] [rbp+88h]
  __int64 v61; // [rsp+110h] [rbp+90h]
  __int64 *v62; // [rsp+118h] [rbp+98h]
  __int64 v63; // [rsp+120h] [rbp+A0h]
  char v64; // [rsp+12Dh] [rbp+ADh] BYREF
  char v65; // [rsp+12Eh] [rbp+AEh]
  char v66; // [rsp+12Fh] [rbp+AFh]
  __int64 v67; // [rsp+130h] [rbp+B0h]

  v67 = -2;
  v63 = a1;
  v3 = *a2;
  if ( v3 == 4 )
  {
    v26 = *((_QWORD *)a2 + 3);
    if ( v26 >> 58 )
    {
      v27 = 0;
      goto LABEL_28;
    }
    if ( v26 )
    {
      v31 = *((_QWORD *)a2 + 2);
      v2 = 32 * v26;
      nullsub_1(a1);
      v27 = 8;
      v32 = sub_140001650(32 * v26, 8);
      if ( !v32 )
LABEL_28:
        sub_1416C2D4B(v27, v2);
      v33 = (_OWORD *)v32;
      v54 = v26;
      v55 = v32;
      v34 = 0;
      do
      {
        v61 = v34;
        sub_1409EB540(&v38, v31);
        v35 = v38;
        v33[1] = v39;
        *v33 = v35;
        v34 = v61 + 1;
        v31 += 32;
        v33 += 2;
      }
      while ( v26 != v61 + 1 );
    }
    else
    {
      v54 = 0;
      v55 = 8;
    }
    v36 = (_BYTE *)v63;
    result = (unsigned __int64 *)(v63 + 8);
    v56 = v26;
    *(_QWORD *)(v63 + 24) = v26;
    *result = v54;
    result[1] = v55;
    *v36 = 4;
    return result;
  }
  if ( v3 == 5 )
  {
    v4 = *((_QWORD *)a2 + 1);
    v58 = *((_QWORD *)a2 + 2);
    v5 = v4;
    if ( v4 )
      v5 = *((_QWORD *)a2 + 3);
    v38 = v4 != 0;
    *(_QWORD *)&v39 = v4;
    *((_QWORD *)&v39 + 1) = v58;
    v40 = v4 != 0;
    v41 = 0;
    v59 = v4;
    v42 = v4;
    v43 = v58;
    v44 = v5;
    sub_14031A700(&v45, &v38);
    v6 = v46;
    v7 = v47;
    v62 = v46;
    if ( v47 >= 2 )
    {
      v66 = 1;
      v6 = v62;
      if ( v47 >= 0x15 )
        sub_140B5A4E0(v62, v47, &v64);
      else
        sub_1405580D0(v62, v47, 1, &v64);
    }
    *(_QWORD *)&v48 = 0;
    v49 = nullptr;
    v60 = v45;
    v53 = &v6[v7];
    v8 = v6;
    v9 = v6;
    v10 = v59;
    while ( v8 != v53 )
    {
      v11 = v8++;
      if ( !v10 )
        continue;
      v57 = v8;
      v12 = *v11;
      v13 = *(_QWORD *)(v12 + 8);
      v52 = v12;
      v14 = *(_QWORD *)(v12 + 16);
      v61 = v58;
LABEL_11:
      v15 = v10 + 360;
      v16 = *(unsigned __int16 *)(v10 + 626);
      v50 = v10;
      v17 = v10 - 32;
      v51 = v16;
      v18 = 3LL * (unsigned int)(8 * v16);
      v19 = -1;
      do
      {
        if ( !v18 )
        {
          v19 = v51;
          v25 = v61 - 1;
          if ( !v61 )
            goto LABEL_25;
          goto LABEL_22;
        }
        v20 = v15 + 24;
        v21 = *(_QWORD *)(v15 + 16);
        v22 = v14 - v21;
        if ( v14 < v21 )
          v21 = v14;
        v23 = sub_1416847B0(v13, *(_QWORD *)(v15 + 8), v21);
        if ( v23 )
          v22 = v23;
        v24 = (v22 > 0) - (v22 < 0);
        v17 += 32;
        ++v19;
        v18 -= 24;
        v15 = v20;
      }
      while ( v24 == 1 );
      if ( v24 )
      {
        v25 = v61 - 1;
        if ( !v61 )
        {
LABEL_25:
          v9 = v62;
          v10 = v59;
          v8 = v57;
          continue;
        }
LABEL_22:
        v61 = v25;
        v10 = *(_QWORD *)(v50 + 8 * v19 + 632);
        goto LABEL_11;
      }
      sub_14149C500(v37, v52);
      v10 = v59;
      v8 = v57;
      v65 = 1;
      sub_1409EB540(&v38, v17);
      v65 = 0;
      sub_140307860(&v54, &v48, v37, &v38);
      if ( (_BYTE)v54 != 0xFF )
        sub_1400104F0(&v54);
      v9 = v62;
    }
    if ( v60 )
      sub_140001660(v9, 8 * v60, 8);
    result = v49;
    v30 = v63;
    *(_QWORD *)(v63 + 24) = v49;
    *(_OWORD *)(v30 + 8) = v48;
    *(_BYTE *)v30 = 5;
  }
  else
  {
    switch ( *a2 )
    {
      case 0u:
        result = (unsigned __int64 *)v63;
        *(_BYTE *)v63 = 0;
        break;
      case 1u:
      case 2u:
        v28 = *(_OWORD *)a2;
        result = (unsigned __int64 *)v63;
        *(_OWORD *)(v63 + 16) = *((_OWORD *)a2 + 1);
        *(_OWORD *)result = v28;
        break;
      case 3u:
        result = (unsigned __int64 *)sub_14149C500(v63 + 8, a2 + 8);
        *(_BYTE *)v63 = 3;
        break;
    }
  }
  return result;
}