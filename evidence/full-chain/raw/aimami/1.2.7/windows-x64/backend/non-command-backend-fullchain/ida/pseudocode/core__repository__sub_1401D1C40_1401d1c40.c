// win 1.2.7 | module src/core/repository.rs | ea 0x1401d1c40 | name sub_1401D1C40
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401D1C40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  char v10; // al
  __int64 result; // rax
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 (__fastcall *v15)(unsigned __int64); // rax
  unsigned __int64 v16; // rax
  char v17; // al
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rdi
  __m128i v23; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-38h]
  __int128 v27; // [rsp+50h] [rbp-30h]
  __int64 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+78h] [rbp-8h]
  __int64 v31; // [rsp+80h] [rbp+0h]
  __int64 v32; // [rsp+90h] [rbp+10h]
  __int64 v33; // [rsp+98h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+28h]
  __int64 v35; // [rsp+B0h] [rbp+30h]
  __int128 v36; // [rsp+D0h] [rbp+50h]
  __m128i v37; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v38; // [rsp+F8h] [rbp+78h]
  __int64 v39; // [rsp+100h] [rbp+80h]
  __int64 v40; // [rsp+110h] [rbp+90h]
  __int64 v41; // [rsp+118h] [rbp+98h]
  __int64 v42; // [rsp+128h] [rbp+A8h]
  __int64 v43; // [rsp+130h] [rbp+B0h]
  __int64 v44; // [rsp+140h] [rbp+C0h]
  __int64 v45; // [rsp+148h] [rbp+C8h]
  __int64 v46; // [rsp+158h] [rbp+D8h]
  __int64 v47; // [rsp+160h] [rbp+E0h]
  __int64 v48; // [rsp+170h] [rbp+F0h]
  __int64 v49; // [rsp+178h] [rbp+F8h]
  __int64 v50; // [rsp+190h] [rbp+110h]
  __int64 v51; // [rsp+198h] [rbp+118h]
  __int64 v52; // [rsp+1A0h] [rbp+120h]
  char v53; // [rsp+1AFh] [rbp+12Fh]
  __int64 v54; // [rsp+1B0h] [rbp+130h]

  v54 = -2;
  sub_140ED4870(&v23, a2, a3);
  if ( v23.m128i_i64[0] == -2 )
  {
    if ( v23.m128i_i32[2] == 2 )
    {
      v8 = v24;
      v9 = v24 & 3;
      switch ( v24 & 3 )
      {
        case 0uLL:
          v10 = *(_BYTE *)(v24 + 16);
          *(_QWORD *)a1 = -1;
          *(_BYTE *)(a1 + 24) = 0;
          if ( v10 )
            goto LABEL_37;
          goto LABEL_41;
        case 1uLL:
          v17 = *(_BYTE *)(v24 + 31);
          *(_QWORD *)a1 = -1;
          *(_BYTE *)(a1 + 24) = 0;
          if ( !v17 )
            goto LABEL_41;
          goto LABEL_37;
        case 2uLL:
          v53 = 1;
          v15 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v7, v6) + 8);
          v53 = 1;
          LOBYTE(v16) = v15(HIDWORD(v8));
          goto LABEL_36;
        case 3uLL:
          v16 = HIDWORD(v24);
LABEL_36:
          *(_QWORD *)a1 = -1;
          *(_BYTE *)(a1 + 24) = 0;
          if ( (_BYTE)v16 )
          {
LABEL_37:
            *(_BYTE *)(a1 + 25) = 0;
            result = (unsigned int)(v9 - 2);
            if ( (unsigned int)result >= 2 && v9 )
            {
              v37.m128i_i64[1] = v8 - 1;
              v37.m128i_i8[0] = 3;
              result = sub_1416BCB00(&v37.m128i_u64[1]);
            }
          }
          else
          {
LABEL_41:
            *(_BYTE *)(a1 + 25) = 1;
            result = (unsigned int)(v9 - 2);
            if ( (unsigned int)result >= 2 )
            {
              if ( v9 )
              {
                v37.m128i_i64[1] = v8 - 1;
                v37.m128i_i8[0] = 3;
                v53 = 0;
                result = sub_1416BCB00(&v37.m128i_u64[1]);
              }
            }
          }
          break;
      }
    }
    else
    {
      *(_QWORD *)a1 = -1;
      *(_WORD *)(a1 + 24) = 0;
      return sub_1401954F0(&v23.m128i_u64[1]);
    }
    return result;
  }
  sub_1418F44E0(&v37, &v23, 0xB0u);
  result = sub_140ED8760(&v37);
  if ( (_BYTE)result )
    goto LABEL_7;
  result = sub_140ED4AD0(&v37);
  v12 = 1;
  if ( (_BYTE)result )
  {
LABEL_10:
    *(_QWORD *)a1 = -1;
    *(_BYTE *)(a1 + 24) = v12;
    *(_BYTE *)(a1 + 25) = 0;
    v13 = v37.m128i_i64[0];
    if ( v37.m128i_i64[0] != -1 )
      goto LABEL_11;
    goto LABEL_13;
  }
  result = sub_140ED7E50(&v37);
  if ( !(_BYTE)result )
  {
LABEL_7:
    v12 = 0;
    goto LABEL_10;
  }
  sub_140ED5630(&v23, &v37, a2, a3);
  if ( v23.m128i_i32[0] == 2 )
  {
    result = sub_1401954F0(&v23.m128i_u64[1]);
    v14 = -1;
    goto LABEL_53;
  }
  v14 = v26;
  v36 = v27;
  v18 = v28;
  v19 = v29;
  v20 = v30;
  v52 = v31;
  v21 = v32;
  v51 = v33;
  v22 = v34;
  v50 = v35;
  if ( v24 )
    sub_140001660(v25, v24, 1);
  if ( v18 )
    sub_140001660(v19, v18, 1);
  if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    sub_140001660(v52, v20, 1);
    if ( (unsigned __int64)(v21 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_51:
      result = v22 - 1;
      if ( (unsigned __int64)(v22 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_53;
      goto LABEL_52;
    }
  }
  else if ( (unsigned __int64)(v21 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    goto LABEL_51;
  }
  sub_140001660(v51, v21, 1);
  result = v22 - 1;
  if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_52:
    result = sub_140001660(v50, v22, 1);
LABEL_53:
  *(_QWORD *)a1 = v14;
  *(_OWORD *)(a1 + 8) = v36;
  *(_WORD *)(a1 + 24) = 0;
  v13 = v37.m128i_i64[0];
  if ( v37.m128i_i64[0] != -1 )
  {
LABEL_11:
    if ( v13 )
      result = sub_140001660(v37.m128i_i64[1], v13, 1);
  }
LABEL_13:
  if ( v38 != -1 && v38 )
    result = sub_140001660(v39, v38, 1);
  if ( v40 != -1 && v40 )
    result = sub_140001660(v41, v40, 1);
  if ( v42 != -1 && v42 )
    result = sub_140001660(v43, v42, 1);
  if ( v44 != -1 && v44 )
    result = sub_140001660(v45, v44, 1);
  if ( v46 != -1 && v46 )
    result = sub_140001660(v47, v46, 1);
  if ( v48 != -1 && v48 )
    return sub_140001660(v49, v48, 1);
  return result;
}
