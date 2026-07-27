// module: codexmate_lib/core/account_io
// addr: 0x140869440
// name: load_matching_export_auth
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::account_io::load_matching_export_auth | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall load_matching_export_auth(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r12
  __int128 v10; // xmm0
  __int64 result; // rax
  __int128 v12; // xmm0
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+28h] [rbp-58h]
  _BYTE v17[88]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v18; // [rsp+90h] [rbp+10h]
  __int128 v19; // [rsp+A0h] [rbp+20h]
  __int64 v20; // [rsp+B0h] [rbp+30h]
  __int128 v21; // [rsp+D0h] [rbp+50h]
  __int64 v22; // [rsp+E0h] [rbp+60h]
  __m256i v23; // [rsp+F0h] [rbp+70h] BYREF
  _OWORD v24[9]; // [rsp+110h] [rbp+90h] BYREF
  _BYTE v25[24]; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v26; // [rsp+1C0h] [rbp+140h]
  __int128 v27; // [rsp+1C8h] [rbp+148h]
  __int128 v28; // [rsp+1D8h] [rbp+158h]
  __int128 v29; // [rsp+1E8h] [rbp+168h]
  __int128 v30; // [rsp+1F8h] [rbp+178h]
  __int128 v31; // [rsp+208h] [rbp+188h]
  __int128 v32; // [rsp+218h] [rbp+198h]
  __int128 v33; // [rsp+228h] [rbp+1A8h]
  __int64 v34; // [rsp+238h] [rbp+1B8h]
  __int128 v35; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v36; // [rsp+250h] [rbp+1D0h]
  __int128 v37; // [rsp+260h] [rbp+1E0h]
  __int128 v38; // [rsp+270h] [rbp+1F0h]
  __int128 v39; // [rsp+280h] [rbp+200h]
  __int128 v40; // [rsp+290h] [rbp+210h]
  _QWORD v41[2]; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v42; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v43; // [rsp+2C0h] [rbp+240h]
  __int128 v44; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v45; // [rsp+2E0h] [rbp+260h]
  __int64 v46; // [rsp+2E8h] [rbp+268h]

  v46 = -2;
  sub_1403C9010(&v15, a2, a3);
  v9 = v15;
  if ( v15 == -2 )
  {
    v24[3] = *(_OWORD *)&v17[64];
    v24[2] = *(_OWORD *)&v17[48];
    v24[1] = *(_OWORD *)&v17[32];
    v24[0] = *(_OWORD *)&v17[16];
    *(_OWORD *)&v23.m256i_u64[2] = *(_OWORD *)v17;
    *(_OWORD *)v23.m256i_i8 = v16;
    *(_QWORD *)&v44 = &v23;
    *((_QWORD *)&v44 + 1) = sub_140B036A0;
    sub_14149C0F0(v25, &unk_141795DA8, &v44);
    sub_1407DA310(&v23);
    v10 = *(_OWORD *)v25;
    v35 = *(_OWORD *)v25;
    result = *(_QWORD *)&v25[16];
    *(_QWORD *)&v36 = *(_QWORD *)&v25[16];
    v43 = *(_QWORD *)&v25[16];
    v42 = *(_OWORD *)v25;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v25[16];
    *(_OWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = -2;
    return result;
  }
  *(_QWORD *)&v36 = *(_QWORD *)v17;
  v35 = v16;
  sub_141684120(v24, &v17[8], 144);
  v42 = v35;
  *(_OWORD *)&v23.m256i_u64[1] = v35;
  v23.m256i_i64[3] = v36;
  v23.m256i_i64[0] = v9;
  sub_1403C9DD0(&v15, &v23, a2, a3);
  if ( v15 == 2 )
  {
    v40 = *(_OWORD *)&v17[64];
    v39 = *(_OWORD *)&v17[48];
    v38 = *(_OWORD *)&v17[32];
    v37 = *(_OWORD *)&v17[16];
    v36 = *(_OWORD *)v17;
    v35 = v16;
    v41[0] = &v35;
    v41[1] = sub_140B036A0;
    sub_14149C0F0(&v42, &unk_141795DC6, v41);
    sub_1407DA310(&v35);
    v12 = v42;
    v21 = v42;
    v22 = v43;
    *(_QWORD *)(a1 + 24) = v43;
    *(_OWORD *)(a1 + 8) = v12;
    *(_QWORD *)a1 = -2;
    return sub_14052D960(v23.m256i_i64);
  }
  v45 = *(_QWORD *)v17;
  v44 = v16;
  v27 = *(_OWORD *)&v17[8];
  v28 = *(_OWORD *)&v17[24];
  v29 = *(_OWORD *)&v17[40];
  v30 = *(_OWORD *)&v17[56];
  v31 = *(_OWORD *)&v17[72];
  v32 = v18;
  v33 = v19;
  v34 = v20;
  v13 = *(_QWORD *)v17;
  *(_OWORD *)&v25[8] = v16;
  v26 = *(_QWORD *)v17;
  *(_QWORD *)v25 = v15;
  if ( *(_QWORD *)&v17[8] != a5 || (unsigned int)sub_1416847B0(v26, a4, a5) )
  {
    nullsub_1(v13);
    v14 = (void *)sub_140001650(53, 1);
    if ( !v14 )
      sub_1416C2D4B(1, 53);
    qmemcpy(v14, "Credential identity does not match the registry entry", 53);
    *(_QWORD *)(a1 + 8) = 53;
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 24) = 53;
    *(_QWORD *)a1 = -2;
    sub_1400157A0(v25);
    return sub_14052D960(v23.m256i_i64);
  }
  sub_141684120(a1, &v23, 176);
  return sub_1400157A0(v25);
}
