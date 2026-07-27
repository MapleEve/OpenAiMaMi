// module: codexmate_lib/commands
// addr: 0x14018b520
// name: load_bootstrap_state
// win 1.2.1 | tauri command handler = load_bootstrap_state | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall load_bootstrap_state(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int128 v4; // kr00_16
  const char *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+238h] [rbp+1B8h]
  __int64 v18; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v19; // [rsp+248h] [rbp+1C8h]
  __int128 v20; // [rsp+258h] [rbp+1D8h]
  char v21[384]; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v22; // [rsp+830h] [rbp+7B0h]
  int v23; // [rsp+838h] [rbp+7B8h]
  int v24; // [rsp+83Ch] [rbp+7BCh]
  __int64 v25; // [rsp+840h] [rbp+7C0h] BYREF
  __int64 v26; // [rsp+848h] [rbp+7C8h]
  const char *v27; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v28; // [rsp+858h] [rbp+7D8h]
  const char *v29; // [rsp+860h] [rbp+7E0h]
  __int128 *v30; // [rsp+868h] [rbp+7E8h]
  __int64 v31; // [rsp+870h] [rbp+7F0h]
  _OWORD v32[25]; // [rsp+CB0h] [rbp+C30h] BYREF
  __int128 v33; // [rsp+E40h] [rbp+DC0h] BYREF
  __int64 v34; // [rsp+E50h] [rbp+DD0h]
  __int64 v35; // [rsp+E58h] [rbp+DD8h]
  __int128 v36; // [rsp+E60h] [rbp+DE0h] BYREF
  __int64 v37; // [rsp+E70h] [rbp+DF0h]
  __int64 v38; // [rsp+E78h] [rbp+DF8h]
  __int64 v39; // [rsp+E80h] [rbp+E00h]
  char v40; // [rsp+E8Eh] [rbp+E0Eh]
  char v41; // [rsp+E8Fh] [rbp+E0Fh]
  __int64 v42; // [rsp+E90h] [rbp+E10h]

  v42 = -2;
  sub_141684120(v16, a1, 520);
  sub_141684120(v21, a1 + 520, 400);
  v37 = *(_QWORD *)(a1 + 936);
  v36 = *(_OWORD *)(a1 + 920);
  v31 = 0;
  v25 = (__int64)aLoadBootstrapS;
  v26 = 20;
  v27 = aRepo;
  v28 = 4;
  v29 = v16;
  v30 = &v36;
  v41 = 1;
  v2 = sub_140003640((volatile void *)(v17 + 16));
  if ( v2 )
  {
LABEL_2:
    v41 = 1;
    sub_1403D0780(&v18, v2);
    sub_141684120(v32, a1 + 520, 400);
    if ( (_DWORD)v18 != 2 )
    {
      sub_141684120(&v25, &v18, 1136);
LABEL_14:
      v40 = 0;
      sub_140436070(v32, &v25);
      goto LABEL_15;
    }
    v4 = v19;
    v5 = (const char *)v20;
    if ( (__int64)v20 < 0 )
    {
      v6 = 0;
      goto LABEL_5;
    }
    if ( (_QWORD)v20 )
    {
      nullsub_1(v3);
      v6 = 1;
      v10 = sub_140001650(v5, 1);
      if ( !v10 )
      {
LABEL_5:
        v38 = *((_QWORD *)&v4 + 1);
        v39 = v4;
        sub_1416C2D4B(v6, v5);
      }
      v11 = v10;
      sub_141684120(v10, *((_QWORD *)&v4 + 1), v5);
      if ( !(_QWORD)v4 )
        goto LABEL_13;
    }
    else
    {
      v11 = 1;
      if ( !(_QWORD)v19 )
        goto LABEL_13;
    }
    sub_140001660(*((_QWORD *)&v4 + 1), v4, 1);
LABEL_13:
    LOBYTE(v26) = 3;
    v27 = v5;
    v28 = v11;
    v29 = v5;
    v25 = 2;
    goto LABEL_14;
  }
  v41 = 1;
  sub_1416850A0(v32, &v25, &v27);
  if ( LOBYTE(v32[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v32[0] + 1);
    goto LABEL_2;
  }
  v20 = v32[1];
  v19 = v32[0];
  sub_141684120(&v25, a1 + 520, 360);
  v33 = *(_OWORD *)(a1 + 880);
  v34 = *(_QWORD *)(a1 + 896);
  v18 = 1;
  v41 = 0;
  sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v18, (unsigned int)&v33, v23, v24);
LABEL_15:
  if ( (_QWORD)v36 != -1 )
  {
    v12 = *((_QWORD *)&v36 + 1);
    v38 = v37;
    v39 = 0;
    v35 = *((_QWORD *)&v36 + 1);
    while ( v38 != v39 )
    {
      ++v39;
      v13 = v12 + 96;
      sub_1402C7520(v12, v7, v8, v9, v15);
      v12 = v13;
    }
    if ( (_QWORD)v36 )
      sub_140001660(*((_QWORD *)&v36 + 1), 96 * v36, 8);
  }
  return sub_140014270(v16);
}