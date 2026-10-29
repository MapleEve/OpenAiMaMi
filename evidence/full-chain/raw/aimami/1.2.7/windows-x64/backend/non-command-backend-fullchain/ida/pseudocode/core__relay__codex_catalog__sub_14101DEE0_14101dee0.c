// win 1.2.7 | module src/core/relay/codex_catalog.rs | ea 0x14101dee0 | name sub_14101DEE0
// win 1.2.7 | module src/core/relay/codex_catalog.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14101DEE0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  unsigned __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  __int64 v19; // r15
  __m128i *v20; // rax
  __m128i *v21; // r12
  __m128i v22[11]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v23; // [rsp+E0h] [rbp+60h]
  __int128 v24; // [rsp+F0h] [rbp+70h]
  __int128 v25; // [rsp+100h] [rbp+80h]
  _DWORD v26[4]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v27; // [rsp+120h] [rbp+A0h] BYREF
  int v28; // [rsp+128h] [rbp+A8h]
  __int64 v29; // [rsp+130h] [rbp+B0h]
  __int128 v30; // [rsp+138h] [rbp+B8h]
  __int128 v31; // [rsp+148h] [rbp+C8h]
  __int128 v32; // [rsp+158h] [rbp+D8h]
  _DWORD v33[2]; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v34; // [rsp+170h] [rbp+F0h]
  _QWORD v35[2]; // [rsp+178h] [rbp+F8h] BYREF
  __int64 *v36; // [rsp+188h] [rbp+108h] BYREF
  __int128 v37; // [rsp+190h] [rbp+110h]
  __int128 v38; // [rsp+1A0h] [rbp+120h]
  __int128 v39; // [rsp+1B0h] [rbp+130h]
  __m512i v40; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v41; // [rsp+200h] [rbp+180h]
  __int64 v42; // [rsp+208h] [rbp+188h]
  void *v43; // [rsp+210h] [rbp+190h]
  __int64 **v44; // [rsp+218h] [rbp+198h]
  int v45; // [rsp+26Ch] [rbp+1ECh]
  __m512i v46; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v47; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 v48; // [rsp+2C0h] [rbp+240h]
  char v49; // [rsp+2D6h] [rbp+256h] BYREF
  char v50; // [rsp+2D7h] [rbp+257h]
  __int64 v51; // [rsp+2D8h] [rbp+258h]

  v51 = -2;
  sub_140EE5860(&v40);
  result = v40.m512i_i64[0];
  if ( v40.m512i_i64[0] == -1 )
  {
    *a1 = -1;
    return result;
  }
  v48 = *(_OWORD *)v40.m512i_i8;
  v35[0] = "native catalog compatibility";
  v35[1] = 28;
  v27 = 1;
  v28 = 500000000;
  sub_14168A510(&v40, v40.m512i_i64[1], v40.m512i_i64[2]);
  v22[0].m128i_i32[0] = 2;
  sub_14168A5A0(&v40, v22);
  v45 = 0x8000000;
  sub_1418F44E0(v22, (const __m128i *)&v40, 0xB8u);
  sub_14168A3F0(v22, "--versionnative catalog compatibility", 9);
  v26[0] = 3;
  sub_14168A620(v22, v26);
  sub_14168A5E0(v22, v26);
  sub_14168DB10(&v40, v22);
  if ( v40.m512i_i64[0] == 2 )
  {
    if ( (v40.m512i_i8[8] & 3u) - 2 >= 2 && (v40.m512i_i8[8] & 3) != 0 )
    {
      v46.m512i_i64[1] = v40.m512i_i64[1] - 1;
      v46.m512i_i8[0] = 3;
      sub_1416BCB00(&v46.m512i_u64[1]);
    }
    v3 = -1;
  }
  else
  {
    v46 = v40;
    v50 = 1;
    v4 = sub_14167FC00();
    v50 = 1;
    v6 = sub_1416A1240(v4, v5, 1, 500000000, (__int64)&off_141A6F5C0);
    v8 = v7;
    while ( 1 )
    {
      v50 = 1;
      sub_14168B410(v33, &v46);
      if ( v33[0] == 1 )
      {
        v12 = v34;
        v47 = v34;
        v13 = sub_14168B300(&v46);
        if ( v13 && (unsigned int)(v13 & 3) - 2 >= 2 && (v13 & 3) != 0 )
        {
          v40.m512i_i64[1] = v13 - 1;
          v40.m512i_i8[0] = 3;
          sub_1416BCB00(&v40.m512i_u64[1]);
        }
        sub_14168B3B0(&v36, &v46);
        if ( (_DWORD)v36 && (unsigned int)(v37 & 3) - 2 >= 2 && (v37 & 3) != 0 )
        {
          v40.m512i_i64[1] = v37 - 1;
          v40.m512i_i8[0] = 3;
          sub_1416BCB00(&v40.m512i_u64[1]);
        }
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v36 = v35;
          *(_QWORD *)&v37 = sub_140186EE0;
          *((_QWORD *)&v37 + 1) = &v47;
          *(_QWORD *)&v38 = sub_1416BB0B0;
          v40.m512i_i64[6] = 2;
          v40.m512i_i64[7] = (__int64)aCodexmateLibCo_51;
          v41 = 41;
          v43 = &unk_141A6F617;
          v44 = &v36;
          v40.m512i_i64[0] = 0;
          v40.m512i_i64[1] = (__int64)aCodexmateLibCo_51;
          *(_OWORD *)&v40.m512i_u64[2] = 0x29u;
          v40.m512i_i64[4] = (__int64)aSrcCoreRelayCo_4;
          v40.m512i_i64[5] = 31;
          v42 = 0x14C00000001LL;
          sub_1414D53A0(&v49, &v40);
          v12 = v47;
        }
        if ( (unsigned int)(v12 & 3) - 2 >= 2 && (v12 & 3) != 0 )
        {
          v40.m512i_i64[1] = v12 - 1;
          v40.m512i_i8[0] = 3;
          v50 = 1;
          sub_1416BCB00(&v40.m512i_u64[1]);
        }
        goto LABEL_38;
      }
      if ( v33[1] == 1 )
        break;
      v50 = 1;
      v9 = sub_14167FC00();
      if ( v9 == v6 )
      {
        if ( v10 >= v8 )
          goto LABEL_15;
      }
      else if ( v9 >= v6 )
      {
LABEL_15:
        v50 = 1;
        v11 = sub_14168B300(&v46);
        if ( v11 && (unsigned int)(v11 & 3) - 2 >= 2 && (v11 & 3) != 0 )
        {
          v40.m512i_i64[1] = v11 - 1;
          v40.m512i_i8[0] = 3;
          v50 = 1;
          sub_1416BCB00(&v40.m512i_u64[1]);
        }
        v50 = 1;
        sub_14168B3B0(&v36, &v46);
        if ( (_DWORD)v36 && (unsigned int)(v37 & 3) - 2 >= 2 && (v37 & 3) != 0 )
        {
          v40.m512i_i64[1] = v37 - 1;
          v40.m512i_i8[0] = 3;
          v50 = 1;
          sub_1416BCB00(&v40.m512i_u64[1]);
        }
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v36 = &v27;
          *(_QWORD *)&v37 = sub_1416BC8D0;
          *((_QWORD *)&v37 + 1) = v35;
          *(_QWORD *)&v38 = sub_140186EE0;
          v40.m512i_i64[6] = 2;
          v40.m512i_i64[7] = (__int64)aCodexmateLibCo_51;
          v41 = 41;
          v43 = &unk_141A6F5D8;
          v44 = &v36;
          v40.m512i_i64[0] = 0;
          v40.m512i_i64[1] = (__int64)aCodexmateLibCo_51;
          *(_OWORD *)&v40.m512i_u64[2] = 0x29u;
          v40.m512i_i64[4] = (__int64)aSrcCoreRelayCo_4;
          v40.m512i_i64[5] = 31;
          v42 = 0x14200000001LL;
          v50 = 1;
          sub_1414D53A0(&v49, &v40);
        }
LABEL_38:
        v14 = (void *)v46.m512i_i64[7];
        CloseHandle((HANDLE)v46.m512i_i64[6]);
        CloseHandle(v14);
        if ( v46.m512i_i64[0] )
          CloseHandle((HANDLE)v46.m512i_i64[1]);
        if ( v46.m512i_i64[2] )
          CloseHandle((HANDLE)v46.m512i_i64[3]);
        v3 = -1;
        if ( v46.m512i_i64[4] )
          CloseHandle((HANDLE)v46.m512i_i64[5]);
        goto LABEL_49;
      }
      v50 = 1;
      sub_141696800(0, 25000000);
    }
    v40 = v46;
    v50 = 0;
    sub_14168AF30(&v36, &v40);
    v3 = (__int64)v36;
    if ( v36 == (__int64 *)-1LL )
    {
      if ( (unsigned int)(v37 & 3) - 2 >= 2 && (v37 & 3) != 0 )
      {
        v40.m512i_i64[1] = v37 - 1;
        v40.m512i_i8[0] = 3;
        v50 = 0;
        sub_1416BCB00(&v40.m512i_u64[1]);
      }
    }
    else
    {
      v25 = v39;
      v24 = v38;
      v23 = v37;
    }
  }
LABEL_49:
  result = sub_14029BE30(v22);
  if ( v3 != -1 )
  {
    v32 = v25;
    v31 = v24;
    v30 = v23;
    v29 = v3;
    if ( DWORD2(v25) )
    {
      *a1 = -1;
      if ( !v3 )
        goto LABEL_53;
      goto LABEL_52;
    }
    sub_1416A9D40(&v40, v30, *((_QWORD *)&v30 + 1));
    v17 = v40.m512i_i64[1];
    result = v40.m512i_i64[0];
    v18 = v40.m512i_u64[2];
    if ( v40.m512i_i64[0] != -1 )
    {
LABEL_61:
      *a1 = result;
      a1[1] = v17;
      a1[2] = v18;
      if ( !v3 )
      {
LABEL_53:
        if ( (_QWORD)v31 )
          result = sub_140001660(*((_QWORD *)&v31 + 1), v31, 1);
        v15 = v48;
        if ( (_QWORD)v48 )
          return sub_140001660(*((_QWORD *)&v48 + 1), v15, 1);
        return result;
      }
LABEL_52:
      result = sub_140001660(v30, v3, 1);
      goto LABEL_53;
    }
    if ( v40.m512i_i64[2] >= 0 )
    {
      if ( !v40.m512i_i64[2] )
      {
        v17 = 1;
        result = 0;
        v18 = 0;
        goto LABEL_61;
      }
      nullsub_1(v16);
      v19 = 1;
      v20 = (__m128i *)sub_140001650(v18, 1);
      if ( v20 )
      {
        v21 = v20;
        sub_1418F44E0(v20, (const __m128i *)v17, v18);
        result = v18;
        v17 = (__int64)v21;
        goto LABEL_61;
      }
    }
    else
    {
      v19 = 0;
    }
    sub_141938D2B(v19, v18);
  }
  *a1 = -1;
  v15 = v48;
  if ( (_QWORD)v48 )
    return sub_140001660(*((_QWORD *)&v48 + 1), v15, 1);
  return result;
}
