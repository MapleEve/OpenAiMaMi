// win 1.2.7 | module src/core/repository.rs | ea 0x1401de790 | name sub_1401DE790
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401DE790(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+28h] [rbp-58h]
  __int128 v10; // [rsp+38h] [rbp-48h]
  __int128 v11; // [rsp+48h] [rbp-38h]
  __int128 v12; // [rsp+58h] [rbp-28h]
  __int128 v13; // [rsp+68h] [rbp-18h]
  __int128 v14; // [rsp+78h] [rbp-8h]
  __m128i v15; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v16; // [rsp+E8h] [rbp+68h]
  __int64 v17; // [rsp+F0h] [rbp+70h]
  __int64 v18; // [rsp+100h] [rbp+80h]
  __int64 v19; // [rsp+108h] [rbp+88h]
  __int64 v20; // [rsp+118h] [rbp+98h]
  __int64 v21; // [rsp+120h] [rbp+A0h]
  __int64 v22; // [rsp+130h] [rbp+B0h]
  __int64 v23; // [rsp+138h] [rbp+B8h]
  __int64 v24; // [rsp+148h] [rbp+C8h]
  __int64 v25; // [rsp+150h] [rbp+D0h]
  __int64 v26; // [rsp+160h] [rbp+E0h]
  __int64 v27; // [rsp+168h] [rbp+E8h]
  __int128 v28; // [rsp+180h] [rbp+100h] BYREF
  __int128 v29; // [rsp+190h] [rbp+110h]
  __int128 v30; // [rsp+1A0h] [rbp+120h]
  __int128 v31; // [rsp+1B0h] [rbp+130h]
  __int128 v32; // [rsp+1C0h] [rbp+140h]
  __int128 v33; // [rsp+1D0h] [rbp+150h]
  __int64 v34; // [rsp+1E0h] [rbp+160h] BYREF
  const char *v35; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v36; // [rsp+1F0h] [rbp+170h]
  __int64 v37; // [rsp+1F8h] [rbp+178h]
  const char *v38; // [rsp+200h] [rbp+180h]
  __int64 v39; // [rsp+208h] [rbp+188h]
  __int64 v40; // [rsp+210h] [rbp+190h]
  const char *v41; // [rsp+218h] [rbp+198h]
  __int64 v42; // [rsp+220h] [rbp+1A0h]
  __int64 v43; // [rsp+228h] [rbp+1A8h]
  void *v44; // [rsp+230h] [rbp+1B0h]
  __int128 **v45; // [rsp+238h] [rbp+1B8h]
  __int128 *v46; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 (__fastcall *v47)(_QWORD, _QWORD); // [rsp+248h] [rbp+1C8h]
  char v48; // [rsp+257h] [rbp+1D7h] BYREF
  __int64 v49; // [rsp+258h] [rbp+1D8h]

  v49 = -2;
  sub_140ED4870(&v8, a2, a3);
  if ( v8 == -2 )
  {
    v33 = v14;
    v32 = v13;
    v31 = v12;
    v30 = v11;
    v29 = v10;
    v28 = v9;
    sub_141695A00(&v34, a2, a3);
    if ( (_DWORD)v34 == 2 )
    {
      if ( ((unsigned __int8)v35 & 3u) - 2 >= 2 && ((unsigned __int8)v35 & 3) != 0 )
      {
        --v35;
        LOBYTE(v34) = 3;
        sub_1416BCB00(&v35);
      }
    }
    else if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v46 = &v28;
      v47 = sub_14104A7D0;
      v40 = 2;
      v41 = aCodexmateLibCo_21;
      v42 = 31;
      v44 = &unk_1419DA753;
      v45 = &v46;
      v34 = 0;
      v35 = aCodexmateLibCo_21;
      v36 = 31;
      v37 = 0;
      v38 = aSrcCoreReposit;
      v39 = 22;
      v43 = 0x7D000000001LL;
      sub_1414D53A0(&v48, &v34);
    }
    a1->m128i_i64[0] = 2;
    return sub_1401954F0(&v28);
  }
  sub_1418F44E0(&v15, (const __m128i *)&v8, 0xB0u);
  result = sub_140ED7E50(&v15);
  if ( !(_BYTE)result )
  {
    a1->m128i_i64[0] = 2;
    goto LABEL_15;
  }
  sub_140ED5630(&v8, &v15, a2, a3);
  if ( (_DWORD)v8 == 2 )
  {
    v33 = v14;
    v32 = v13;
    v31 = v12;
    v30 = v11;
    v29 = v10;
    v28 = v9;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v46 = &v28;
      v47 = sub_14104A7D0;
      v40 = 2;
      v41 = aCodexmateLibCo_21;
      v42 = 31;
      v44 = &unk_1419DA722;
      v45 = &v46;
      v34 = 0;
      v35 = aCodexmateLibCo_21;
      v36 = 31;
      v37 = 0;
      v38 = aSrcCoreReposit;
      v39 = 22;
      v43 = 0x7DB00000001LL;
      sub_1414D53A0(&v48, &v34);
    }
    a1->m128i_i64[0] = 2;
    result = sub_1401954F0(&v28);
LABEL_15:
    v7 = v15.m128i_i64[0];
    if ( v15.m128i_i64[0] != -1 )
      goto LABEL_16;
    goto LABEL_18;
  }
  result = sub_1418F44E0(a1, (const __m128i *)&v8, 0xB0u);
  v7 = v15.m128i_i64[0];
  if ( v15.m128i_i64[0] != -1 )
  {
LABEL_16:
    if ( v7 )
      result = sub_140001660(v15.m128i_i64[1], v7, 1);
  }
LABEL_18:
  if ( v16 != -1 && v16 )
    result = sub_140001660(v17, v16, 1);
  if ( v18 != -1 && v18 )
    result = sub_140001660(v19, v18, 1);
  if ( v20 != -1 && v20 )
    result = sub_140001660(v21, v20, 1);
  if ( v22 != -1 && v22 )
    result = sub_140001660(v23, v22, 1);
  if ( v24 != -1 && v24 )
    result = sub_140001660(v25, v24, 1);
  if ( v26 != -1 && v26 )
    return sub_140001660(v27, v26, 1);
  return result;
}
