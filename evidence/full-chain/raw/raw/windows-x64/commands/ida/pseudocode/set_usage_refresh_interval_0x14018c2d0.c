// module: codexmate_lib/commands
// addr: 0x14018c2d0
// name: set_usage_refresh_interval
// win 1.2.1 | tauri command handler = set_usage_refresh_interval | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_usage_refresh_interval(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int128 v7; // kr00_16
  __int128 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // [rsp+20h] [rbp-60h]
  _BYTE v15[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+238h] [rbp+1B8h]
  _BYTE v17[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v18; // [rsp+3C0h] [rbp+340h]
  int v19; // [rsp+3C8h] [rbp+348h]
  int v20; // [rsp+3CCh] [rbp+34Ch]
  _BYTE v21[152]; // [rsp+3D0h] [rbp+350h] BYREF
  const char *v22; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v23; // [rsp+470h] [rbp+3F0h]
  const char *v24; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v25; // [rsp+480h] [rbp+400h]
  _BYTE *v26; // [rsp+488h] [rbp+408h]
  __int128 *v27; // [rsp+490h] [rbp+410h]
  __int64 v28; // [rsp+498h] [rbp+418h]
  int v29; // [rsp+5F8h] [rbp+578h] BYREF
  __m256i v30; // [rsp+600h] [rbp+580h]
  __int128 v31; // [rsp+690h] [rbp+610h] BYREF
  __int64 v32; // [rsp+6A0h] [rbp+620h]
  __int128 v33; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v34; // [rsp+6C0h] [rbp+640h]
  __m256i v35; // [rsp+6C8h] [rbp+648h] BYREF
  __int64 v36; // [rsp+6E8h] [rbp+668h]
  __m256i v37; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v38; // [rsp+718h] [rbp+698h] BYREF
  __m256i v39; // [rsp+720h] [rbp+6A0h]
  __int128 v40; // [rsp+740h] [rbp+6C0h] BYREF
  __int64 v41; // [rsp+750h] [rbp+6D0h]
  __int64 v42; // [rsp+760h] [rbp+6E0h]
  __int64 v43; // [rsp+768h] [rbp+6E8h]
  char v44; // [rsp+775h] [rbp+6F5h]
  char v45; // [rsp+776h] [rbp+6F6h]
  char v46; // [rsp+777h] [rbp+6F7h]
  __int64 v47; // [rsp+778h] [rbp+6F8h]

  v47 = -2;
  sub_141684120(v15, a1, 520);
  sub_141684120(v17, a1 + 520, 400);
  v41 = *(_QWORD *)(a1 + 936);
  v40 = *(_OWORD *)(a1 + 920);
  v28 = 0;
  v22 = aSetUsageRefres;
  v23 = 26;
  v24 = aApp;
  v25 = 3;
  v26 = v15;
  v27 = &v40;
  v46 = 1;
  sub_1401C3650(&v29, &v22);
  if ( v29 == -1 )
  {
    v39 = v30;
    sub_141684120(&v22, a1 + 520, 360);
    *(_OWORD *)v37.m256i_i8 = *(_OWORD *)(a1 + 880);
    v37.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    v38 = 1;
    v46 = 0;
    sub_14047E370((unsigned int)&v22, v18, (unsigned int)&v38, (unsigned int)&v37, v19, v20);
    goto LABEL_22;
  }
  sub_141684120(v21, &v29, 152);
  v28 = 0;
  v22 = aSetUsageRefres;
  v23 = 26;
  v24 = aRepo;
  v25 = 4;
  v26 = v15;
  v27 = &v40;
  v2 = sub_140003640((volatile void *)(v16 + 16));
  if ( !v2 )
  {
    sub_1416850A0(&v35, &v22, &v24);
    if ( v35.m256i_i8[0] != -1 )
    {
      v39 = v35;
      sub_141684120(&v22, a1 + 520, 360);
      *(_OWORD *)v37.m256i_i8 = *(_OWORD *)(a1 + 880);
      v37.m256i_i64[2] = *(_QWORD *)(a1 + 896);
      v38 = 1;
      v45 = 0;
      sub_14047E370((unsigned int)&v22, v18, (unsigned int)&v38, (unsigned int)&v37, v19, v20);
      v46 = 0;
      sub_140014150(v21);
      goto LABEL_22;
    }
    v2 = v35.m256i_i64[1];
  }
  v28 = 0;
  v22 = aSetUsageRefres;
  v23 = 26;
  v24 = aInterval;
  v25 = 8;
  v26 = v15;
  v27 = &v40;
  v45 = 1;
  sub_1409757B0(&v37, &v22);
  LOBYTE(v43) = v37.m256i_i8[0];
  if ( v37.m256i_i8[0] == -1 )
  {
    v34 = v37.m256i_i64[3];
    v33 = *(_OWORD *)&v37.m256i_u64[1];
    sub_1403D39C0(&v38, v21, v2, &v33);
    sub_141684120(&v22, a1 + 520, 400);
    if ( (_DWORD)v38 == 1 )
    {
      v7 = *(_OWORD *)v39.m256i_i8;
      *((_QWORD *)&v8 + 1) = v39.m256i_i64[2];
      if ( v39.m256i_i64[2] < 0 )
      {
        v9 = 0;
        goto LABEL_11;
      }
      if ( v39.m256i_i64[2] )
      {
        nullsub_1(v6);
        v9 = 1;
        v10 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
        if ( !v10 )
        {
LABEL_11:
          v42 = *((_QWORD *)&v7 + 1);
          v43 = v7;
          sub_1416C2D4B(v9, *((_QWORD *)&v8 + 1));
        }
        *(_QWORD *)&v8 = v10;
        sub_141684120(v10, *((_QWORD *)&v7 + 1), *((_QWORD *)&v8 + 1));
      }
      else
      {
        *(_QWORD *)&v8 = 1;
      }
      if ( (_QWORD)v7 )
        sub_140001660(*((_QWORD *)&v7 + 1), v7, 1);
      LOBYTE(v29) = 3;
      v30.m256i_i64[0] = *((_QWORD *)&v8 + 1);
      *(_OWORD *)&v30.m256i_u64[1] = v8;
    }
    else
    {
      v30.m256i_i64[2] = v39.m256i_i64[2];
      *(_OWORD *)v30.m256i_i8 = *(_OWORD *)v39.m256i_i8;
      LOBYTE(v29) = -1;
    }
    v44 = 0;
    sub_140438B60(&v22, &v29);
    goto LABEL_22;
  }
  v39 = v37;
  sub_141684120(&v22, a1 + 520, 360);
  v31 = *(_OWORD *)(a1 + 880);
  v32 = *(_QWORD *)(a1 + 896);
  v38 = 1;
  sub_14047E370((unsigned int)&v22, v18, (unsigned int)&v38, (unsigned int)&v31, v19, v20);
  v46 = 0;
  sub_140014150(v21);
LABEL_22:
  if ( (_QWORD)v40 != -1 )
  {
    v11 = *((_QWORD *)&v40 + 1);
    v42 = v41;
    v43 = 0;
    v36 = *((_QWORD *)&v40 + 1);
    while ( v42 != v43 )
    {
      ++v43;
      v12 = v11 + 96;
      sub_1402C7520(v11, v3, v4, v5, v14);
      v11 = v12;
    }
    if ( (_QWORD)v40 )
      sub_140001660(*((_QWORD *)&v40 + 1), 96 * v40, 8);
  }
  return sub_140014270(v15);
}