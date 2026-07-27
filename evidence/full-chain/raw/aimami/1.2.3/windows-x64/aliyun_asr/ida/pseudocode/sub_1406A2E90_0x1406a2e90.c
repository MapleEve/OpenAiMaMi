// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1406a2e90
// name: sub_1406A2E90
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_1406A2E90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  char result; // al
  __int64 v9; // r14
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v17[24]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int128 v19; // [rsp+48h] [rbp-38h]
  __int128 v20; // [rsp+58h] [rbp-28h]
  __int128 v21; // [rsp+68h] [rbp-18h]
  __int128 v22; // [rsp+78h] [rbp-8h]
  __int64 v23; // [rsp+88h] [rbp+8h]
  __int128 v24; // [rsp+90h] [rbp+10h]
  __int128 v25; // [rsp+A0h] [rbp+20h]
  __int128 v26; // [rsp+B0h] [rbp+30h]
  __int128 v27; // [rsp+C0h] [rbp+40h]
  __int64 v28; // [rsp+D0h] [rbp+50h]
  __int128 v29; // [rsp+E0h] [rbp+60h]
  __int64 v30; // [rsp+F0h] [rbp+70h]
  __int128 v31; // [rsp+100h] [rbp+80h]
  __int64 v32; // [rsp+110h] [rbp+90h]
  __int64 v33; // [rsp+118h] [rbp+98h]
  __int64 v34; // [rsp+120h] [rbp+A0h]
  __int64 v35; // [rsp+128h] [rbp+A8h]

  v35 = -2;
  v5 = *(unsigned __int8 *)(a2 + 8);
  v34 = a2;
  switch ( v5 )
  {
    case 0LL:
      *(_QWORD *)(a2 + 472) = *(_QWORD *)a2;
      *(_BYTE *)(a2 + 492) = 0;
      goto LABEL_3;
    case 1LL:
      sub_1416C3400(&off_141781F68, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_141781F68, a2, a3, a4);
    case 3LL:
LABEL_3:
      v33 = a2 + 16;
      v6 = a3;
      hbb4b340bd79fba8f_0(v17, a2 + 16, a3);
      v7 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 == -2 )
      {
        *a1 = -2;
        result = 3;
        goto LABEL_26;
      }
      v32 = v18;
      v31 = *(_OWORD *)&v17[8];
      v24 = v19;
      v25 = v20;
      v26 = v21;
      v27 = v22;
      v28 = v23;
      v9 = v33;
      sub_14068A3A0(v33);
      if ( v7 == -1 )
      {
        v30 = v32;
        v29 = v31;
        goto LABEL_25;
      }
      a3 = v6;
      a2 = v34;
      *(_QWORD *)(v34 + 16) = v7;
      *(_OWORD *)(a2 + 24) = v31;
      *(_QWORD *)(a2 + 40) = v32;
      v10 = v25;
      v11 = v26;
      v12 = v27;
      *(_OWORD *)(a2 + 48) = v24;
      *(_OWORD *)(a2 + 64) = v10;
      *(_OWORD *)(a2 + 80) = v11;
      *(_OWORD *)(a2 + 96) = v12;
      *(_QWORD *)(a2 + 112) = v28;
      *(_QWORD *)(a2 + 120) = 0;
      *(_DWORD *)(a2 + 128) = 100000000;
      *(_QWORD *)(a2 + 136) = v9;
      *(_BYTE *)(a2 + 200) = 0;
LABEL_7:
      v33 = a2 + 120;
      sub_1406A19A0(v17, (__int64 *)(a2 + 120), a3, a4);
      if ( *(_QWORD *)v17 == -2 )
      {
        *a1 = -2;
        result = 4;
        goto LABEL_26;
      }
      v30 = *(_QWORD *)&v17[16];
      v29 = *(_OWORD *)v17;
      v13 = *(unsigned __int8 *)(v34 + 200);
      if ( v13 == 5 )
        goto LABEL_23;
      if ( v13 == 4 )
      {
        sub_14052DE20(v34 + 208);
        goto LABEL_23;
      }
      if ( v13 != 3 )
        goto LABEL_24;
      v14 = *(_QWORD *)(v34 + 208);
      if ( v14 == -1 )
        goto LABEL_23;
      v15 = 5;
      if ( v14 < 0 )
        v15 = v14 ^ 0x8000000000000000uLL;
      if ( v15 >= 4 )
      {
        v16 = 208;
        if ( v15 == 4 )
        {
          v14 = *(_QWORD *)(v34 + 216);
          v16 = 216;
          if ( (unsigned __int64)v14 > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_23;
        }
      }
      else
      {
        v14 = *(_QWORD *)(v34 + 216);
        v16 = 216;
      }
      if ( v14 )
        sub_140001660(*(_QWORD *)(v34 + v16 + 8), v14, 1);
LABEL_23:
      sub_1400104F0(v34 + 168);
LABEL_24:
      sub_14068F4B0(v34 + 16);
LABEL_25:
      a1[2] = v30;
      *(_OWORD *)a1 = v29;
      result = 1;
LABEL_26:
      *(_BYTE *)(v34 + 8) = result;
      return result;
    case 4LL:
      goto LABEL_7;
  }
}