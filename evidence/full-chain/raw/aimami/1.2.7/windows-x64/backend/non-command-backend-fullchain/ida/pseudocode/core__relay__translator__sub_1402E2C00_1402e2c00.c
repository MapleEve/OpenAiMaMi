// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402e2c00 | name sub_1402E2C00
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402E2C00(__int64 a1, unsigned __int8 *a2)
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
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rbx
  int v22; // eax
  char v23; // cl
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // r14
  __int64 result; // rax
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  _OWORD *v31; // rdi
  __int64 v32; // rax
  __int128 v33; // xmm0
  _BYTE *v34; // rcx
  _BYTE *v35; // rdx
  _BYTE v36[24]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v37; // [rsp+38h] [rbp-48h] BYREF
  __int128 v38; // [rsp+48h] [rbp-38h]
  _BOOL8 v39; // [rsp+58h] [rbp-28h]
  __int64 v40; // [rsp+60h] [rbp-20h]
  __int64 v41; // [rsp+68h] [rbp-18h]
  __int64 v42; // [rsp+70h] [rbp-10h]
  __int64 v43; // [rsp+78h] [rbp-8h]
  __int64 v44; // [rsp+80h] [rbp+0h] BYREF
  __int64 *v45; // [rsp+88h] [rbp+8h]
  unsigned __int64 v46; // [rsp+90h] [rbp+10h]
  __int128 v47; // [rsp+98h] [rbp+18h] BYREF
  __int64 v48; // [rsp+A8h] [rbp+28h]
  __int64 v49; // [rsp+B0h] [rbp+30h]
  __int64 v50; // [rsp+B8h] [rbp+38h]
  __int64 v51; // [rsp+C0h] [rbp+40h]
  __int64 *v52; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v53; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v54; // [rsp+D8h] [rbp+58h]
  unsigned __int64 v55; // [rsp+E0h] [rbp+60h]
  __int64 *v56; // [rsp+F0h] [rbp+70h]
  __int64 v57; // [rsp+F8h] [rbp+78h]
  __int64 v58; // [rsp+100h] [rbp+80h]
  __int64 v59; // [rsp+108h] [rbp+88h]
  __int64 v60; // [rsp+110h] [rbp+90h]
  __int64 *v61; // [rsp+118h] [rbp+98h]
  __int64 v62; // [rsp+120h] [rbp+A0h]
  char v63; // [rsp+12Dh] [rbp+ADh] BYREF
  char v64; // [rsp+12Eh] [rbp+AEh]
  char v65; // [rsp+12Fh] [rbp+AFh]
  __int64 v66; // [rsp+130h] [rbp+B0h]

  v66 = -2;
  v62 = a1;
  v3 = *a2;
  if ( v3 == 4 )
  {
    v25 = *((_QWORD *)a2 + 3);
    if ( v25 >> 58 )
    {
      v26 = 0;
      goto LABEL_26;
    }
    if ( v25 )
    {
      v29 = *((_QWORD *)a2 + 2);
      v2 = 32 * v25;
      nullsub_1(a1);
      v26 = 8;
      v30 = sub_140001650(32 * v25, 8);
      if ( !v30 )
LABEL_26:
        sub_141938D2B(v26, v2);
      v31 = (_OWORD *)v30;
      v53 = v25;
      v54 = v30;
      v32 = 0;
      do
      {
        v60 = v32;
        sub_1402E2C00(&v37, v29);
        v33 = v37;
        v31[1] = v38;
        *v31 = v33;
        v32 = v60 + 1;
        v29 += 32;
        v31 += 2;
      }
      while ( v25 != v60 + 1 );
    }
    else
    {
      v53 = 0;
      v54 = 8;
    }
    v35 = (_BYTE *)v62;
    result = v62 + 8;
    v55 = v25;
    *(_QWORD *)(v62 + 24) = v25;
    *(_QWORD *)result = v53;
    *(_QWORD *)(result + 8) = v54;
    *v35 = 4;
    return result;
  }
  if ( v3 == 5 )
  {
    v4 = *((_QWORD *)a2 + 1);
    v57 = *((_QWORD *)a2 + 2);
    v5 = v4;
    if ( v4 )
      v5 = *((_QWORD *)a2 + 3);
    v37 = v4 != 0;
    *(_QWORD *)&v38 = v4;
    *((_QWORD *)&v38 + 1) = v57;
    v39 = v4 != 0;
    v40 = 0;
    v58 = v4;
    v41 = v4;
    v42 = v57;
    v43 = v5;
    sub_1403DE060(&v44, &v37);
    v6 = v45;
    v7 = v46;
    v61 = v45;
    if ( v46 >= 2 )
    {
      if ( v46 >= 0x15 )
      {
        v65 = 1;
        v6 = v61;
        sub_14065D380(v61, v46, &v63);
      }
      else
      {
        v6 = v61;
        sub_140E019F0(v61, v46, 1, &v63);
      }
    }
    *(_QWORD *)&v47 = 0;
    v48 = 0;
    v59 = v44;
    v52 = &v6[v7];
    v8 = v6;
    v9 = v6;
    v10 = v58;
    while ( v8 != v52 )
    {
      v11 = v8++;
      if ( !v10 )
        continue;
      v56 = v8;
      v12 = *v11;
      v13 = *(_QWORD *)(v12 + 8);
      v51 = v12;
      v14 = *(_QWORD *)(v12 + 16);
      v60 = v57;
LABEL_11:
      v15 = v10 + 360;
      v16 = *(unsigned __int16 *)(v10 + 626);
      v49 = v10;
      v17 = v10 - 32;
      v50 = v16;
      v18 = 3LL * (unsigned int)(8 * v16);
      v19 = -1;
      do
      {
        if ( !v18 )
        {
          v19 = v50;
          v24 = v60 - 1;
          if ( !v60 )
            goto LABEL_23;
          goto LABEL_20;
        }
        v20 = v15 + 24;
        v21 = v14 - *(_QWORD *)(v15 + 16);
        v22 = sub_1418F4B70(v13, *(_QWORD *)(v15 + 8));
        if ( v22 )
          v21 = v22;
        v23 = (v21 > 0) - (v21 < 0);
        v17 += 32;
        ++v19;
        v18 -= 24;
        v15 = v20;
      }
      while ( v23 == 1 );
      if ( v23 )
      {
        v24 = v60 - 1;
        if ( !v60 )
        {
LABEL_23:
          v9 = v61;
          v10 = v58;
          v8 = v56;
          continue;
        }
LABEL_20:
        v60 = v24;
        v10 = *(_QWORD *)(v49 + 8 * v19 + 632);
        goto LABEL_11;
      }
      sub_1416AC440(v36, v51);
      v10 = v58;
      v8 = v56;
      v64 = 1;
      sub_1402E2C00(&v37, v17);
      v64 = 0;
      sub_140E72AA0(&v53, &v47, v36, &v37);
      if ( (_BYTE)v53 != 0xFF )
        sub_14002F9D0(&v53);
      v9 = v61;
    }
    if ( v59 )
      sub_140001660(v9, 8 * v59, 8);
    result = v48;
    v28 = v62;
    *(_QWORD *)(v62 + 24) = v48;
    *(_OWORD *)(v28 + 8) = v47;
    *(_BYTE *)v28 = 5;
  }
  else
  {
    switch ( *a2 )
    {
      case 0u:
        result = v62;
        *(_BYTE *)v62 = 0;
        break;
      case 1u:
        result = a2[1];
        v34 = (_BYTE *)v62;
        *(_BYTE *)(v62 + 1) = result;
        *v34 = 1;
        break;
      case 2u:
        result = v62;
        *(_OWORD *)(v62 + 8) = *(_OWORD *)(a2 + 8);
        *(_BYTE *)result = 2;
        break;
      case 3u:
        result = sub_1416AC440(v62 + 8, a2 + 8);
        *(_BYTE *)v62 = 3;
        break;
    }
  }
  return result;
}
