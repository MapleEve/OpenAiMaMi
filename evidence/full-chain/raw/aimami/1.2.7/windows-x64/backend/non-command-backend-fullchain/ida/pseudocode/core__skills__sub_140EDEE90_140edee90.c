// win 1.2.7 | module src/core/skills.rs | ea 0x140edee90 | name sub_140EDEE90
// win 1.2.7 | module src/core/skills.rs | attributed via panic-Location xref (win-native)
void *__fastcall sub_140EDEE90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v10; // r12d
  void *result; // rax
  void *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  void *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  __m128i v24[11]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v26; // [rsp+E8h] [rbp+68h]
  __int64 v27; // [rsp+F8h] [rbp+78h] BYREF
  void *v28; // [rsp+100h] [rbp+80h]
  __int64 v29; // [rsp+108h] [rbp+88h]
  _QWORD v30[2]; // [rsp+110h] [rbp+90h] BYREF
  __m128i v31; // [rsp+120h] [rbp+A0h] BYREF
  __m128i *v32; // [rsp+130h] [rbp+B0h]
  __int64 (__fastcall *v33)(_QWORD, _QWORD); // [rsp+138h] [rbp+B8h]
  __int64 v34; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v35; // [rsp+1E0h] [rbp+160h]
  __int64 v36; // [rsp+1E8h] [rbp+168h]
  __int64 v37; // [rsp+1F0h] [rbp+170h] BYREF
  _QWORD v38[11]; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v39; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v40; // [rsp+258h] [rbp+1D8h]
  __int64 v41; // [rsp+260h] [rbp+1E0h]
  __int64 v42; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v43; // [rsp+278h] [rbp+1F8h]
  char v44; // [rsp+287h] [rbp+207h] BYREF
  __int64 v45; // [rsp+288h] [rbp+208h]

  v45 = -2;
  sub_141568C20(v24);
  v31.m128i_i64[0] = (__int64)v24;
  v31.m128i_i64[1] = (__int64)sub_14028A180;
  sub_1416ABFD0(&v34, &unk_141A5A21E, &v31);
  v43 = v35;
  sub_141682750((unsigned int)&v39, a3, a4, v35, v36);
  if ( v34 )
    sub_140001660(v43, v34, 1);
  sub_141695A00(&v31, a3, a4);
  v10 = v31.m128i_i32[0];
  if ( v31.m128i_i64[0] == 2 )
  {
    if ( (v31.m128i_i8[8] & 3u) - 2 >= 2 && (v31.m128i_i8[8] & 3) != 0 )
    {
      --v31.m128i_i64[1];
      v31.m128i_i8[0] = 3;
      sub_1416BCB00(&v31.m128i_u64[1]);
    }
  }
  else
  {
    result = (void *)sub_141695830(a3, a4, v40, v41);
    if ( result )
    {
LABEL_17:
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = result;
LABEL_18:
      *(_QWORD *)a1 = 2;
      goto LABEL_19;
    }
  }
  result = (void *)sub_141695830(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a3, a4);
  if ( result )
  {
    v37 = (__int64)result;
    if ( v10 != 2 )
    {
      v12 = result;
      v13 = sub_141695830(v40, v41, a3, a4);
      result = v12;
      if ( v13 )
      {
        v24[0].m128i_i64[0] = v13;
        v31.m128i_i64[0] = (__int64)&v37;
        v31.m128i_i64[1] = (__int64)sub_1416BB0B0;
        v32 = v24;
        v33 = sub_1416BB0B0;
        sub_1416ABFD0(&v25, &unk_141A5A238, &v31);
        v14 = v25;
        if ( (v24[0].m128i_i8[0] & 3u) - 2 >= 2 && (v24[0].m128i_i8[0] & 3) != 0 )
        {
          v31.m128i_i64[1] = v24[0].m128i_i64[0] - 1;
          v31.m128i_i8[0] = 3;
          sub_1416BCB00(&v31.m128i_u64[1]);
        }
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)(a1 + 16) = v14;
        *(_OWORD *)(a1 + 24) = v26;
        *(_QWORD *)a1 = 2;
        result = (void *)v37;
        if ( (unsigned int)(v37 & 3) - 2 >= 2 && (v37 & 3) != 0 )
        {
          v31.m128i_i64[1] = v37 - 1;
          v31.m128i_i8[0] = 3;
          result = (void *)sub_1416BCB00(&v31.m128i_u64[1]);
        }
LABEL_19:
        v15 = v39;
        if ( !v39 )
          return result;
        return (void *)sub_140001660(v40, v15, 1);
      }
    }
    goto LABEL_17;
  }
  *(_BYTE *)(a2 + 32) = 1;
  sub_1416828D0((unsigned int)&v31, a3, a4, (unsigned int)&unk_141A57500, 8);
  v43 = v31.m128i_i64[1];
  sub_140EDD650((unsigned int)v24, v31.m128i_i32[2], (_DWORD)v32, a5, a6);
  if ( v31.m128i_i64[0] )
    sub_140001660(v43, v31.m128i_i64[0], 1);
  if ( v24[0].m128i_i32[0] == 2 )
  {
    v16 = sub_141695320(a3, a4);
    if ( v16 )
    {
      v17 = v16 & 3;
      if ( (unsigned int)(v17 - 2) >= 2 && (v16 & 3) != 0 )
      {
        v31.m128i_i64[1] = v16 - 1;
        v31.m128i_i8[0] = 3;
        sub_1416BCB00(&v31.m128i_u64[1]);
      }
    }
    if ( v10 == 2 || (v18 = sub_141695830(v40, v41, a3, a4)) == 0 )
    {
      nullsub_1(v17);
      v19 = 33;
      result = (void *)sub_140001650(33, 1);
      if ( !result )
        sub_141938D2B(1, 33);
      qmemcpy(result, "Published skill failed validation", 33);
      v22 = 9;
      v20 = 33;
    }
    else
    {
      v37 = v18;
      v31.m128i_i64[0] = (__int64)&v37;
      v31.m128i_i64[1] = (__int64)sub_1416BB0B0;
      sub_1416ABFD0(&v27, &unk_141A5A316, &v31);
      v19 = v27;
      result = v28;
      v20 = v29;
      if ( (unsigned int)(v37 & 3) - 2 >= 2 && (v37 & 3) != 0 )
      {
        v21 = v28;
        v31.m128i_i64[1] = v37 - 1;
        v31.m128i_i8[0] = 3;
        sub_1416BCB00(&v31.m128i_u64[1]);
        result = v21;
      }
      v22 = 10;
    }
    *(_QWORD *)(a1 + 8) = v22;
    *(_QWORD *)(a1 + 16) = v19;
    *(_QWORD *)(a1 + 24) = result;
    *(_QWORD *)(a1 + 32) = v20;
    goto LABEL_18;
  }
  sub_1418F44E0(&v31, v24, 0xB8u);
  if ( v10 != 2 )
  {
    v23 = sub_141695320(v40, v41);
    if ( v23 )
    {
      v42 = v23;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v30[0] = &v42;
        v30[1] = sub_1416BB0B0;
        v38[5] = 2;
        v38[6] = aCodexmateLibCo_43;
        v38[7] = 27;
        v38[9] = &unk_141A5A282;
        v38[10] = v30;
        v37 = 0;
        v38[0] = aCodexmateLibCo_43;
        v38[1] = 27;
        v38[2] = 0;
        v38[3] = aSrcCoreSkillsR;
        v38[4] = 18;
        v38[8] = 0x24500000001LL;
        sub_1414D53A0(&v44, &v37);
        v23 = v42;
      }
      if ( (unsigned int)(v23 & 3) - 2 >= 2 && (v23 & 3) != 0 )
      {
        v38[0] = v23 - 1;
        LOBYTE(v37) = 3;
        sub_1416BCB00(v38);
      }
    }
  }
  result = (void *)sub_1418F44E0((__m128i *)a1, &v31, 0xB8u);
  v15 = v39;
  if ( v39 )
    return (void *)sub_140001660(v40, v15, 1);
  return result;
}
