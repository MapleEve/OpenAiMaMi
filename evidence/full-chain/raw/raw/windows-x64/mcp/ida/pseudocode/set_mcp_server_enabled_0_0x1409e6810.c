// module: codexmate_lib/core/mcp
// addr: 0x1409e6810
// name: set_mcp_server_enabled_0
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::mcp::set_mcp_server_enabled | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall set_mcp_server_enabled_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(),
        char a6)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // kr00_16
  __int64 v14; // rax
  __int64 v15; // r15
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // r13
  __int64 v20; // r12
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+38h] [rbp-48h]
  char *v29; // [rsp+40h] [rbp-40h]
  __int128 v30; // [rsp+110h] [rbp+90h] BYREF
  __int128 v31; // [rsp+120h] [rbp+A0h]
  __int128 v32; // [rsp+130h] [rbp+B0h]
  __int128 v33; // [rsp+140h] [rbp+C0h]
  __int128 v34; // [rsp+150h] [rbp+D0h]
  __int128 v35; // [rsp+160h] [rbp+E0h]
  __int64 v36; // [rsp+1F0h] [rbp+170h]
  __int64 v37; // [rsp+1F8h] [rbp+178h]
  __int64 v38; // [rsp+200h] [rbp+180h]
  __int64 v39; // [rsp+208h] [rbp+188h]
  _QWORD v40[3]; // [rsp+210h] [rbp+190h] BYREF
  __int64 v41; // [rsp+228h] [rbp+1A8h]
  __int64 v42; // [rsp+230h] [rbp+1B0h]
  __int64 v43; // [rsp+238h] [rbp+1B8h]
  __int64 v44; // [rsp+240h] [rbp+1C0h]
  char v45; // [rsp+24Fh] [rbp+1CFh] BYREF
  __int64 v46; // [rsp+250h] [rbp+1D0h]

  v46 = -2;
  v40[0] = a4;
  v40[1] = a5;
  v45 = a6;
  v27 = a4;
  v28 = a5;
  v29 = &v45;
  sub_1406123F0((__int64 *)&v30, a2, a3, (__int64)"change MCP server state", 23, &v27);
  if ( (_DWORD)v30 == -1 )
  {
    sub_1409E1D30(&v30, a2, a3);
    v13 = v30;
    v14 = *((_QWORD *)&v31 + 1);
    v15 = v31;
    if ( (_QWORD)v30 == -1 )
    {
      v36 = v31;
      v43 = *((_QWORD *)&v30 + 1);
      v38 = *((_QWORD *)&v30 + 1);
      v37 = v31;
      v44 = v31 + 224LL * *((_QWORD *)&v31 + 1);
      v39 = v44;
      v19 = v31;
      v42 = v31;
      if ( *((_QWORD *)&v31 + 1) )
      {
        do
        {
          sub_141684120(&v30, v15, 224);
          v19 = v15 + 224;
          v37 = v15 + 224;
          if ( (__int64 (__fastcall *)())v31 != a5 || (unsigned int)sub_1416847B0(*((_QWORD *)&v30 + 1), a4, a5) )
          {
            sub_1402C6070(&v30);
          }
          else
          {
            v20 = v30;
            if ( (_QWORD)v30 != -1 )
            {
              sub_141684120(a1 + 8, v15 + 8, 216);
              *(_QWORD *)a1 = v20;
              goto LABEL_15;
            }
          }
          v15 += 224;
        }
        while ( v19 != v44 );
        v19 = v44;
      }
      v27 = -1;
      sub_140982190(&v27);
      v27 = (__int64)v40;
      v28 = sub_14041F680;
      sub_14149C0F0((char *)&v30 + 8, &unk_1417A4D4A, &v27);
      *(_QWORD *)&v30 = 8;
      *(_OWORD *)(a1 + 88) = v35;
      v21 = v31;
      v22 = v32;
      v23 = v33;
      *(_OWORD *)(a1 + 72) = v34;
      *(_OWORD *)(a1 + 56) = v23;
      *(_OWORD *)(a1 + 40) = v22;
      *(_OWORD *)(a1 + 24) = v21;
      *(_OWORD *)(a1 + 8) = v30;
      *(_QWORD *)a1 = -1;
LABEL_15:
      v41 = 0x6DB6DB6DB6DB6DB7LL * ((unsigned __int64)(v44 - v19) >> 5);
      v44 = 0;
      v40[2] = v19;
      v24 = v19;
      while ( v41 != v44 )
      {
        ++v44;
        v25 = v24 + 224;
        sub_1402C6070(v24);
        v24 = v25;
      }
      if ( v43 )
        sub_140001660(v42, 224 * v43, 8);
    }
    else
    {
      v16 = v32;
      v17 = v33;
      v18 = v34;
      *(_OWORD *)(a1 + 88) = v35;
      *(_OWORD *)(a1 + 72) = v18;
      *(_OWORD *)(a1 + 56) = v17;
      *(_OWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 32) = v14;
      *(_QWORD *)a1 = -1;
    }
  }
  else
  {
    *(_OWORD *)(a1 + 88) = v35;
    *(_OWORD *)(a1 + 72) = v34;
    v10 = v30;
    v11 = v31;
    v12 = v32;
    *(_OWORD *)(a1 + 56) = v33;
    *(_OWORD *)(a1 + 40) = v12;
    *(_OWORD *)(a1 + 24) = v11;
    *(_OWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = -1;
  }
  return a1;
}
